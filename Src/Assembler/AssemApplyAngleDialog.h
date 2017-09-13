#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "AssemApplyConstraintDialog.h"

// AssemApplyAngleDialog ��ȭ �����Դϴ�.

class AssemApplyAngleDialog : public AssemApplyConstraintDialog
{
	DECLARE_DYNAMIC(AssemApplyAngleDialog)

public:
	AssemApplyAngleDialog( AssemView * pView, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~AssemApplyAngleDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONSTRAINT_ANGLE };

// ����� ���� ���� �� �Լ� //
public:
	CEdit m_angleValue;

public:
	virtual BOOL OnInitDialog();
	bool ApplyConstraint(void);

	
// ����� ���� ���� �� �Լ� ������ //

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeConstrainedGeomType();
	afx_msg void OnCbnSelchangeReferenceGeomType();
};
