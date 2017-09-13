#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateRevolveDialog ��ȭ �����Դϴ�.

class PmCreateRevolveDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateRevolveDialog)

public:
	PmCreateRevolveDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateRevolveDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_SKETCHBASEDFEATURES_REVOLVE };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()

private:
	bool CheckRevolveAxis(CString sketchName);
	afx_msg void OnBnClickedSelectProfileSketch();

public:
	CEdit m_sketchName;
	CEdit m_startAngle;
	CEdit m_endAngle;
	CComboBox m_boolType;
	CComboBox m_startCondition;
	CComboBox m_endCondition;
	CComboBox m_isFlip;

	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeBooleanType();
};
