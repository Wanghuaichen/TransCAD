#pragma once

#include "afxwin.h"
#include ".\resource.h"
#include "AssemApplyConstraintDialog.h"

// AssemApplyDistanceDialog ��ȭ �����Դϴ�.

class AssemApplyDistanceDialog : public AssemApplyConstraintDialog
{
	DECLARE_DYNAMIC(AssemApplyDistanceDialog)

public:
	AssemApplyDistanceDialog( AssemView * pView, CWnd* pParent = NULL );   // ǥ�� �������Դϴ�.
	virtual ~AssemApplyDistanceDialog();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONSTRAINT_DISTANCE };

// ����� ���� ���� �� �Լ� //
public:
	PmeStdAssemblyIncidenceType m_incidenceType;
	CComboBox					m_distanceTypeComboBox;
	CEdit						m_distanceValue;

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
