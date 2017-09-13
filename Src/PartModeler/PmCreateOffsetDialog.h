#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"


// PmCreateOffsetDialog ��ȭ �����Դϴ�.
class PmView;
class PmViewSelectionOperator;

class PmCreateOffsetDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreateOffsetDialog)

public:
	PmCreateOffsetDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreateOffsetDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_TRANSITIONFEATURES_OFFSET };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
private:
	PmViewSelectionOperator * m_pOperator;

public:
	CEdit m_thickness;
	std::vector<CString> m_selectedEntityNames;

	virtual BOOL OnInitDialog();
};
