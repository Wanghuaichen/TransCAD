#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmViewPersistentNameDialog ��ȭ �����Դϴ�.
class PmViewSelectionOperator;

class PmCreateChamferDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateChamferDialog)

public:
	PmCreateChamferDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateChamferDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_TRANSITIONFEATURES_CHAMFER };

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
	CEdit m_chamferLength;
	std::vector<CString> m_selectedEntityNames;

	virtual BOOL OnInitDialog();
};
