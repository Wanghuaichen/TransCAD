// TransCADScript.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#include "stdafx.h"
#include "TransCADScript.h"
#include "Part.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

Part * pPart = NULL;
TransCAD::IApplicationPtr m_spApplication;
CommandList Commands;
char seps_blank[] = " "; // ���� ������

DLLSCRIPT_API int ScriptStartService(void)
{
	HRESULT hr = ::CoInitialize(NULL);		
	if(FAILED(hr))
		return 1;

	hr = m_spApplication.CreateInstance(__uuidof(TransCAD::Application));
	if(FAILED(hr))
		return 1;

	// TransCAD ����ȭ. WebTransCAD ��⿡���� �� �κ� �ּ�ó�� �ʿ�
	m_spApplication->Visible = VARIANT_TRUE;

	pPart = new Part();

	return 0;
}

DLLSCRIPT_API int ScriptRun(char * command)
{
	if(pPart)
	{
		if (pPart->GetCurrentSketch())				// ����ġ ���� ���� ���
			pPart->OnCreatingSketch(command);
		else if (pPart->GetCurrentReference())		// �� ���� ���۷��� ���� ���� ���
			pPart->OnSelectingReferences(command);
		else if (pPart->GetCurrentFeature())			// �� ���� Ư¡���� ���� ���� ���
			pPart->OnSelectingFeatures(command);
		else										// �Ϲ����� ���
			pPart->RunCommands(command);
	}

	return 0;
}

DLLSCRIPT_API int ScriptTerminate(void)
{
	delete pPart;

	::CoUninitialize();

	return 0;
}