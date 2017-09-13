#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateSweepDialog ��ȭ �����Դϴ�.

class PmCreateSweepDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateSweepDialog)

public:
	PmCreateSweepDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateSweepDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_SKETCHBASEDFEATURES_SWEEP };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()

private:
	afx_msg void OnBnClickedSelectProfileSketch();
	afx_msg void OnBnClickedSelectGuideSketch();

public:
	CEdit m_profileSketchName;
	CEdit m_guideSketchName;
	CComboBox m_boolType;

	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeBooleanType();
};
