#include "StdAfx.h"
#include "PmeStdSolidLoftSectionsFeature.h"
#include <algorithm>

#include "PmePart.h"
#include "PmeSelectionManager.h"
#include "PmeSolid.h"
#include "PmeExplicitModel.h"

#include ".\PmeReference.h"
#include ".\PmeExceptionTest.h"
#include ".\PmeIlligalOperationException.h"
#include ".\PmeSketchUtility.h"
#include ".\PmeSketch.h"
#include ".\attr_pme_facename.h"
#include ".\PmeQuery.h"
#include ".\PmeDatumPlane.h"
#include ".\PmeDatumPlaneUtility.h"
#include ".\pmepersistentname.h"
#include ".\attr_pme_vertexname.h"
#include ".\PmePersistentNameAPI.h"
#include ".\PmeArgumentTypeException.h"

#include ".\PmeStdSketchFeature.h"
#include ".\PmeStdSketchGeometries.h"
#include ".\PmeStdSketchControlPoint.h"
#include ".\PmeStdSketchLine.h"
#include ".\PmeStdSketchCenterline.h"
#include ".\PmeStdSketchCircle.h"
#include ".\PmeStdSketchCircularArc.h"
#include ".\MrTolerance.h"

PME_IMPLEMENT_RUNTIME_TYPE(PmeStdSolidLoftSectionsFeature, PmeStdSolidFeature)

PmeStdSolidLoftSectionsFeature::PmeStdSolidLoftSectionsFeature(PmePart * pPart)
	: PmeStdSolidFeature(pPart)
{
}

PmeStdSolidLoftSectionsFeature::PmeStdSolidLoftSectionsFeature(PmePart * pPart,
	PmeReferences * pSections,
	bool isCut)
	: PmeStdSolidFeature(pPart)
	, m_pSections(pSections)
	, m_isCut(isCut)
{
	m_pStartSketch = m_pSections->GetItem(0);
	m_pEndSketch = m_pSections->GetItem(m_pSections->GetSize() - 1);
}

PmeStdSolidLoftSectionsFeature::~PmeStdSolidLoftSectionsFeature(void)
{

}

void PmeStdSolidLoftSectionsFeature::Update(void)
{
 	SetParentName(m_pSections);
	
	PmePart * pPart = GetPart();
 	PmeSolid * pSolid = pPart->GetExplicitModel()->GetSolid();
 
 	BODY * pOldBody = pSolid->GetSolid();

	// ����Ʈ �ٵ� ����
	BODY * pNewBody = 0;
 	CreateSolidBody(pNewBody);
	
	//
	ENTITY_LIST old_face_list1, old_face_list2, old_face_list3;
	get_faces((ENTITY*) pOldBody, old_face_list1);
	get_faces((ENTITY*) pNewBody, old_face_list2);

	CopyFaces(old_face_list2, old_face_list3);
	//

 	API_BEGIN
		if(pOldBody)
		{
			if (!IsCut())
				result = api_boolean(pNewBody, pOldBody, UNION);
			else
				result = api_boolean(pNewBody, pOldBody, SUBTRACTION);
			
			check_outcome(result);
		}
		else
		{
			if (!IsCut())
				pOldBody = pNewBody;
		}

		if(result.ok())
		{
			PmeSolid * pSolid = pPart->GetExplicitModel()->GetSolid();
			pSolid->UpdateSolid(pOldBody);
			SetSolid(pSolid);
		}
		else
		{
			TRACE("\nextension err: %s\n",result.get_error_info()->error_message()); 
		}
		check_outcome(result);
 	API_END	

	//
	SplitCheck(pOldBody, old_face_list1);
	SplitCheck(pOldBody, old_face_list2);
	MergeCheck(pOldBody, old_face_list2, old_face_list3);
	//

}

// ����Ʈ �ٵ� ����
void PmeStdSolidLoftSectionsFeature::CreateSolidBody(BODY *& pBody)
{
	api_set_int_option("annotations", TRUE);

	skin_options options;
	options.set_solid(1);

	ENTITY_LIST pSectionList;

	for (int i = 0; i < GetLoftSections()->GetSize(); i++)
	{
		PmeReference * pReference = GetLoftSections()->GetItem(i);
		
		// Face�� ���
		if (pReference->GetReferenceType() == PmeReferenceType_Brep)
		{
			ENTITY * pFace = pReference->GetPart()->GetSelectionManager()->GetBrepFromReference(pReference);
			pSectionList.add(pFace);
		}
		// Sketch�� ���
		else if (pReference->GetReferenceType() == PmeReferenceType_ExplicitModelObject)
		{
			BODY * pSketch = CreateWireFromSketch(pReference);
			pSectionList.add(pSketch);
		}
	}
	
	API_BEGIN
		// Loft �����ϴ� API
		result = api_skin_wires(pSectionList.count(), pSectionList, pBody, &options);
		
		if(!result.ok())
			TRACE("\nextension err: %s\n",result.get_error_info()->error_message()); 

		check_outcome(result);
		
	API_END

	AttachName(pBody);

	api_clear_annotations();
}

void PmeStdSolidLoftSectionsFeature::Transform(const SPAtransf & transformation, BODY *& pBody)
{
	pBody = 0;

	BODY * pNewBody = 0;
	CreateSolidBody(pNewBody);

	ASSERT(pNewBody);

	API_BEGIN
        result = api_apply_transf(pNewBody, transformation);
		
		if(result.ok())
			pBody = pNewBody;
		
	API_END
}

bool PmeStdSolidLoftSectionsFeature::IsCut(void)
{
	if(m_isCut)
		return true;
	else
		return false;
}



// 16-02-22 �Ǽ���
void PmeStdSolidLoftSectionsFeature::AttachName(BODY *& pBody)
{
	AttachFeatureTag(pBody);
	
	// ���� �� ���̹�
	ENTITY_LIST annotationListStart;
	api_find_annotations(annotationListStart, is_SKIN_ANNO_START_FACE);

	SKIN_ANNO_START_FACE	* pAnnotationStartCaps;
	
	annotationListStart.init();

	while((pAnnotationStartCaps = (SKIN_ANNO_START_FACE *)annotationListStart.next()) != NULL)
	{
		ENTITY_LIST annotationInputs;
		pAnnotationStartCaps->inputs(annotationInputs);		

		FACE * pStartFace = pAnnotationStartCaps->face();

		CString startFaceName = GetName() + ",0,-1,0,0,0,LoftFeature:0,0:0;0";

		new ATTRIB_FACENAME(pStartFace, startFaceName);
	}

	// �� �� ���̹�
	ENTITY_LIST annotationListEnd;
	api_find_annotations(annotationListEnd, is_SKIN_ANNO_END_FACE);

	SKIN_ANNO_END_FACE	* pAnnotationEndCaps;
	
	annotationListEnd.init();
	
	while((pAnnotationEndCaps = (SKIN_ANNO_END_FACE *)annotationListEnd.next()) != NULL)
	{
		ENTITY_LIST annotationInputs;
		pAnnotationEndCaps->inputs(annotationInputs);		

		FACE * pEndFace = pAnnotationEndCaps->face();

		CString endFaceName = GetName() + ",0,-2,0,0,0,LoftFeature:0,0:0;0";

		new ATTRIB_FACENAME(pEndFace, endFaceName);

	}
	
	// �� �� ���̹�
	ENTITY_LIST annotationListLateral;
	api_find_annotations(annotationListLateral, is_SKIN_ANNO_LAT_FACE);

	annotationListLateral.init();

	SKIN_ANNO_LAT_FACE * pAnnotationEdgeLat;

	CString startSketchName = PmeSketchUtility::GetSketch(GetStartSketch())->GetName();
	CString endSketchName = PmeSketchUtility::GetSketch(GetEndSketch())->GetName();

	while((pAnnotationEdgeLat = (SKIN_ANNO_LAT_FACE *)annotationListLateral.next()) != NULL)
	{
		ENTITY_LIST annotationInputs;
		pAnnotationEdgeLat->inputs(annotationInputs);
		
		FACE * pFace = (FACE *)pAnnotationEdgeLat->face();

		CString startEdgeName, endEdgeName;

		// Loft�� ������ ��� ���� ����ġ(Start Sketch) �� �� ����ġ(End Sketch)�� ���Ͽ�, 
		// �ش� �� ������ ���� ������Ʈ���� �̸��� �����´�.
		GetEdgeNameFromSketchReference(pFace, m_pStartSketch, startEdgeName);	// ���� ����ġ�� ��
		GetEdgeNameFromSketchReference(pFace, m_pEndSketch, endEdgeName);		// �� ����ġ�� ��

		CString faceName = GetName() + "," + startSketchName + "," + startEdgeName + "," + endSketchName + "," + endEdgeName + ",0,LoftFeature:0,0:0;0";

		new ATTRIB_FACENAME(pFace, faceName);
	}
}

// 16-02-22 �Ǽ��� (16-07-29 �Ǽ��� ����)
void PmeStdSolidLoftSectionsFeature::GetEdgeNameFromSketchReference(FACE *& pSourceFace, PmeReference *& pSketchReference, CString & edgeName)
{
	// ���� ���� ����Ʈ�� ����	
	ENTITY_LIST elist;
	api_get_edges(pSourceFace, elist);

	// ����ġ ���� (���� Ȥ�� �Ʒ���) �ҷ�����
	PmeFeature * pFeature = PmeSketchUtility::GetSketch(pSketchReference)->GetCreator();
	PmeStdSketchFeature * pSketchFeature = static_cast<PmeStdSketchFeature *>(pFeature);	
	
	// ����ġ ������Ʈ�� ����
	PmeStdSketchGeometries * pGeometries = pSketchFeature->GetGeometries();
	PmeStdSketchGeometries::SizeType size = pGeometries->GetSize();

	// ����ġ ��ǥ��
	MrAxis2 coordinateSystem = pSketchFeature->GetCoordinateSystem();


	// ����ġ ������Ʈ������� ��ǥ ��
	// ������ ������Ʈ�� ����� ����ġ �̸��� ��Ī
	for(int i = 0; i < elist.count(); ++i)
	{
		EDGE* pEdge = (EDGE*)elist[i];
		
		/** 1�� �� **/
		// Edge ������ �̹� ����Ǿ� �ִ� ����ġ ������Ʈ�� �� �ϳ��� ��Ī�� �Ǵ� ���
		if (find_named_attrib(pEdge, pSketchFeature->GetName()))
		{
			edgeName = ((ATTRIB_GEN_STRING *)find_named_attrib(pEdge, pSketchFeature->GetName()))->value();
			return;
		}
		else
		{
			/** 2�� �� **/
			// Edge ������ ����ġ ������Ʈ�� ���ο� ��ǥ ��.
			// �� ��, Edge�� ����ġ ��ǥ��(�� coordinateSystem)�� �̵������ش�.
			for(PmeStdSketchGeometries::SizeType j = 0; j < size; ++ j)
			{
				PmeStdSketchGeometry * pGeometry = pGeometries->GetItem(j);

				// �Ϲ����� Loft���� ����ġ�� ��(Circle)�� �����ϴ� ����, ����ġ ���ο� �ٸ� ��Ұ� ����.
				// �� ���, �ٷ� Circle�� �̸��� ��Ī
				if (pGeometry->GetType() == PmeStdSketchGeometryType_Circle)
				{
					edgeName = pGeometry->GetName();
					return;
				}
				else // Line �Ǵ� Arc �� ���
				{
					EDGE * pEdge1 = PmeSketchUtility::CreateEdgeFromGeometry(pGeometry);
					EDGE * pEdge2 = CreateTransformedEdge(pEdge, coordinateSystem);

					// pEdge1, pEdge2�� ��� �����ǰ�, pEdge1�� pEdge2�� ��ǥ�� ������ ��� ����
					if(pEdge1 && pEdge2 && IsEdgesSame(pEdge1, pEdge2))
					{
						edgeName = ((ATTRIB_GEN_STRING *)find_named_attrib(pEdge1, pSketchFeature->GetName()))->value();
						return;				
					}
				}
			}
		}
	}

}

// �� ������ ��ǥ ��. ��ġ�ϸ� True, �ƴϸ� False ���� (16-07-29 �Ǽ��� ����)
bool PmeStdSolidLoftSectionsFeature::IsEdgesSame(EDGE * pEdge1, EDGE * pEdge2)
{
	// ������-������, ����-������ ��ǥ�� ���� ��
	if(MrTolerance::IsZeroDistance(pEdge1->start_pos().x() - pEdge2->start_pos().x())
		&& MrTolerance::IsZeroDistance(pEdge1->start_pos().y() - pEdge2->start_pos().y())
		&& MrTolerance::IsZeroDistance(pEdge1->start_pos().z() - pEdge2->start_pos().z())
		&& MrTolerance::IsZeroDistance(pEdge1->end_pos().x() - pEdge2->end_pos().x())
		&& MrTolerance::IsZeroDistance(pEdge1->end_pos().y() - pEdge2->end_pos().y())
		&& MrTolerance::IsZeroDistance(pEdge1->end_pos().z() - pEdge2->end_pos().z()))
	{
		return true;
	}
	// ������-����, ����-�������� ��ǥ�� ���� ��
	else if(MrTolerance::IsZeroDistance(pEdge1->start_pos().x() - pEdge2->end_pos().x())
		&& MrTolerance::IsZeroDistance(pEdge1->start_pos().y() - pEdge2->end_pos().y())
		&& MrTolerance::IsZeroDistance(pEdge1->start_pos().z() - pEdge2->end_pos().z())
		&& MrTolerance::IsZeroDistance(pEdge1->end_pos().x() - pEdge2->start_pos().x())
		&& MrTolerance::IsZeroDistance(pEdge1->end_pos().y() - pEdge2->start_pos().y())
		&& MrTolerance::IsZeroDistance(pEdge1->end_pos().z() - pEdge2->start_pos().z()))
	{
		return true;
	}
	else if (IsEdgesIncluded(pEdge1, pEdge2))
	{
		return true;
	}

	return false;
}

// �� ������ ���� ���� ��� (16-07-29 �Ǽ���)
bool PmeStdSolidLoftSectionsFeature::IsEdgesIncluded(EDGE * pEdge1, EDGE * pEdge2)
{
	// �� ������ ������ �� ������ ������ ���Ե� ��츦 ���. ���� ������ �Ÿ��� ���� ���
	// ����ġ�� Arc��, ����Ʈ ���� �� Arc�� �Ϻκ����� ������ Edge�� ������ ã�� ���� Ȱ��
	// �������� ������ ���� ������ ȣ�� ��쿡�� true ���� ���� ���̹Ƿ� ����Ʈ ���ֿ̹����� Ȱ��

	double dist_E1s_E2 = 0;
	double dist_E1e_E2 = 0;
	double dist_E2s_E1 = 0;
	double dist_E2e_E1 = 0;

	outcome result;
	SPAposition in_point;
	SPAposition closest_pos;
	param_info  ent_info;
	AcisOptions *ao = NULL;

	in_point = pEdge1->start_pos();
	result = api_entity_point_distance((ENTITY*)pEdge2, in_point, closest_pos, dist_E1s_E2, ent_info, ao);

	in_point = pEdge1->end_pos();
	result = api_entity_point_distance((ENTITY*)pEdge2, in_point, closest_pos, dist_E1e_E2, ent_info, ao);

	in_point = pEdge2->start_pos();
	result = api_entity_point_distance((ENTITY*)pEdge1, in_point, closest_pos, dist_E2s_E1, ent_info, ao);

	in_point = pEdge2->end_pos();
	result = api_entity_point_distance((ENTITY*)pEdge1, in_point, closest_pos, dist_E2e_E1, ent_info, ao);
		
	if ((MrTolerance::IsZeroDistance(dist_E1s_E2) && MrTolerance::IsZeroDistance(dist_E1e_E2)) 
		|| (MrTolerance::IsZeroDistance(dist_E2s_E1) && MrTolerance::IsZeroDistance(dist_E2e_E1)))
		return true;

	return false;
}