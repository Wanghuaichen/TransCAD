// StdSolidImportedBrepFeatureAuto.cpp : CStdSolidImportedBrepFeatureAuto�� �����Դϴ�.

#include "stdafx.h"
#include "StdSolidImportedBrepFeatureAuto.h"


// CStdSolidImportedBrepFeatureAuto

STDMETHODIMP CStdSolidImportedBrepFeatureAuto::get_FilePath(BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	CString filePath;
	PmeStdSolidImportedBrepFeatureAPI::GetFilePath(m_hFeature, filePath);

	filePath.SetSysString(pVal);

	return S_OK;
}