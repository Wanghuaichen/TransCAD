// StdSketchConstraintAuto.cpp : CStdSketchConstraintAuto�� �����Դϴ�.

#include "stdafx.h"
#include "StdSketchConstraintAuto.h"


// CStdSketchConstraintAuto

STDMETHODIMP CStdSketchConstraintAuto::get_Type(StdSketchGeometryType* pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	return S_OK;
}

STDMETHODIMP CStdSketchConstraintAuto::get_Name(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	return S_OK;
}

STDMETHODIMP CStdSketchConstraintAuto::get_SketchFeature(IStdSketchFeature** ppVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	return S_OK;
}

