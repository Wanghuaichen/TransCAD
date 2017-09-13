#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"


// PmCreateShellDialog ��ȭ �����Դϴ�.
class PmView;
class PmViewSelectionOperator;

class PmCreateShellDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateShellDialog)

public:
	PmCreateShellDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateShellDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_TRANSITIONFEATURES_SHELL };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
private:
	PmViewSelectionOperator * m_pOperator;

public:
	CEdit m_innerThickness;
	CEdit m_outerThickness;
	std::vector<CString> m_selectedEntityNames;

	virtual BOOL OnInitDialog();
};
