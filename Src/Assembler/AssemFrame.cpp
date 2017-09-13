// AssemFrame.cpp : AssemFrame Ŭ������ ����
//
#include "stdafx.h"
#include "Resource.h"
#include "AssemFrame.h"
#include "AssemView.h"
#include "AssemDocument.h"
#include "AssemFeatureTree.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// AssemFrame

IMPLEMENT_DYNCREATE(AssemFrame, CMDIChildWnd)

BEGIN_MESSAGE_MAP(AssemFrame, CMDIChildWnd)
	ON_WM_CREATE()
	ON_WM_MDIACTIVATE()
END_MESSAGE_MAP()

// AssemFrame ����/�Ҹ�

AssemFrame::AssemFrame()
: _initialUpdate(false)
{
}

AssemFrame::~AssemFrame()
{
}


BOOL AssemFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡�� Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.
	if( !CMDIChildWnd::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}


// AssemFrame ����

#ifdef _DEBUG
void AssemFrame::AssertValid() const
{
	CMDIChildWnd::AssertValid();
}

void AssemFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWnd::Dump(dc);
}

#endif //_DEBUG


// AssemFrame �޽��� ó����

BOOL AssemFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	CPushRoutingFrame push(this);

	// pump through current view FIRST
	CView * pActiveView = GetActiveView();
	if (pActiveView != NULL && pActiveView->OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
		return TRUE;

	CDocument * pDoc = GetActiveDocument();
	if(pDoc)
	{
		POSITION pos = pDoc->GetFirstViewPosition();
		

		while(pos != NULL)
		{
			CView * pView = pDoc->GetNextView(pos);
			
			if(pView != NULL && pView != pActiveView && pView->OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
				return TRUE;
		}
	}

	// then pump through frame
	if (CWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
		return TRUE;

	// last but not least, pump through app
	CWinApp* pApp = AfxGetApp();
	if (pApp != NULL && pApp->OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
		return TRUE;

	return FALSE;
	// return CMDIChildWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

int AssemFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// Ʈ���� �����.
	CString featureTreeTitle;
	featureTreeTitle.LoadString(IDS_ASSEM_FEATURE_TREE_TITLE);

	if(!_featureTree.Create(featureTreeTitle, IDC_FEATURE_TREE_BAR, IDC_FEATURE_TREE_CTRL, this))
	{
		TRACE0("���� Ʈ���� ������ ���߽��ϴ�n");
		return -1;      // ������ ���߽��ϴ�.
	}
	_featureTree.SetParentFrame(this);

	EnableDocking(CBRS_ALIGN_ANY);

	_featureTree.EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&_featureTree, AFX_IDW_DOCKBAR_LEFT);

	return 0;
}

void AssemFrame::OnMDIActivate(BOOL bActivate, CWnd* pActivateWnd, CWnd* pDeactivateWnd)
{
	CMDIChildWnd::OnMDIActivate(bActivate, pActivateWnd, pDeactivateWnd);
}

AssemDocument * AssemFrame::GetDocument(void)
{
	AssemDocument * pDoc = static_cast<AssemDocument *>(GetActiveDocument());

	return pDoc;
}

AssemView * AssemFrame::GetView(void)
{
	AssemView * pView = static_cast<AssemView *>(GetActiveView());

	return pView;
}

void AssemFrame::ActivateFrame(int nCmdShow)
{
	if(!_initialUpdate)
	{
		_initialUpdate = true;



		PmeHAssembly hAssembly = GetDocument()->GetAssembly();

		PmeAssemblyAPI::RegisterEventListener(hAssembly, &_featureTree);		
		
		_featureTree.Initialize();

		GetDocument()->UpdateAll();
	}

	CMDIChildWnd::ActivateFrame(SW_SHOWMAXIMIZED);
}