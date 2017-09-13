// AssemFrame.h : AssemFrame Ŭ������ �������̽�
//


#pragma once

#include "AssemMacro.h"
#include "AssemFeatureTree.h"

class AssemDocument;
class AssemView;

class ASSEM_API AssemFrame
	: public CMDIChildWnd
{
	DECLARE_DYNCREATE(AssemFrame)
public:
	AssemFrame();

// Ư��
public:
	AssemDocument * GetDocument(void);
	AssemView * GetView(void);
	AssemFeatureTree * GetFeatureTree(void) {return &_featureTree;}
private:
	CSplitterWnd m_wndSplitter;
	AssemFeatureTree _featureTree;
	bool _initialUpdate;

// �۾�
public:

// ������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ����
public:
	virtual ~AssemFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()	
public:
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMDIActivate(BOOL bActivate, CWnd* pActivateWnd, CWnd* pDeactivateWnd);
	virtual void ActivateFrame(int nCmdShow = -1);
};
