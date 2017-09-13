// PmFrame.h : PmFrame Ŭ������ �������̽�
//


#pragma once

#include ".\PmMacro.h"
#include ".\PmFeatureTree.h"

class PmDocument;
class PmView;

class PM_API PmFrame
	: public CMDIChildWnd
{
	DECLARE_DYNCREATE(PmFrame)
public:
	PmFrame();

// Ư��
public:
	PmDocument * GetDocument(void);
	PmView * GetView(void);
	PmFeatureTree * GetFeatureTree(void) {return & _featureTree;}

private:
	CSplitterWnd m_wndSplitter;
	PmFeatureTree _featureTree;
	bool _initialUpdate;
	int _updateCount;

// �۾�

public:
// ������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ����
public:
	virtual ~PmFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()

	CToolBar    m_wndToolBar;

public:
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMDIActivate(BOOL bActivate, CWnd* pActivateWnd, CWnd* pDeactivateWnd);
	virtual void ActivateFrame(int nCmdShow = -1);
};
