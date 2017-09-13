#include "StdAfx.h"
#include ".\pmestdsolidoffsetfeature.h"
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


PME_IMPLEMENT_RUNTIME_TYPE(PmeStdSolidOffsetFeature, PmeStdSolidFeature)

//double DegreeToRadian(double degree) {return M_PI / 180.0 * degree;}

PmeStdSolidOffsetFeature::PmeStdSolidOffsetFeature(PmePart * pPart)
: PmeStdSolidFeature(pPart)
{
}	

PmeStdSolidOffsetFeature::PmeStdSolidOffsetFeature(PmePart * pPart,
												PmeReferences * pTargetFaces,
												double thickness)
: PmeStdSolidFeature(pPart)
, m_pTargetFaces(pTargetFaces)
, m_thickness(thickness)
{
	m_pTargetFaces = pTargetFaces->Clone();
}

PmeStdSolidOffsetFeature::~PmeStdSolidOffsetFeature(void)
{
}

// 16-02-22 �Ǽ���
void PmeStdSolidOffsetFeature::Update(void)
{
	SetParentName(m_pTargetFaces);
	PmeThrowExceptionIf<PmeIlligalOperationException>(m_pTargetFaces == 0);
	PmeThrowExceptionIf<PmeIlligalOperationException>(m_thickness < 0);

	api_set_int_option("annotations", TRUE);

	PmePart * pPart = GetPart();
	BODY* pOldBody = pPart->GetExplicitModel()->GetSolid()->GetSolid();
	
	// Shell ���� ���� Face ����� ����. SplitCheck�� ����
	ENTITY_LIST old_face_list1;
	get_faces((ENTITY*) pOldBody, old_face_list1);
	
	// Shell�� Ÿ�� ��
	ENTITY_LIST targetFaces = m_pTargetFaces->CreateEntityList();
	
	std::vector<FACE*> pOffsetFaces;					// faces being omitted.
	for (int i = 0; i < targetFaces.count(); ++i)
	{
		pOffsetFaces.push_back((FACE*)targetFaces[i]);
	}
	
	const int n_def_face = targetFaces.count();			// number of faces being omitted.
	double def_offset = m_thickness;				// default outer offset (usually +).
	lop_options* options = 0;						// local operations options. NULL argument will set the default values.
	AcisOptions* ao = NULL;

	// ���� �ָ����� Bounding box�� �����´�.
	SPAposition minPoint;
	SPAposition maxPoint;
	WCS * pWCS = NULL;
	SPAboxing_options boxingOptions(pWCS, SPAboxing_tight);

	api_get_entity_box(pOldBody, minPoint, maxPoint, &boxingOptions);
	
	// Bounding box�� �ּڰ�/�ִ��� 1��ŭ ����/������Ų��.
	// Offset Operation�� �۾����� ������ ����
	for (int i = 0; i < 3; ++i)
	{
		minPoint.set_coordinate(i, minPoint.coordinate(i) - 100);
		maxPoint.set_coordinate(i, maxPoint.coordinate(i) + 100);
	}

	API_BEGIN

		result = api_offset_faces_specific(n_def_face, &pOffsetFaces[0], def_offset, 0, 0, 0, minPoint, maxPoint, options, ao);

		check_outcome(result);

		if(result.ok())
		{
			PmeSolid * pSolid = pPart->GetExplicitModel()->GetSolid();
			pSolid->UpdateSolid(pOldBody);
			SetSolid(pSolid);
		}

	API_END
	
	AttachName(pOldBody);
	
	api_clear_annotations();
}

// 16-02-22 �Ǽ���
void PmeStdSolidOffsetFeature::AttachName(BODY *& pBody)
{
	// Offset�� Ÿ�� ��
	ENTITY_LIST targetFaces = m_pTargetFaces->CreateEntityList();
	
	for (int i = 0; i < targetFaces.count(); ++i)
	{
		FACE * pFace = (FACE*)targetFaces[i];
		ATTRIB_FACENAME * pAttrib = (ATTRIB_FACENAME*)find_attrib(pFace, ATTRIB_PME_TYPE, ATTRIB_FACENAME_TYPE);
		CString pfaceName = pAttrib->GetFaceName();

		pfaceName = GetName() + ",{" + pfaceName + "},OffsetFeature:0,0:0;0";
		new ATTRIB_FACENAME(pFace, pfaceName);

		PmeFeatureTagMarker::Detach(pFace);
		PmeFeatureTagMarker::Attach(pFace, this);
	}
}

// 16-08-09 �Ǽ���
void PmeStdSolidOffsetFeature::GetElementsfromFaceName(CString faceName, CString & tempElementsName)
{
	int prev = 0;
	int next = 0;
	next = faceName.Find(_T(','), prev);

	CString s1 = faceName.Mid(prev, next - prev);

	prev = next+1;
	next = faceName.Find(_T(','), prev);
	prev = next+1;
	next = faceName.Find(_T(','), prev);
	CString s2 = faceName.Mid(prev, next - prev);

	tempElementsName = s1 + "," + s2;
}