// StdSketchVerticalAuto.cpp : CStdSketchVerticalAuto�� �����Դϴ�.

#include "stdafx.h"
#include "StdSketchVerticalAuto.h"


// CStdSketchVerticalAuto

STDMETHODIMP CStdSketchVerticalAuto::get_Target(IReference** ppVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	PmeHReference hReference;
	PmeStdSketchVerticalAPI::GetTarget(m_hStdSketchConstraint, hReference);

	return CPartAuto::GetIReferenceFromHReference(hReference, ppVal);
}
