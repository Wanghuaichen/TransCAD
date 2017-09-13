#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "AssemApplyConstraintDialog.h"


// AssemApplyCoaxialDialog ��ȭ �����Դϴ�.

class AssemApplyCoaxialDialog : public AssemApplyConstraintDialog
{
	DECLARE_DYNAMIC(AssemApplyCoaxialDialog)

public:
	AssemApplyCoaxialDialog( AssemView * pView, CWnd* pParent = NULL );   // ǥ�� �������Դϴ�.
	virtual ~AssemApplyCoaxialDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONSTRAINT_COAXIAL };

// ����� ���� ���� �� �Լ� //
public:
	

public:
	virtual BOOL OnInitDialog();
	bool ApplyConstraint(void);

	afx_msg void OnCbnSelchangeConstrainedGeomType();
	afx_msg void OnCbnSelchangeReferenceGeomType();

// ����� ���� ���� �� �Լ� ������ //
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
