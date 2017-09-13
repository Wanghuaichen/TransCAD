#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateEdgeFilletDialog ��ȭ �����Դϴ�.
class PmView;
class PmViewSelectionOperator;

class PmCreateEdgeFilletDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateEdgeFilletDialog)

public:
	PmCreateEdgeFilletDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateEdgeFilletDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_TRANSITIONFEATURES_FILLET };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
private:
	PmViewSelectionOperator * m_pOperator;
	BOOL m_isFace;
	BOOL m_isEdge;
		
	afx_msg void OnBnClickedSelectFace();
	afx_msg void OnBnClickedSelectEdge();

public:
	CEdit m_filletRadius;
	CComboBox m_propagation;
	std::vector<CString> m_selectedEntityNames;

	virtual BOOL OnInitDialog();
};
