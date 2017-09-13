// AssemApplyIncidenceDialog.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "AssemApplyIncidenceDialog.h"
#include "..\PartModelingEngine\PmeStdAssemblyIncidenceAPI.h"
#include ".\AssemView.h"

#include ".\AssemHSelectionSet.h"
#include ".\AssemViewPersistentNameOperator.h"


// AssemApplyIncidenceDialog ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC( AssemApplyIncidenceDialog, AssemApplyConstraintDialog )

AssemApplyIncidenceDialog::AssemApplyIncidenceDialog( AssemView * pView, CWnd* pParent /*=NULL*/ )
	: AssemApplyConstraintDialog( pView )
{
	m_selectPart = 0;
	m_incidenceType = PmeStdAssemblyIncidenceType_Opposite;
}

AssemApplyIncidenceDialog::~AssemApplyIncidenceDialog()
{
}

void AssemApplyIncidenceDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control( pDX, IDC_CONSTRAINT_NAME, m_constraintName );
	DDX_Control( pDX, IDC_CONSTRAINED_COMP_NAME, m_constrainedCompName );
	DDX_Control( pDX, IDC_CONSTRAINED_PART_NAME, m_constrainedPartName );
	DDX_Control( pDX, IDC_CONSTRAINED_GEOM_NAME, m_constrainedGeomName );
	DDX_Control( pDX, IDC_CONSTRAINED_GEOM_TYPE, m_constrainedGeomType );
	DDX_Control( pDX, IDC_REFERENCE_COMP_NAME, m_referenceCompName );
	DDX_Control( pDX, IDC_REFERENCE_PART_NAME, m_referencePartName );
	DDX_Control( pDX, IDC_REFERENCE_GEOM_NAME, m_referenceGeomName );
	DDX_Control( pDX, IDC_REFERENCE_GEOM_TYPE, m_referenceGeomType );
	DDX_Control( pDX, IDC_INCIDENCE_TYPE, m_incidenceTypeComboBox );
}


BEGIN_MESSAGE_MAP( AssemApplyIncidenceDialog, AssemApplyConstraintDialog )
	ON_CBN_SELCHANGE(IDC_CONSTRAINED_GEOM_TYPE, &AssemApplyIncidenceDialog::OnCbnSelchangeConstrainedGeomType)
	ON_CBN_SELCHANGE(IDC_REFERENCE_GEOM_TYPE, &AssemApplyIncidenceDialog::OnCbnSelchangeReferenceGeomType)
END_MESSAGE_MAP()


BOOL AssemApplyIncidenceDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_constraintName.SetWindowText( GetNewConstraintName( PmeStdAssemblyConstraintType_Incidence ) );
	m_constraintName.SetFocus();

	m_constrainedGeomType.AddString( _T("linear edge") );
	m_constrainedGeomType.AddString( _T("planar face") );	
	m_constrainedGeomType.SetCurSel(1);

	m_referenceGeomType.AddString( _T("linear edge") );
	m_referenceGeomType.AddString( _T("planar face") );	
	m_referenceGeomType.SetCurSel(1);

	m_incidenceTypeComboBox.AddString( _T("Opposite") );
	m_incidenceTypeComboBox.AddString( _T("Same") );
	m_incidenceTypeComboBox.SetCurSel(0);

	// �⺻������ constrained�� ������ ���� �Է��ϵ��� ����
	// constrained������ radio ��ư�� Ȱ��ȭ�ϸ� reference�����Է��� ����
	if ( m_selectPart == 0 )
	{
		m_partType = PmeStdAssemblyPartType_Constrained;

		m_selectButton = (CButton *)GetDlgItem( IDC_SELECT_CONSTRAINED );
		m_selectButton->SetCheck( TRUE );

		m_referenceGeomType.EnableWindow( FALSE );
		m_referenceCompName.EnableWindow( FALSE );
		m_referencePartName.EnableWindow( FALSE );
		m_referenceGeomName.EnableWindow( FALSE );
	}

	// Incidence type�� constrained�� reference ��� face�� �����Ǿ�� Ȱ��ȭ
	CString _constrainedGeomType, _referenceGeomType;
	m_constrainedGeomType.GetWindowTextA( _constrainedGeomType );
	m_referenceGeomType.GetWindowTextA( _referenceGeomType );
	
	if ( _constrainedGeomType == "planar face" && _referenceGeomType == "planar face" )
	{
		m_incidenceTypeComboBox.EnableWindow( TRUE );
	}
	else
	{
		m_incidenceTypeComboBox.EnableWindow( FALSE );
	}

	// m_constrainedGeomType�� �⺻ ���� "planar face"�� ���������Ƿ�,
	// ���� ���͸� Face�� ����
	m_pOperator->OnFace();

	UpdateData( FALSE );

	// Dialog�� ��ġ ����
	RECT  rectParent;
	CPoint pos;
	(::AfxGetMainWnd())->GetWindowRect(&rectParent);
	
	pos.x = rectParent.left + 210;
	pos.y = rectParent.top + 80;
	SetWindowPos(NULL, pos.x ,pos.y, 0, 0, SWP_NOSIZE);

	return FALSE;

}


bool AssemApplyIncidenceDialog::ApplyConstraint()
{
	CString _constraintName;

	CString _constrainedCompName;
	CString _constrainedPartName;
	CString _constrainedGeomName;
	CString _constrainedGeomType;

	CString _referenceCompName;
	CString _referencePartName;
	CString _referenceGeomName;
	CString _referenceGeomType;

	CString _incidenceType;

/******************** GUI�� �Էµ� ���� �޾ƿ��� ���� ********************/
	m_constraintName.GetWindowText( _constraintName );

	m_constrainedCompName.GetWindowText( _constrainedCompName );
	m_constrainedPartName.GetWindowText( _constrainedPartName );
	m_constrainedGeomName.GetWindowText( _constrainedGeomName );
	m_constrainedGeomType.GetWindowText( _constrainedGeomType );
	
	m_referenceCompName.GetWindowText( _referenceCompName );
	m_referencePartName.GetWindowText( _referencePartName );
	m_referenceGeomName.GetWindowText( _referenceGeomName );
	m_referenceGeomType.GetWindowText( _referenceGeomType );

	m_incidenceTypeComboBox.GetWindowText( _incidenceType );
/******************** GUI�� �Էµ� ���� �޾ƿ��� ���� ********************/
	

/******************** �Է� ���� ��ȿ�� �Ǵ� ���� ********************/
	if ( _constraintName.IsEmpty() )
	{
		AfxMessageBox( _T("Enter the constraint name") );
		return false;
	}

	if ( _constrainedCompName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the constrained component") );
		return false;
	}

	if ( _constrainedPartName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the constrained part") );
		return false;
	}

	if ( _constrainedGeomName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the constrained geometry") );
		return false;
	}

	if ( _referenceCompName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the reference component") );
		return false;
	}

	if ( _referencePartName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the reference part") );
		return false;
	}

	if ( _referenceGeomName.IsEmpty() )
	{
		AfxMessageBox( _T("Select the reference geometry") );
		return false;
	}
/******************** �Է� ���� ��ȿ�� �Ǵ� ���� ********************/


	if ( _incidenceType == "Opposite" )
		m_incidenceType = PmeStdAssemblyIncidenceType_Opposite;

	else
		m_incidenceType = PmeStdAssemblyIncidenceType_Same;


	PmeHPart _hConstrainedPart, _hReferencePart;

	PmeAssemblyAPI::GetPartByName( m_hAssembly, _constrainedCompName, _constrainedPartName, _hConstrainedPart );
	PmeAssemblyAPI::GetPartByName( m_hAssembly, _referenceCompName, _referencePartName, _hReferencePart );


	PmeHReference _hConstrainedGeometry, _hReferenceGeometry;

	PmePartAPI::SelectBrepByName( _hConstrainedPart, _constrainedGeomName, _hConstrainedGeometry );
	PmePartAPI::SelectBrepByName( _hReferencePart, _referenceGeomName, _hReferenceGeometry );

	PmeHStdAssemblyConstraint hConstraint = 0;
	PmeStdAssemblyIncidenceAPI::ApplyIncidence( m_hAssembly,
								  				_constraintName,
												_hConstrainedPart,
												_hConstrainedGeometry,
												_hReferencePart,
												_hReferenceGeometry,
												m_incidenceType,
												hConstraint);
	

	if ( hConstraint ) return true;
	else return false;
}

void AssemApplyIncidenceDialog::OnCbnSelchangeConstrainedGeomType()
{
	m_selectPart = 0;

	ApplySelectionFilter( m_selectPart );

	// Incidence type�� constrained�� reference ��� face�� �����Ǿ�� Ȱ��ȭ
	CString _constrainedGeomType, _referenceGeomType;
	m_constrainedGeomType.GetWindowTextA( _constrainedGeomType );
	m_referenceGeomType.GetWindowTextA( _referenceGeomType );
	
	if ( _constrainedGeomType == "planar face" && _referenceGeomType == "planar face" )
	{
		m_incidenceTypeComboBox.EnableWindow( TRUE );
	}
	else
	{
		m_incidenceTypeComboBox.EnableWindow( FALSE );
	}
}


void AssemApplyIncidenceDialog::OnCbnSelchangeReferenceGeomType()
{
	m_selectPart = 1;

	ApplySelectionFilter( m_selectPart );

	// Incidence type�� constrained�� reference ��� face�� �����Ǿ�� Ȱ��ȭ
	CString _constrainedGeomType, _referenceGeomType;
	m_constrainedGeomType.GetWindowTextA( _constrainedGeomType );
	m_referenceGeomType.GetWindowTextA( _referenceGeomType );
	
	if ( _constrainedGeomType == "planar face" && _referenceGeomType == "planar face" )
	{
		m_incidenceTypeComboBox.EnableWindow( TRUE );
	}
	else
	{
		m_incidenceTypeComboBox.EnableWindow( FALSE );
	}
}
