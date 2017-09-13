#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateExtrudeDialog ��ȭ �����Դϴ�.

class PmCreateExtrudeDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateExtrudeDialog)

public:
	PmCreateExtrudeDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateExtrudeDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_SKETCHBASEDFEATURES_EXTRUDE };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()

private:
	afx_msg void OnBnClickedSelectProfileSketch();

public:
	CEdit m_sketchName;
	CEdit m_startDepth;
	CEdit m_endDepth;
	CComboBox m_boolType;
	CComboBox m_startCondition;
	CComboBox m_endCondition;
	CComboBox m_isFlip;

	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeBooleanType();
};
