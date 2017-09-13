#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateDatumPlaneOffsetDialog ��ȭ �����Դϴ�.
class PmViewSelectionOperator;

class PmCreateDatumPlaneOffsetDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateDatumPlaneOffsetDialog)

public:
	PmCreateDatumPlaneOffsetDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateDatumPlaneOffsetDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_DATUMPLANE_DATUMPLANEOFFSET };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
private:
	PmViewSelectionOperator * m_pOperator;
	afx_msg void OnBnClickedSelectReferencePlane();
	BOOL PreTranslateMessage(MSG* pMsg);

public:
	CEdit m_referenceName;
	CEdit m_distance;
	CComboBox m_isFlip;
	CEdit m_orgX;
	CEdit m_orgY;
	CEdit m_orgZ;
	CEdit m_xdirX;
	CEdit m_xdirY;
	CEdit m_xdirZ;
	CEdit m_ydirX;
	CEdit m_ydirY;
	CEdit m_ydirZ;
	CComboBox m_isFree;
	CToolTipCtrl m_ToolTip;

	CString m_tempReferenceName;
	std::vector<CString> m_selectedEntityNames;
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeIsFree();
};
