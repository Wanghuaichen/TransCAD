#include "stdafx.h"
#include ".\PmeExceptionTest.h"
#include ".\PmeArgumentTypeException.h"
#include ".\PmeArgumentNullException.h"
#include ".\PmeHandleMacro.h"
#include "PmeAssembly.h"
#include "PmeComponent.h"
#include "PmePart.h"
#include ".\PmeUpdateInfoAPI.h"
#include "PmeUtility.h"
#include "PmeAssemblyAPI.h"
#include ".\PmeQuery.h"
#include ".\PmeSelectionManager.h"
#include "MrTransformation.h"

#include ".\PmeStdAssemblyAngleAPI.h"
#include ".\PmeStdAssemblyAngle.h"

bool PmeStdAssemblyAngleAPI::ApplyAngle(PmeHAssembly hAssembly, const CString & name, PmeHPart & hConstrainedPart, PmeHReference & hConstrainedGeometry, PmeHPart & hReferencePart, PmeHReference & hReferenceGeometry, double angle)
{
	PmeAssembly * pAssembly = PME_HANDLE2ASSEMBLY(hAssembly);
	PmePart * pConstrainedPart = PME_HANDLE2PART(hConstrainedPart);
	PmeReference * pConstrainedGeometry = PME_HANDLE2REFERENCE(hConstrainedGeometry);
	PmePart * pReferencePart = PME_HANDLE2PART(hReferencePart);
	PmeReference * pReferenceGeometry = PME_HANDLE2REFERENCE(hReferenceGeometry);
	
	if ( isSupportGeometry(pConstrainedPart, pConstrainedGeometry, pReferencePart, pReferenceGeometry) )
	{
		PmeStdAssemblyAngle * pAngle = new PmeStdAssemblyAngle(pAssembly, pConstrainedPart, pConstrainedGeometry, pReferencePart, pReferenceGeometry, angle);
	
		pAngle->UpdateConstraint();
		pAngle->SetName(name);

		hConstrainedPart = PME_PART2HANDLE(pConstrainedPart);

		if(hConstrainedPart)
		{
			PME_UPDATE_PART(hAssembly, hConstrainedPart, PmeUpdateState_Update);
		}

		return true;
	}

	else return false;
}

/**
 * Check geometries prior to do angle constraint
 * if selected geometry(ies) is(are) circular edge, return false
 * @param pConstrainedPart
 * 
 * @param pConstrainedGeometry
 *
 * @param pReferencePart
 *
 * @param pReferenceGeometry
 *
**/
bool PmeStdAssemblyAngleAPI::isSupportGeometry(PmePart * pConstrainedPart, PmeReference * pConstrainedGeometry, PmePart * pReferencePart, PmeReference * pReferenceGeometry)
{
	ENTITY * pCoEntity = pConstrainedPart->GetSelectionManager()->GetBrepFromReference(pConstrainedGeometry);
	ENTITY * pRefEntity = pReferencePart->GetSelectionManager()->GetBrepFromReference(pReferenceGeometry);
	
	const char * edgetype = "edge";

	// Check constrained and reference geometry
	// Angle constraint support face(planar, cylinderical) and "linear" edge
	if ( *pCoEntity->type_name() == *edgetype && *pRefEntity->type_name() == *edgetype )
	{
		if ( !isLinearEdge((EDGE *)pCoEntity) && !isLinearEdge((EDGE *)pRefEntity) )
		{
			AfxMessageBox(TEXT("Constrained and reference geometry error :\nTransCAD angle constraint does not support a circular edge.\n\nPlease select a linear edge."));

			return false;
		}
		
		else if ( !isLinearEdge((EDGE *)pCoEntity) )
		{
			AfxMessageBox(TEXT("Constrained geometry error :\nTransCAD angle constraint does not support a circular edge.\n\nPlease select a linear edge."));

			return false;
		}

		else if ( !isLinearEdge((EDGE *)pRefEntity) )
		{
			AfxMessageBox(TEXT("Reference geometry error :\nTransCAD angle constraint does not support a circular edge.\n\nPlease select a linear edge."));

			return false;
		}
	}

	else if ( *pCoEntity->type_name() == *edgetype )
	{
		if ( !isLinearEdge((EDGE *)pCoEntity) )
		{
			AfxMessageBox(TEXT("Constrained geometry error :\nTransCAD angle constraint does not support a circular edge.\n\nPlease select a linear edge."));

			return false;
		}
	}

	else if ( *pRefEntity->type_name() == *edgetype )
	{
		if ( !isLinearEdge((EDGE *)pRefEntity) )
		{
			AfxMessageBox(TEXT("Reference geometry error :\nTransCAD angle constraint does not support a circular edge.\n\nPlease select a linear edge."));

			return false;
		}
	}


	else return true;
}

bool PmeStdAssemblyAngleAPI::isLinearEdge(EDGE * pEdge)
{
	CURVE * pCurve = pEdge->geometry();
	const curve & curveEquation = pCurve->equation();
	
	// linear is 0 and circular is 1
	int periodic = curveEquation.periodic();
	
	return ( periodic == 0 ) ? true : false;
}