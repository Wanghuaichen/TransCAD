// StdSketchHDirectionAuto.cpp : CStdSketchHDirectionAuto�� �����Դϴ�.

#include "stdafx.h"
#include "StdSketchHDirectionAuto.h"


// CStdSketchHDirectionAuto

STDMETHODIMP CStdSketchHDirectionAuto::get_Name(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	return S_OK;
}

STDMETHODIMP CStdSketchHDirectionAuto::get_SketchFeature(IStdSketchFeature** ppVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	return S_OK;
}
