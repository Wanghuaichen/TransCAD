// MainFrame.cpp : MainFrame Ŭ������ ����
//

#include "stdafx.h"
#include "TransCAD.h"

#include "MainFrame.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <Tlhelp32.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// MainFrame

IMPLEMENT_DYNAMIC(MainFrame, CHoopsFrame)

BEGIN_MESSAGE_MAP(MainFrame, CHoopsFrame)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ���� �� ǥ�ñ�
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// MainFrame ����/�Ҹ�

MainFrame::MainFrame()
{
	// TODO: ���⿡ ��� �ʱ�ȭ �ڵ带 �߰��մϴ�.
}

MainFrame::~MainFrame()
{
	// TransCAD�� �۾������ڿ��� ã�Ƽ� �����ϴ� �κ�

	DWORD dwSize = 250;
	HANDLE hSnapShot;
	PROCESSENTRY32 pEntry;
	BOOL bCrrent=FALSE;
	
	hSnapShot=CreateToolhelp32Snapshot(TH32CS_SNAPALL,NULL);

	pEntry.dwSize =sizeof(pEntry);
	// �������� ���μ������� ù���� ������ �����´�.
	Process32First (hSnapShot,&pEntry);

	// Tool�� ���������� Ȯ��
	while(1)
	{
		// ������ ���μ����� ������ �����´�.
		BOOL hRes=Process32Next (hSnapShot,&pEntry);

		if(hRes == FALSE)
			break;        
		if(!strncmp(pEntry.szExeFile,"TransCAD.exe",15))
		{
			bCrrent = TRUE;
		}
		if(bCrrent)
		{
			HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pEntry.th32ProcessID);
			if(hProcess)
			{
				if(TerminateProcess(hProcess, 0))
				{
					unsigned long nCode; //���μ��� ���� ����
					GetExitCodeProcess(hProcess, &nCode);
				}
				CloseHandle(hProcess);
			}
			break;
		} 
	}
	//
}


int MainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CHoopsFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("���� ������ ������ ���߽��ϴ�.\n");
		return -1;      // ������ ���߽��ϴ�.
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("���� ǥ������ ������ ���߽��ϴ�.\n");
		return -1;      // ������ ���߽��ϴ�.
	}
	// TODO: ���� ������ ��ŷ�� �� ���� �Ϸ��� �� �� ���� �����Ͻʽÿ�.
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL MainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CHoopsFrame::PreCreateWindow(cs) )
		return FALSE;
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	// Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return TRUE;
}


// MainFrame ����

#ifdef _DEBUG
void MainFrame::AssertValid() const
{
	CHoopsFrame::AssertValid();
}

void MainFrame::Dump(CDumpContext& dc) const
{
	CHoopsFrame::Dump(dc);
}

#endif //_DEBUG


// MainFrame �޽��� ó����

