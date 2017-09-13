#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateDraftDialog ��ȭ �����Դϴ�.
class PmView;
class PmViewSelectionOperator;

class PmCreateDraftDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateDraftDialog)

public:
	PmCreateDraftDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateDraftDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_TRANSITIONFEATURES_DRAFT };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
private:
	PmViewSelectionOperator * m_pOperator;

public:
	CEdit m_draftAngle;
	CEdit m_pullingOrgX;
	CEdit m_pullingOrgY;
	CEdit m_pullingOrgZ;
	CEdit m_pullingDirX;
	CEdit m_pullingDirY;
	CEdit m_pullingDirZ;
	std::vector<CString> m_selectedEntityNames;

	virtual BOOL OnInitDialog();
};
