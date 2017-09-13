#include "StdAfx.h"
#include ".\pmestdsolidshellfeature.h"
#include ".\PmePart.h"
#include ".\PmeExplicitModel.h"
#include ".\PmeSolid.h"
#include ".\PmeReference.h"
#include ".\PmeReferences.h"
#include ".\PmeExceptionTest.h"
#include ".\PmeIlligalOperationException.h"
#include ".\PmeSketchUtility.h"
#include ".\PmeSelectionManager.h"
#include ".\PmeDatumPlane.h"
#include ".\PmeDatumPlaneUtility.h"
#include ".\PmeQuery.h"
#include ".\PmeArgumentTypeException.h"
#include ".\attr_pme_facename.h"
#include ".\attr_pme_vertexname.h"
#include ".\pmepersistentname.h"
#include ".\PmePersistentNameAPI.h"


PME_IMPLEMENT_RUNTIME_TYPE(PmeStdSolidShellFeature, PmeStdSolidFeature)

//double DegreeToRadian(double degree) {return M_PI / 180.0 * degree;}

PmeStdSolidShellFeature::PmeStdSolidShellFeature(PmePart * pPart)
: PmeStdSolidFeature(pPart)
{
}	

PmeStdSolidShellFeature::PmeStdSolidShellFeature(PmePart * pPart,
												PmeReferences * pTargetFaces,
												double innerThickness,
												double outerThickness)
: PmeStdSolidFeature(pPart)
, m_pTargetFaces(pTargetFaces)
, m_innerThickness(innerThickness)
, m_outerThickness(outerThickness)
{
	m_pTargetFaces = pTargetFaces->Clone();
}

PmeStdSolidShellFeature::~PmeStdSolidShellFeature(void)
{
}

// 16-02-22 �Ǽ���
void PmeStdSolidShellFeature::Update(void)
{
	SetParentName(m_pTargetFaces);
	PmeThrowExceptionIf<PmeIlligalOperationException>(m_pTargetFaces == 0);
	PmeThrowExceptionIf<PmeIlligalOperationException>(m_innerThickness < 0);
	PmeThrowExceptionIf<PmeIlligalOperationException>(m_outerThickness < 0);

	api_set_int_option("annotations", TRUE);

	PmePart * pPart = GetPart();
	BODY* pOldBody = pPart->GetExplicitModel()->GetSolid()->GetSolid();
	
	// Shell ���� ���� Face ����� ����. SplitCheck�� ����
	ENTITY_LIST old_face_list1;
	get_faces((ENTITY *) pOldBody, old_face_list1);

	bool result = CreateShellBody(pOldBody);

	if(result)
	{
		PmeSolid * pSolid = pPart->GetExplicitModel()->GetSolid();
		pSolid->UpdateSolid(pOldBody);
		SetSolid(pSolid);
	}
	
	SplitCheck(pOldBody, old_face_list1);
	AttachName(pOldBody);
	
	api_clear_annotations();
}

bool PmeStdSolidShellFeature::CreateShellBody(BODY *& pBody)
{
	// Shell�� Ÿ�� ��
	ENTITY_LIST targetFaces = m_pTargetFaces->CreateEntityList();
	
	std::vector<FACE*> pOpenFaces;					// faces being omitted.
	for (int i = 0; i < targetFaces.count(); ++i)
	{
		pOpenFaces.push_back((FACE *)targetFaces[i]);
	}
	
	const int nOpen = targetFaces.count();			// number of faces being omitted.
	double innerDeafualt = (-1)*m_innerThickness;	// default inner offset (usually -).
	double outerDeafualt = m_outerThickness;		// default outer offset (usually +).
	lop_options* options = 0;						// local operations options. NULL argument will set the default values.

	// ���� �ָ����� Bounding box�� �����´�.
	SPAposition minPoint;
	SPAposition maxPoint;
	WCS * pWCS = NULL;
	SPAboxing_options boxingOptions(pWCS, SPAboxing_tight);

	api_get_entity_box(pBody, minPoint, maxPoint, &boxingOptions);
	
	// Bounding box�� �ּڰ�/�ִ��� 1��ŭ ����/������Ų��.
	// Shell Operation�� �۾����� ������ ����
	for (int i = 0; i < 3; ++i)
	{
		minPoint.set_coordinate(i, minPoint.coordinate(i) - 100);
		maxPoint.set_coordinate(i, maxPoint.coordinate(i) + 100);
	}

	API_BEGIN

		result = api_hollow_body_specific(pBody, nOpen, &pOpenFaces[0], innerDeafualt, outerDeafualt, 0, 0, 0, 0, 0, 0, minPoint, maxPoint, options);
		check_outcome(result);

		if(!result.ok())
			return false;

	API_END

	return true;
}

// 16-03-02 �Ǽ���
void PmeStdSolidShellFeature::AttachName(BODY *& pBody)
{
	ENTITY_LIST faceList;
	api_get_faces(pBody, faceList);

	// Shell Ư¡������ ���� ���� �� ���� ���̹��� �β� ������ ���� �� ���� �̸��� ����.
	// �ִܰŸ��� Shell�� �β��� ��ġ�ϴ� ���, �ش� ���� �̸��� ������ �Ѵ�.
	for (int i = 0; i < faceList.count(); ++i)
	{
		FACE * pFace = (FACE *)faceList[i];

		CString faceName;
        PmePersistentNameAPI::FindFaceName(pFace, faceName);

		// ���� ������ ���� ��� ����
		if(faceName == "")
		{
            for (int j = 0; j < faceList.count(); ++j)
			{
				FACE * pFace1 = (FACE *)faceList[j];
				
				CString faceName1;
				PmePersistentNameAPI::FindFaceName(pFace1, faceName1);

				const char * faceType1 = get_entity_type_string((ENTITY*)pFace);
				const char * faceType2 = get_entity_type_string((ENTITY*)pFace1);

				if 	((i != j)							// �ڱ� �ڽ��� �ƴ� ���.
					&& (faceName1 != "")				// ���� ���� ���.
					&& (faceType1 == faceType2))		// face�� Ÿ���� ���� ���.
				{
					// api_planar_face_pr �Ӽ� ���
					double req_rel_accy = 0;		// relative precision desired
					double area;					// area returned
					SPAposition centre, centre1;	// centroid return
					double moment_a;				// first principal moment
					double moment_b;				// second principal moment
					SPAunit_vector axis_a, axis_a1;	// first principal axis
					SPAunit_vector axis_b, axis_b1;	// second principal axis
					double est_rel_accy_achieved;	// estimate of relative accuracy achieved
					AcisOptions* ao = NULL;
				
					// Shell ���� �Ӽ� ���. �߽��� (centre) �� ����(axis_a, axis_b)�� ���ϱ� ����.
					api_planar_face_pr(pFace, req_rel_accy, area, centre, moment_a, moment_b, axis_a, axis_b, est_rel_accy_achieved, ao);
					// ���� ���� �Ӽ� ���
					api_planar_face_pr(pFace1, req_rel_accy, area, centre1, moment_a, moment_b, axis_a1, axis_b1, est_rel_accy_achieved, ao);
					
					// Shell��� ���� ���� Normal ���� ���
					SPAunit_vector axis_c, axis_c1;
					
					axis_c.set_x(axis_a.y()*axis_b.z()-axis_a.z()*axis_b.y());
					axis_c.set_y(axis_a.z()*axis_b.x()-axis_a.x()*axis_b.z());
					axis_c.set_z(axis_a.x()*axis_b.y()-axis_a.y()*axis_b.x());
					
					axis_c1.set_x(axis_a1.y()*axis_b1.z()-axis_a1.z()*axis_b1.y());
					axis_c1.set_y(axis_a1.z()*axis_b1.x()-axis_a1.x()*axis_b1.z());
					axis_c1.set_z(axis_a1.x()*axis_b1.y()-axis_a1.y()*axis_b1.x());
					
					// api_entity_entity_distance �Ӽ� ���
					double      distance;
					SPAposition pos1, pos2;
					param_info  ent_info1, ent_info2;

					// �� ���� �ִ� �Ÿ�(distance)�� ����
					api_entity_entity_distance((ENTITY*)pFace, (ENTITY*)pFace1, pos1, pos2, distance, ent_info1, ent_info2, ao);

					// �� ���� �ִ� �Ÿ��� Shell�� �β��� ���� ��쿡 ����. distance1, distance2 ��� ��
					// Cylindrical face�� ��� 10e-14������ ������ �߻�
					if ((abs(m_innerThickness + m_outerThickness - distance) < 0.0000000001))
					{
						const char * planar = "planar face";
						const char * cylindrical = "cylindrical face";

						if(((*faceType1 == *planar) && (axis_c == (-1)*axis_c1))			// Planar�� ���, ���� ���� �ݴ�
							|| ((*faceType1 == *cylindrical) && (axis_c == axis_c1)))	// Cylindrical�� ���, ���� ���� ����
						{
							// �̸� �ο�
							CString faceName = GetName() + ",{" + faceName1 + "},ShellFeature:0,0:0;0";
							new ATTRIB_FACENAME(pFace, faceName);
							
							PmeFeatureTagMarker::Detach(pFace);
							PmeFeatureTagMarker::Attach(pFace, this);

							break;
						}
					}		
				}
			}
		}
	}

	//AttachFeatureTagToNewFaces(pBody);
}

// 16-08-09 �Ǽ���
void PmeStdSolidShellFeature::GetElementsfromFaceName(CString faceName, CString & tempElementsName)
{
	int prev, next;
	int count = 3;
	CString s1;

	prev = 0;
	next = faceName.Find(_T(','), prev);

	if (faceName.Find("SweepFeature") != -1)
		count = 5;

	for (int i = 0; i < count; ++i)
	{
		s1 = faceName.Mid(prev, next - prev);
		tempElementsName = tempElementsName + s1 + ",";

		prev = next + 1;
		next = faceName.Find(_T(','), prev);
	}
}