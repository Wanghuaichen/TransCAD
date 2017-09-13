#pragma once

#include ".\PmeMacro.h"
#include ".\PmeHandle.h"

class PME_API PmeStdAssemblyAngleAPI
{
public:
    static bool ApplyAngle(PmeHAssembly hAssembly, 
						   const CString & name,					
						   PmeHPart & hConstrainedPart, 
						   PmeHReference & hConstrainedGeometry, 
						   PmeHPart & hReferencePart, 
						   PmeHReference & hReferenceGeometry,
						   double angle);

	// 17-03-21 Added by YK
	static bool isSupportGeometry(PmePart * pConstrainedPart, PmeReference * pConstrainedGeometry, PmePart * pReferencePart, PmeReference * pReferenceGeometry);
	static bool isLinearEdge(EDGE * pEdge);

};