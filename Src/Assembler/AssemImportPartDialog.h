#pragma once

#include "afxwin.h"
#include ".\resource.h"

#include "AssemDocument.h"

// AssemImportPartDialog ��ȭ �����Դϴ�.

class AssemDocument;

class AssemImportPartDialog : public CDialog
{
	DECLARE_DYNAMIC(AssemImportPartDialog)

public:
	AssemImportPartDialog( AssemDocument * pDoc, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~AssemImportPartDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_IMPORT_PART };

public:
	AssemDocument * m_pDoc;
	PmeHAssembly	m_hAssembly;
	CListBox		m_compList;
	CEdit			m_filePath;
	CEdit			m_partName;
	CEdit			m_partOriginX;
	CEdit			m_partOriginY;
	CEdit			m_partOriginZ;
	CEdit			m_partNormalX;
	CEdit			m_partNormalY;
	CEdit			m_partNormalZ;

	BOOL OnInitDialog();
	bool ImportPart();


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonImportPart();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
