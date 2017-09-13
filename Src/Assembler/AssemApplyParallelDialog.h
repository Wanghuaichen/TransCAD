#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "AssemApplyConstraintDialog.h"

// AssemApplyParallelDialog ��ȭ �����Դϴ�.

class AssemApplyParallelDialog : public AssemApplyConstraintDialog
{
	DECLARE_DYNAMIC(AssemApplyParallelDialog)

public:
	AssemApplyParallelDialog( AssemView * pView, CWnd* pParent = NULL );   // ǥ�� �������Դϴ�.
	virtual ~AssemApplyParallelDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONSTRAINT_PARALLEL };

// ����� ���� ���� �� �Լ� //
public:


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
