#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "PmeHandle.h"
#include "PmeHandleMacro.h"

#include "AssemDocument.h"

// AssemAddComponentDialog ��ȭ �����Դϴ�.

class AssemDocument;

class AssemAddComponentDialog : public CDialog
{
	DECLARE_DYNAMIC(AssemAddComponentDialog)

public:
	AssemAddComponentDialog( AssemDocument * pDoc, CWnd* pParent = NULL );   // ǥ�� �������Դϴ�.
	virtual ~AssemAddComponentDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ADD_COMPONENT };

public:
	AssemDocument *	m_pDoc;
	PmeHAssembly	m_hAssembly;
	CEdit			m_compName;

	BOOL OnInitDialog();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
