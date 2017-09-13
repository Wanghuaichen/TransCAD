// PartModeler.cpp : �ش� DLL�� �ʱ�ȭ ��ƾ�� �����մϴ�.
//

#include "stdafx.h"
#include <afxdllx.h>

#include ".\Resource.h"

#include ".\PmFrame.h"
#include ".\PmDocument.h"
#include ".\PmView.h"

#include ".\PmRegPartModeler.h"
#include ".\PmImUtility.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

static AFX_EXTENSION_MODULE PartModelerDLL = { NULL, NULL };

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	// lpReserved�� ����ϴ� ��� ������ �����Ͻʽÿ�.
	UNREFERENCED_PARAMETER(lpReserved);

	if (dwReason == DLL_PROCESS_ATTACH)
	{
		TRACE0("PartModeler.DLL �ʱ�ȭ!\n");
		
		// Ȯ�� DLL�� �� ���� �ʱ�ȭ�մϴ�.
		if (!AfxInitExtensionModule(PartModelerDLL, hInstance))
			return 0;

		// �� DLL�� ���ҽ� ü�ο� �����մϴ�.
		// ����: �� Ȯ�� DLL�� MFC ���� ���α׷���
		// �ƴ� ActiveX ��Ʈ�� ���� MFC �⺻ DLL��
		// ���� ��������� ��ũ�Ǿ� �ִ� ��쿡��
		// DllMain���� �� ���� �����ϰ�, ������ ���� �� Ȯ�� DLL����
		// ������ ������ �Լ��� �߰��մϴ�.
		// �׷� ���� �� Ȯ�� DLL�� ����ϴ� �⺻ DLL��
		// �ش� �Լ��� ��������� ȣ���Ͽ� �� Ȯ�� DLL��
		// �ʱ�ȭ�ؾ� �մϴ�. �׷��� ������, CDynLinkLibrary ��ü��
		// Ȯ�� DLL�� ���ҽ� ü�ο� �߰����� �����Ƿ�
		// �ɰ��� ������ �߻��մϴ�.

		new CDynLinkLibrary(PartModelerDLL);

	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		TRACE0("PartModeler.DLL ����!\n");

		// �Ҹ��ڰ� ȣ��Ǳ� ���� ���̺귯���� �����մϴ�.
		AfxTermExtensionModule(PartModelerDLL);
	}
	return 1;   // Ȯ��
}

void AddPartModeler(void)
{
	HINSTANCE hInstOld = AfxGetResourceHandle();
	AfxSetResourceHandle(PartModelerDLL.hModule);
	
	CWinApp * pApp = AfxGetApp();
	ASSERT(pApp != NULL);
	pApp->AddDocTemplate(new CMultiDocTemplate(IDR_PmTYPE,
			RUNTIME_CLASS(PmDocument),
			RUNTIME_CLASS(PmFrame),
			RUNTIME_CLASS(PmView)));

	AfxSetResourceHandle(hInstOld);

	PmImUtility::RegisterCallbacks();
}

