#pragma once

#include ".\Resource.h"
#include "afxcmn.h"

// PmViewHoopsModelTreeDialog ��ȭ �����Դϴ�.

class PmDocument;

class PmViewHoopsModelTreeDialog
	: public CDialog
{
	DECLARE_DYNAMIC(PmViewHoopsModelTreeDialog)

public:
	PmViewHoopsModelTreeDialog(PmDocument * pDocument, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmViewHoopsModelTreeDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_VIEW_HOOPS_MODEL_TREE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual BOOL OnInitDialog();

private:
	void AddSegmentToTree(char * segmentName, HTREEITEM hParent);

	DECLARE_MESSAGE_MAP()
private:
	PmDocument * m_pDocument;
	CTreeCtrl m_tree;	
};
