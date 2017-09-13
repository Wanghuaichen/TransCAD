// Assembler.cpp : �ش� DLL�� �ʱ�ȭ ��ƾ�� �����մϴ�.
//

#include "stdafx.h"
#include <afxdllx.h>
#include "Resource.h"

#include "AssemFrame.h"
#include "AssemDocument.h"
#include "AssemView.h"

#include "AssemRegAssembler.h"
#include "AssemImUtility.h"

#ifdef _MANAGED
#error /clr�� ����Ͽ� �������Ϸ��� Assembler.cpp�� �ִ� ��ħ�� �����ʽÿ�.
// ������Ʈ�� /clr�� �߰��Ϸ��� ���� �ܰ踦 �����ʽÿ�.
//	1. #include <afxdllx.h> ���ù��� ����ϴ�.
//	2. /crl�� throw���� �ʰ� �̸� �����ϵ� ����� ��Ȱ��ȭ�Ǿ� �ִ�
//	   ������Ʈ�� ���� �ؽ�Ʈ�� ����Ͽ� .cpp ������ �߰��մϴ�.
//			#include <afxwin.h>
//			#include <afxdllx.h>
#endif

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


static AFX_EXTENSION_MODULE AssemblerDLL = { NULL, NULL };

#ifdef _MANAGED
#pragma managed(push, off)
#endif

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	// lpReserved�� ����ϴ� ��� ������ �����Ͻʽÿ�.
	UNREFERENCED_PARAMETER(lpReserved);

	if (dwReason == DLL_PROCESS_ATTACH)
	{
		TRACE0("Assembler.DLL�� �ʱ�ȭ�ϰ� �ֽ��ϴ�.\n");
		
		// Ȯ�� DLL�� �� ���� �ʱ�ȭ�մϴ�.
		if (!AfxInitExtensionModule(AssemblerDLL, hInstance))
			return 0;

		// �� DLL�� ���ҽ� ü�ο� �����մϴ�.
		// ����: �� Ȯ�� DLL�� MFC ���� ���α׷���
		//  �ƴ� ActiveX ��Ʈ�Ѱ� ���� MFC �⺻ DLL��
		//  ���� ��������� ��ũ�Ǿ� �ִ� ��쿡��
		//  DllMain���� �� ���� �����ϰ�, ������ ���� �� Ȯ�� DLL����
		//  ������ ������ �Լ��� �߰��մϴ�.
		//  �׷� ���� �� Ȯ�� DLL�� ����ϴ� �⺻ DLL��
		//  �ش� �Լ��� ��������� ȣ���Ͽ� �� Ȯ�� DLL�� �߰��ؾ� �մϴ�.
		//  �׷��� ������ CDynLinkLibrary ��ü��
		//  �⺻ DLL�� ���ҽ� ü�ο� �߰����� �����Ƿ�
		//  �ɰ��� ������ �߻��մϴ�.

		new CDynLinkLibrary(AssemblerDLL);

	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		TRACE0("Assembler.DLL�� �����ϰ� �ֽ��ϴ�.\n");

		// �Ҹ��ڰ� ȣ��Ǳ� ���� ���̺귯���� �����մϴ�.
		AfxTermExtensionModule(AssemblerDLL);
	}
	return 1;   // Ȯ��
}

void AddAssembler(void)
{
	HINSTANCE hInstOld = AfxGetResourceHandle();
	AfxSetResourceHandle(AssemblerDLL.hModule);

	CWinApp * pApp = AfxGetApp();
	ASSERT(pApp != NULL);
	pApp->AddDocTemplate(new CMultiDocTemplate(IDR_AssemTYPE,
		RUNTIME_CLASS(AssemDocument),
		RUNTIME_CLASS(AssemFrame),
		RUNTIME_CLASS(AssemView)));

	AfxSetResourceHandle(hInstOld);

	AssemImUtility::RegisterCallbacks();
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

