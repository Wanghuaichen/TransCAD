#include "StdAfx.h"
#include <algorithm>
#include ".\PmeStdSolidRevolveFeature.h"
#include ".\PmeReference.h"
#include ".\PmeExceptionTest.h"
#include ".\PmeIlligalOperationException.h"
#include ".\PmeSketchUtility.h"
#include ".\PmeSketch.h"
#include ".\PmePart.h"
#include ".\PmeExplicitModel.h"
#include ".\PmeSolid.h"
#include ".\attr_pme_facename.h"
#include ".\PmeQuery.h"
#include ".\PmePersistentNameAPI.h"
#include <vector>
#include <string>

PME_IMPLEMENT_RUNTIME_TYPE(PmeStdSolidRevolveFeature, PmeStdSolidFeature)

PmeStdSolidRevolveFeature::PmeStdSolidRevolveFeature(PmePart * pPart)
: PmeStdSolidFeature(pPart)
{
}

PmeStdSolidRevolveFeature::PmeStdSolidRevolveFeature(PmePart * pPart,
                                                           PmeReference * pProfileSketch,
                                                           double startAngle,
                                                           PmeStdRevolveEndType startCondition,
                                                           double endAngle,
                                                           PmeStdRevolveEndType endCondition,
														   bool isFlip) 
: PmeStdSolidFeature(pPart)
, m_pProfileSketch(pProfileSketch)
, m_startAngle(startAngle)
, m_startCondition(startCondition)
, m_endAngle(endAngle)
, m_endCondition(endCondition)
, m_isFlip(isFlip)
{
}

PmeStdSolidRevolveFeature::~PmeStdSolidRevolveFeature(void)
{
}

MrAxis1 PmeStdSolidRevolveFeature::GetInternalAxis(bool isCut)
{
	MrAxis1 axis = PmeSketchUtility::GetRevolutionAxis(GetProfileSketch());
	if(isCut)
		axis = MrMath::Reverse(axis);

	MrAxis2 coordinateSystem = PmeSketchUtility::GetCoordinateSystem(GetProfileSketch());
	MrAffineTransformation trsf = MrAffineTransformation::CreateCoordinateSystemTransformation(coordinateSystem, MrAxis2::OXY());

	return MrMath::Transform(axis, trsf);
}

BODY * PmeStdSolidRevolveFeature::RevolveStartSolid(BODY *& pProfile, bool isCut)
{
	BODY * pResult = 0;

	api_set_int_option("annotations", TRUE);

	MrAxis1 axis = GetInternalAxis(isCut);
	
	switch(GetInternalStartCondition())
	{
	case PmeStdRevolveEndType_Blind:
		{
			double angle = GetInternalStartAngle();
			if(angle == 0)
				break;
			pResult = RevolveWithBlind(pProfile, axis, angle);
		}
		break;
	}

	if(pResult)
        AttachName(pResult);
	
	api_clear_annotations();

	return pResult;
}

BODY * PmeStdSolidRevolveFeature::RevolveEndSolid(BODY *& pProfile, bool isCut)
{
	BODY * pResult = 0;

	api_set_int_option("annotations", TRUE);

	MrAxis1 axis = GetInternalAxis(isCut);

	switch(GetInternalEndCondition())
	{
	case PmeStdRevolveEndType_Blind:
		{
			double angle = GetInternalEndAngle();
			if(angle == 0)
				break;
			pResult = RevolveWithBlind(pProfile, MrMath::Reverse(axis), angle);
		}
		break;
	}

	if(pResult)
	{
		if(g_bNamingType)
			AttachName(pResult);
		else
			AttachName_pointbased(pResult);
	}
	api_clear_annotations();

	return pResult;
}

BODY * PmeStdSolidRevolveFeature::RevolveWithBlind(BODY *& pProfile, const MrAxis1 & axis, double angle)
{
	SPAposition spaRoot(axis.Location().X(), axis.Location().Y(), axis.Location().Z());
	SPAvector spaAxis(axis.Direction().X(), axis.Direction().Y(), axis.Direction().Z());
	sweep_options options;

	BODY * pNewBody = 0;
	BODY * pTemp = 0;

	API_BEGIN

		result = api_copy_body(pProfile, pNewBody);
		check_outcome(result);

		options.set_sweep_angle(DegreeToRadian(angle));

		result = api_sweep_with_options(pNewBody, spaRoot, spaAxis, &options, pTemp);
		check_outcome(result);

		if(result.ok())
			return pNewBody;

	API_END

	return 0;
}

void PmeStdSolidRevolveFeature::AttachName(BODY *& pBody)
{
	AttachFeatureTag(pBody);
	
	ENTITY_LIST annotationListLateral;

	api_find_annotations(annotationListLateral, is_SWEEP_ANNO_EDGE_LAT);

	annotationListLateral.init();

	SWEEP_ANNO_EDGE_LAT * pAnnotationEdgeLat;
	
	CString sketchName = PmeSketchUtility::GetSketch(GetProfileSketch())->GetName();

	while((pAnnotationEdgeLat = (SWEEP_ANNO_EDGE_LAT *)annotationListLateral.next()) != NULL)
	{
        ENTITY_LIST annotationInputs;
		pAnnotationEdgeLat->inputs(annotationInputs);
		int count = annotationInputs.count();
		
		if(annotationInputs.count() == 1)
		{
			EDGE * pEdge = pAnnotationEdgeLat->profile_edge();
			FACE * pFace = (FACE *)pAnnotationEdgeLat->lateral_face();
			
			CString edgeName = ((ATTRIB_GEN_STRING *)find_named_attrib(pEdge, sketchName))->value();
			CString faceName = GetName() + "," + sketchName +"," + edgeName +",0,0,0,RevolveFeature:0,0:0;0";

			new ATTRIB_FACENAME(pFace, faceName);
		}
		else if(annotationInputs.count() == 0)
		{
			EDGE * pEdge = pAnnotationEdgeLat->profile_edge();
			FACE * pFace = (FACE *)pAnnotationEdgeLat->lateral_face();

			CString edgeName = ((ATTRIB_GEN_STRING *)find_named_attrib(pEdge, sketchName))->value();
			CString faceName = GetName() + "," + sketchName +"," + edgeName +",0,0,0,RevolveFeature:0,0:0;0";

			new ATTRIB_FACENAME(pFace, faceName);
		}
	}

	ENTITY_LIST annotationListEnd;
	api_find_annotations(annotationListEnd, is_SWEEP_ANNO_END_CAPS);

	MrDirection sketchNormal = PmeSketchUtility::GetCoordinateSystem(GetProfileSketch()).ZDirection();
	MrPosition sketchOrigin = PmeSketchUtility::GetCoordinateSystem(GetProfileSketch()).Location();

	SWEEP_ANNO_END_CAPS	* pAnnotationEndCaps;
	
	annotationListEnd.init();

	while((pAnnotationEndCaps = (SWEEP_ANNO_END_CAPS *)annotationListEnd.next()) != NULL)
	{
		ENTITY_LIST annotationInputs;

		//pAnnotationEdgeLat->inputs(annotationInputs);		

		FACE * pStartFace = pAnnotationEndCaps->start_face();
		FACE * pEndFace = pAnnotationEndCaps->end_face();

		MrDirection startNormal = PmeQueryFaceNormal(pStartFace, sketchOrigin);
		MrDirection endNormal = PmeQueryFaceNormal(pEndFace, sketchOrigin);

		bool isEndSolid = false;
		
		// StartSolid (�ݽð���� ȸ��): ����ġ ����� Normal�� StartFace�� Normal�� ����
		// EndSolid (�ð���� ȸ��): ����ġ ����� Normal�� StartFace�� Normal�� �ݴ�
		if(!MrMath::IsEqual(startNormal, sketchNormal)) // EndSolid�� ��� ����
		{
			std::swap(pStartFace, pEndFace);
			isEndSolid = true;
		}

		CString startFaceName = GetName() + ",0,-1,0,0,0,RevolveFeature:0,0:0;0";
		CString endFaceName = GetName() + ",0,-2,0,0,0,RevolveFeature:0,0:0;0";
		

		/** 1. �Ϲ����� ��� **/
		// StartFace : ����ġ ����� Normal�� ���� �������� ȸ���Ͽ� ����� �� (�ð����) 
		// EndFace : ����ġ ����� Normal�� �ݴ� �������� ȸ���Ͽ� ����� �� (�ݽð����)
		if (!m_isFlip) // Flip�� �ƴ� ���
		{
			new ATTRIB_FACENAME(pStartFace, startFaceName);
			new ATTRIB_FACENAME(pEndFace, endFaceName);
		}
		else // Flip�� ���
		{
			new ATTRIB_FACENAME(pStartFace, endFaceName);
			new ATTRIB_FACENAME(pEndFace, startFaceName);
		}    

		/** 2. ���۸�� ������ ������ �����ϸ� ��ü ������ 180�� �� ��� **/
		// �� ��, �� ���� Merge�� �߻��� �� �����Ƿ� �Ʒ��� ���� ó��
		if (IsSharingEdge(pStartFace, pEndFace))
		{	
			// StartAngle + EndEngle�� ���� 180�� �� (��, �� �� �ϳ��� 0�� ��� ����)
			// �� ��� ������ StartFaceName�� �������� ó�� (CATIA�� ��ʸ� ����)
			if(GetInternalStartAngle() + GetInternalEndAngle() == 180.0)
			{
				new ATTRIB_FACENAME(pStartFace, startFaceName);
				new ATTRIB_FACENAME(pEndFace, startFaceName);
			}
			// StartAngle, EndAngle �� �� �ϳ��� 180�� �� (��, �� �� 0���� ū ���)
			// �� ��� StartSolid�� EndFace�� EndFace��, EndSolid�� EndFace�� StartFace�� ������ ó�� (��, Flip�� ��� �ݴ�)
			else if (pStartFace == pEndFace)
			{	
				if (!isEndSolid)	// StartSolid�� 180�� �� ��
				{
					if(!m_isFlip)	// Flip�� �ƴ� ��
						new ATTRIB_FACENAME(pEndFace, endFaceName);
					else			// Flip�� ��
						new ATTRIB_FACENAME(pEndFace, startFaceName);
				}
				else if (isEndSolid)// EndSolid�� 180�� �� ��
				{
					if(!m_isFlip)	// Flip�� �ƴ� ��
						new ATTRIB_FACENAME(pEndFace, startFaceName);
					else			// Filp�� ��
						new ATTRIB_FACENAME(pEndFace, endFaceName);
				}	
			}
		}

	}

}

bool PmeStdSolidRevolveFeature::IsSharingEdge(FACE * pFace1, FACE * pFace2)
{
	ENTITY_LIST vertex_list1, vertex_list2;
	get_vertices(pFace1, vertex_list1);
	get_vertices(pFace2, vertex_list2);
	
	SPAposition p1,p2;

	int count = 0;

	for (int i = 0; i < vertex_list1.count(); ++i)
	{
		VERTEX* pVert1 = (VERTEX*)vertex_list1[i];
		p1 = pVert1->geometry()->coords();

		for (int j = 0; j < vertex_list2.count(); ++j)
		{
			VERTEX* pVert2 = (VERTEX*)vertex_list2[j];
			p2 = pVert2->geometry()->coords();

			if((p1.x() == p2.x()) && (p1.y() == p2.y()) && (p1.z() == p2.z()))
				count ++;
			else
				continue;
		}
	}

	if (count >= 2)
		return true;
	else
		return false;


}

void PmeStdSolidRevolveFeature::AttachName_pointbased(BODY *& pBody)
{	
	ENTITY_LIST face_list;
	get_faces(pBody, face_list);

	int a = face_list.count();

	if (a >1)
	{
		for (int i = 0 ; i < a; i++)
		{
			FACE *f = (FACE *) face_list[i]; 
			
			EDGE * ce;
			ce =  f->loop()->start()->edge();

			SPAposition onePoint;
			onePoint = ce->start_pos();
			
			ELLIPSE* el = (ELLIPSE*)ce->geometry();

			SPAposition centerPoint;
			centerPoint = el->centre();

			double radius;
			radius = sqrt( (centerPoint.x() - onePoint.x()) * (centerPoint.x() - onePoint.x()) + (centerPoint.y() - onePoint.y()) * (centerPoint.y() - onePoint.y()) + (centerPoint.z() - onePoint.z()) * (centerPoint.z() - onePoint.z()));
				
			double vertexcoord[3];
			CString vertexNum[3];

			vertexcoord[0] = centerPoint.x();
			vertexcoord[1] = centerPoint.y();
			vertexcoord[2] = centerPoint.z();

			vertexNum[0].Format(_T("%3.2f"), vertexcoord[0]);
			vertexNum[1].Format(_T("%3.2f"), vertexcoord[1]);
			vertexNum[2].Format(_T("%3.2f"), vertexcoord[2]);
						
			CString radiusname;
			radiusname.Format(_T("%3.2f"), radius);

			CString faceName;

			faceName = "Face, 0, Rev1,(" + vertexNum[0] + ","+ vertexNum[1] +","+ vertexNum[2] +  "),"+ radiusname ;
			new ATTRIB_FACENAME(f, faceName);
		}	
	}
}

