#pragma once
#include "afxwin.h"
#include ".\resource.h"
#include "PmCreateFeatureDialog.h"

// PmCreateExtrudeDialog ��ȭ �����Դϴ�.

class PmCreatePatternRectangularDialog : public PmCreateFeatureDialog
{
	DECLARE_DYNAMIC(PmCreatePatternRectangularDialog)

public:
	PmCreatePatternRectangularDialog(PmView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~PmCreatePatternRectangularDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = ID_TRANSFORMATIONFEATURES_RECTANGULARPATTERN };

public:
	void SetParameters(PmeFeature * pFeature);
	bool CreateFeature(void);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()

private:
	afx_msg void OnBnClickedSelectTargetFeatures();

public:
	CEdit m_targetFeatures;
	CEdit m_rowDirX;
	CEdit m_rowDirY;
	CEdit m_rowDirZ;
	CEdit m_colDirX;
	CEdit m_colDirY;
	CEdit m_colDirZ;
	CEdit m_rowNumber;
	CEdit m_rowSpacing;
	CEdit m_colNumber;
	CEdit m_colSpacing;
	std::vector<CString> m_targetFeatureNames;

	virtual BOOL OnInitDialog();
};