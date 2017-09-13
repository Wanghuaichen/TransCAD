#pragma once

#include ".\Resource.h"
#include "afxcmn.h"

// AssemViewHoopsModelTreeDialog ��ȭ �����Դϴ�.

class AssemDocument;

class AssemViewHoopsModelTreeDialog
	: public CDialog
{
	DECLARE_DYNAMIC(AssemViewHoopsModelTreeDialog)

public:
	AssemViewHoopsModelTreeDialog(AssemDocument * pDocument, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~AssemViewHoopsModelTreeDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_VIEW_HOOPS_MODEL_TREE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual BOOL OnInitDialog();

private:
	void AddSegmentToTree(char * segmentName, HTREEITEM hParent);

	DECLARE_MESSAGE_MAP()
private:
	AssemDocument * m_pDocument;
	CTreeCtrl m_tree;	
};
