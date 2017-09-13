#include "stdafx.h"
#include "System.h"
#include "Feature.h"
#include "Manipulation.h"

// TransCAD Ȱ��ȭ (COM ����)
void System::InitTransCAD(Part * pPart)
{
	HRESULT hr = ::CoInitialize(NULL);
	hr = m_spApplication.CreateInstance(__uuidof(TransCAD::Application));
	m_spApplication->Visible = VARIANT_TRUE;

	pPart->SetDocsPtr(m_spApplication->GetDocuments());
	pPart->SetPartDocumentPtr(pPart->GetDocsPtr()->AddPartDocument());
	pPart->SetPartPtr(pPart->GetPartDocumentPtr()->GetPart());
	pPart->SetFeaturesPtr(pPart->GetPartPtr()->GetFeatures());
	
	pPart->SetCurrentState(0);
}

// TransCAD ��Ȱ��ȭ (COM ����)
void System::UninitTransCAD(Part * pPart)
{
	// Clear TransCAD
	m_spApplication = NULL;
	pPart->SetDocsPtr(NULL);
	pPart->SetPartDocumentPtr(NULL);
	pPart->SetPartPtr(NULL);
	pPart->SetFeaturesPtr(NULL);
	
	// COM Automation API Uninitialization
	::CoUninitialize();
}

// TransCAD ����
void System::TerminateTransCAD(Part * pPart)
{
	UninitTransCAD(pPart);
	
	DWORD dwSize = 250;
	HANDLE hSnapShot;
	PROCESSENTRY32 pEntry;
	BOOL bCrrent = FALSE;

	hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL,NULL);
	pEntry.dwSize = sizeof(pEntry);

	// �������� ���μ������� ù���� ������ �����´�.
	Process32First (hSnapShot,&pEntry);

	// Tool�� ���������� Ȯ��
	while(1)
	{
		// ������ ���μ����� ������ �����´�.
		BOOL hRes = Process32Next(hSnapShot, &pEntry);
		char file[256];

		WideCharToMultiByte(CP_ACP, 0, pEntry.szExeFile, -1, file, 256, NULL, NULL);

		if (hRes == FALSE)
			break;
		
		if (!strncmp(file, "TransCAD.exe",15))
		{
			bCrrent = TRUE;
		}
		
		if (bCrrent)
		{
			HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pEntry.th32ProcessID);
			if (hProcess)
			{
				if (TerminateProcess(hProcess, 0))
				{
					unsigned long nCode; //���μ��� ���� ����
					GetExitCodeProcess(hProcess, &nCode);
				}
				CloseHandle(hProcess);
			}
			break;
		}
	}
}

// ����Ǳ� ���� ���� Ư¡������� �����ϴ� �Լ�
void System::RestoreSession(Part * pPart)
{
	TransCAD::IDoc * _result = 0;
	HRESULT _hr = m_spApplication->get_ActiveDocument(&_result);
				
	// TransCAD�� ������ ��쿡�� ����
	if (SUCCEEDED(_hr) && pPart->GetPartDocumentPtr() != NULL)
		return;

	InitTransCAD(pPart);

	pPart->SetCurrentState(pPart->GetHistoryFeatureListSize() - pPart->GetUndoCount() + pPart->GetRedoCount());

	pPart->Clear();

	for (int i = 0; i < pPart->GetCurrentState(); ++i)
	{
		CMD::SetTitle(TEXT("Restoring features"), i);
		
		Feature * pFeature = 0;

		// ���� �� ���
		if (!pPart->GetHistoryFeature(i)->IsModified() && !pPart->GetHistoryFeature(i)->IsDeleted())
		{
			pFeature = Manipulation::BacktraceFeature(pPart->GetHistoryFeature(i), 0, pPart->GetCurrentState() - 1, pPart);

			if (pFeature)
			{
				pFeature->Restore();
				pFeature->Create();
				pFeature->SetDeleted(false);
				pFeature->SetModified(false);
				pPart->SetFeature(pFeature);
			}
		}
	}

	pPart->SetRestored(true);
}

// ������ �ʱ�ȭ�ϰ� ���ο� �� ������ �ҷ����� �Լ�
void System::Reset(Part * pPart)
{
	pPart->SetUpdateCount(0);
	pPart->SetUndoCount(0);
	pPart->SetRedoCount(0);
	pPart->SetInitialState(0);
	pPart->SetCurrentState(0);
	pPart->SetRestored(false);
		
	pPart->AddInfo();
}

// �� ��ɾ�� ������ �����ϴ� �Լ�
void System::Renew(Part * pPart)
{
	TransCAD::IDoc * _result = 0;
	HRESULT hr = m_spApplication->get_ActiveDocument(&_result);
	
	if (FAILED(hr)) // Ȱ�� ������ ���� ���
	{
		TSIThrowExceptionIf<TSIArgumentException>(FAILED(hr), "Run TransCAD first!");
	}
	else			// Ȱ�� ������ �ִ� ���
	{
		pPart->SetPartDocumentPtr(m_spApplication->GetActiveDocument());

		// TransCAD�� ��׶��忡�� ����Ǿ� �ִ� ���. ��, ���� �� ���
		if (pPart->GetPartDocumentPtr() == NULL)
			return;
		else
		{
			pPart->SetPartPtr(pPart->GetPartDocumentPtr()->GetPart());	// Set TransCAD Part Ptr
			pPart->SetFeaturesPtr(pPart->GetPartPtr()->GetFeatures());	// Set TransCAD Features Ptr
			
			string m_currenttitle = _bstr_t(pPart->GetPartDocumentPtr()->GetTitle());

			if (pPart->GetRestored()) // ���� �� ���
			{
				// ���� ������ Ÿ��Ʋ�� �ʱ� Ÿ��Ʋ�� ����
				pPart->SetInitialTitle(m_currenttitle);
			}
			else
			{
				// Part ������ ���� ���� �Ǿ��� �� �� ���� ����
				// Part ������ ������ ����Ǿ����� üũ
				if (pPart->GetInitialTitle() != m_currenttitle)
				{
					Reset(pPart);
					pPart->SetInitialTitle(m_currenttitle);
				}
			}

			// ���� ����
			for (int i = 0; i < pPart->GetFeatureListSize(); ++i)
				pPart->GetFeature(i)->SetOrder(i);
			
			// ���� �ε��� �Ǿ����� ���� ���
			if (pPart->GetCurrentState() == 0 && pPart->GetUpdateCount() == 0)
				Reset(pPart);

			pPart->SetRestored(false);
		}
	}
}