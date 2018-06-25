#include "stdafx.h"
#include "AssemFeatureTree.h"
#include "AssemFrame.h"
#include "AssemDocument.h"
#include "resource.h"
#include ".\PmeComponent.h"
#include ".\PmeComponentAPI.h"


IMPLEMENT_DYNAMIC(AssemFeatureTree, CAssemTreeCtrlBar)

AssemFeatureTree::AssemFeatureTree()
: _pFrame(0)
{
}

AssemFeatureTree::~AssemFeatureTree()
{
}


BEGIN_MESSAGE_MAP(AssemFeatureTree, CAssemTreeCtrlBar)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_SETCURSOR()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
//	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_COMMAND(ID_POPUP_DEL, &AssemFeatureTree::OnPopupDel)
	ON_UPDATE_COMMAND_UI(ID_POPUP_DEL, &AssemFeatureTree::OnUpdatePopupDel)
END_MESSAGE_MAP()

// AssemFeatureTree �޽��� ó�����Դϴ�.

BOOL AssemFeatureTree::Create(CString title, UINT barID, UINT treeID, CWnd * parent)
{
	if(!CAssemSizingControlBar::Create(title, parent, barID))
        return FALSE;      // fail to create

	SetBarStyle(GetBarStyle() | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	CreateTreeCtrl(WS_CHILD | WS_VISIBLE | WS_BORDER | TVS_HASLINES | TVS_HASBUTTONS | TVS_LINESATROOT | TVS_SHOWSELALWAYS, treeID);
	GetTreeCtrl().ModifyStyleEx(0, WS_EX_CLIENTEDGE);	
	
	return true;
}

void AssemFeatureTree::Initialize(void)
{
	CTreeCtrl & tree = GetTreeCtrl();
	tree.DeleteAllItems();
	tree.InsertItem(TVIF_TEXT | TVIF_PARAM, _T("Assembly"), -1, -1, -1, -1, (LPARAM)GetDocument()->GetAssembly(), TVI_ROOT, TVI_LAST);
	
	// �ӽù��� constraints Ʈ�� �߰�
	tree.InsertItem(TVIF_TEXT | TVIF_PARAM, _T("Constraints"), -1, -1, -1, -1, (LPARAM)GetDocument()->GetAssembly(), TVI_ROOT, TVI_LAST);
	
}

AssemDocument * AssemFeatureTree::GetDocument() const
{
	AssemDocument * pDoc = static_cast<AssemDocument *>(GetParentFrame()->GetActiveDocument());

	return pDoc;
}


// Part
void AssemFeatureTree::AddPart( PmeUpdateInfoItem item )
{
	PmeHPart hPart = item.hItem;

	CString name, parentName;
	PmePartAPI::GetName( hPart, name );
	PmePartAPI::GetParentName( hPart, parentName );

	CTreeCtrl & treeCtrl = GetTreeCtrl();

	HTREEITEM hCompTree = FindComponentTreeNodeByName( parentName );	// ��Ʈ�� �� ������Ʈ ��带 ã�� �Լ�
	
	PmeHComponent hComponent = (PmeHComponent)treeCtrl.GetItemData( hCompTree );

#ifdef _DEBUG
	CString compName;
	PmeComponentAPI::GetName( hComponent, compName );
#endif
	HTREEITEM hNode = treeCtrl.InsertItem( TVIF_TEXT | TVIF_PARAM, name, -1, -1, -1, -1, (LPARAM)hPart, m_CompTreeMap[hComponent], TVI_LAST );

	AddFeatures( hPart, hNode );

	treeCtrl.Expand( m_CompTreeMap[ hComponent ], TVE_EXPAND );

	m_TreeCompMap[hNode] = hComponent;


	/*PmeHComponent hItem = item.hItem;
	
	int size;
	PmeComponentAPI::GetPartSize( hItem, size );

	if ( size == 0 )
		return;

	else
	{
		for ( int i = 0; i < size; ++i )
		{
			PmeHPart hPart = 0;
			PmeComponentAPI::GetItem( hItem, i, hPart );

			CString name;
			PmePartAPI::GetName( hPart, name );

			CTreeCtrl & treeCtrl = GetTreeCtrl();

			HTREEITEM hNode = treeCtrl.InsertItem( TVIF_TEXT | TVIF_PARAM, name, -1, -1, -1, -1, (LPARAM)hPart, m_CompTreeMap[hItem], TVI_LAST );

			AddFeatures( hPart, hNode );

			treeCtrl.Expand( m_CompTreeMap[ hItem ], TVE_EXPAND );

			m_TreeCompMap[hNode] = hItem;
		}
		
	}*/
}

void AssemFeatureTree::UpdatePart( PmeUpdateInfoItem item )
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();
	HTREEITEM hRootNode = treeCtrl.GetRootItem();

	PmeHPart hPart = item.hItem;

	CString parentName;
	PmePartAPI::GetParentName( hPart, parentName );

	HTREEITEM hNode = FindPartTreeNode( hRootNode, parentName, hPart );
			
	if ( hNode == NULL )
	{
		AddPart( item );
	}
	/*PmeHComponent hItem = item.hItem;
	
	int size;
	PmeComponentAPI::GetPartSize( hItem, size );

	for ( int i = 0; i < size; ++i )
	{
		BOOL result;
		PmeComponentAPI::IsPart( hItem, i, result );

		if ( result )
		{
			CTreeCtrl & treeCtrl = GetTreeCtrl();
			HTREEITEM hRootNode = treeCtrl.GetRootItem();

			CString compName;
			PmeComponentAPI::GetName( hItem, compName );

			PmeHPart hPart = 0;
			PmeComponentAPI::GetPart( hItem, i, hPart );

			HTREEITEM hNode = FindPartTreeNode( hRootNode, compName, hPart );
			
			if ( hNode == NULL )
			{
				AddPart( item );
			}
		}
	}*/
}

void AssemFeatureTree::OnPartUpdated( PmeHUpdateInfo hInfo )
{
	TRACE(_T("OnPartUpdated\n"));

	int size;
	PmeUpdateInfoAPI::GetSize( hInfo, size );

	for( int i = 0; i < size; ++i )
	{
		PmeUpdateInfoItem item;
		PmeUpdateInfoAPI::GetItem( hInfo, i, item );
		
		switch( item.state )
		{
		case PmeUpdateState_Add:
			AddPart( item );
			break;
		case PmeUpdateState_Update:
			UpdatePart( item );
			break;
		case PmeUpdateState_Delete:
			break;
		}
	}
}


// Component
void AssemFeatureTree::AddComponent( PmeUpdateInfoItem item )
{
	PmeHComponent hItem = item.hItem;

	CString name;
	PmeComponentAPI::GetName( hItem, name );

	CTreeCtrl & treeCtrl = GetTreeCtrl();

	PmeHComponent hParent;
	PmeComponentAPI::GetParentComp( hItem, hParent );

	if( hParent )
	{
		HTREEITEM hNode = treeCtrl.InsertItem(TVIF_TEXT | TVIF_PARAM, name, -1, -1, -1, -1, (LPARAM)hItem,  m_CompTreeMap[hParent], TVI_LAST);
		treeCtrl.Expand(m_CompTreeMap[hParent], TVE_EXPAND);
		m_CompTreeMap[hItem] = hNode;
		m_TreeCompMap[hNode] = hItem;
	}
	else
	{
		HTREEITEM hNode = treeCtrl.InsertItem(TVIF_TEXT | TVIF_PARAM, name, -1, -1, -1, -1, (LPARAM)hItem, treeCtrl.GetRootItem(), TVI_LAST);
		treeCtrl.Expand(treeCtrl.GetRootItem(), TVE_EXPAND);
		m_CompTreeMap[hItem] = hNode;
		m_TreeCompMap[hNode] = hItem;
	}

}

void AssemFeatureTree::UpdateComponent( PmeUpdateInfoItem item )
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();
	HTREEITEM hRootNode = treeCtrl.GetRootItem();

	PmeHComponent hItem = item.hItem;

#ifdef _DEBUG
	CString parentName;
	PmeComponentAPI::GetParentName( hItem, parentName );
	CString hItemName;
	PmeComponentAPI::GetName( hItem, hItemName );
#endif

	HTREEITEM hNode = FindComponentTreeNode( hRootNode, hItem );

	if ( hNode == NULL )
	{
		AddComponent( item );
	}
	
	int subCompSize;
	PmeComponentAPI::GetSize( hItem, subCompSize );

	for ( int i = 0; i < subCompSize; ++i )
	{
		BOOL isComponent;
		PmeComponentAPI::IsComponent( hItem, i, isComponent );
		if ( isComponent )
		{
			PmeHComponent hComp;
			PmeComponentAPI::GetComponent( hItem, i, hComp );

			#ifdef _DEBUG
				CString parentName, componentName;
				PmeComponentAPI::GetParentName( hComp, parentName );
				PmeComponentAPI::GetName( hComp, componentName );
			#endif
			
			PmeHUpdateInfo hUpdatedComponents = 0;
			PmeUpdateInfoAPI::Create( hUpdatedComponents );

			PmeUpdateInfoItem infoItem;

			infoItem.hItem = hComp;
			infoItem.state = PmeUpdateState_Update;

			PmeUpdateInfoAPI::AddItem( hUpdatedComponents, infoItem );

			UpdateComponent( infoItem );

			PmeUpdateInfoAPI::Delete( hUpdatedComponents );
		}
		// ��Ʈ�� ���,
		else	
		{
			PmeHPart hPart;
			PmeComponentAPI::GetPart( hItem, i, hPart );

			#ifdef _DEBUG
				CString parentName, partName;
				PmePartAPI::GetParentName( hPart, parentName );
				PmePartAPI::GetName( hPart, partName );
			#endif

			PmeHUpdateInfo hUpdatedComponents = 0;
			PmeUpdateInfoAPI::Create( hUpdatedComponents );

			PmeUpdateInfoItem infoItem;

			infoItem.hItem = hPart;
			infoItem.state = PmeUpdateState_Update;

			PmeUpdateInfoAPI::AddItem( hUpdatedComponents, infoItem );

			UpdatePart( infoItem );

			PmeUpdateInfoAPI::Delete( hUpdatedComponents );
		}
	}

	treeCtrl.Expand( treeCtrl.GetRootItem(), TVE_EXPAND );
}

void AssemFeatureTree::OnComponentUpdated( PmeHUpdateInfo hInfo )
{
	TRACE(_T("OnComponentUpdated\n"));

	int size;
	PmeUpdateInfoAPI::GetSize( hInfo, size );
	
	for(int i = 0; i < size; ++ i)
	{
		PmeUpdateInfoItem item;
		PmeUpdateInfoAPI::GetItem(hInfo, i, item);
		
		switch(item.state)
		{
		case PmeUpdateState_Add:
			AddComponent( item );
			break;
		case PmeUpdateState_Update:
			UpdateComponent ( item );
			break;
		case PmeUpdateState_Delete:
			break;
		}
	}

	//OnPartUpdated( hInfo );
}


// Constraints
void AssemFeatureTree::AddConstraints( PmeUpdateInfoItem item)
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();
	treeCtrl.InsertItem("Constraints", treeCtrl.GetRootItem(), TVI_LAST);
}





void AssemFeatureTree::SelectComponent(PmeHComponent hComponent)
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();
	treeCtrl.SetFocus();
	treeCtrl.SelectItem(m_CompTreeMap[hComponent]);
}



/**
	@brief	Tree node���� ���� component node�� �ִ��� ã�� �Լ�
*/
HTREEITEM AssemFeatureTree::FindComponentTreeNode( HTREEITEM hRootNode, PmeHComponent hItem )	//PmeHComponent
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();

 	PmeHComponent hItemData = (PmeHComponent)treeCtrl.GetItemData( hRootNode );

	// hItem�� root node�� ���� ���,
	if( hItemData && hItemData == hItem )
		return hRootNode;
	
	// root node�� ���� ��尡 �ִ� ���,
	if( treeCtrl.ItemHasChildren( hRootNode ) )
	{
		HTREEITEM hParent = hRootNode;
		HTREEITEM hChildNode = treeCtrl.GetChildItem( hRootNode );

#ifdef _DEBUG
	CString parent = treeCtrl.GetItemText( hRootNode );
	CString child = treeCtrl.GetItemText( hChildNode );
#endif

		while( hChildNode != NULL )
		{
			HTREEITEM hResult = FindComponentTreeNode( hChildNode, hItem );
			if( hResult )
				return hResult;
			
			// ��ã���� ���� node�� �̵�
			hChildNode = treeCtrl.GetNextItem( hChildNode, TVGN_NEXT );
		}
	}
	
	return NULL;
}

HTREEITEM AssemFeatureTree::FindComponentTreeNodeByName( CString componentName, HTREEITEM hItem )
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();
	 
	HTREEITEM rootNode = hItem;

	if ( hItem == NULL )
		rootNode = treeCtrl.GetRootItem();
	 
	CString rootName = treeCtrl.GetItemText( rootNode );

	if ( rootName == componentName )
		return rootNode;
	
	if ( treeCtrl.ItemHasChildren( rootNode ) )
	{
		HTREEITEM hChild = treeCtrl.GetNextItem( rootNode, TVGN_CHILD );
		CString name = treeCtrl.GetItemText( hChild );

		while ( hChild )
		{
			PmeHComponent hComp = (PmeHComponent)treeCtrl.GetItemData( hChild );
			BOOL isComponent;
			PmeComponentAPI::IsComponent( hComp, isComponent );

			if ( isComponent ) 
			{
				if ( name == componentName )
					return hChild;
				else
				{
					HTREEITEM result = FindComponentTreeNodeByName( componentName, hChild );
					if ( result )
						return result;
				}
			}

			hChild = treeCtrl.GetNextItem( hChild, TVGN_NEXT );
		}
	}

	return NULL;
}

/**
	@brief	Tree���� componet�� ã�� �ش� component�� part�� �ִ��� Ȯ��.
			���ٸ�, UpdatePart�Լ����� ����
*/
 HTREEITEM AssemFeatureTree::FindPartTreeNode( HTREEITEM hRootNode, CString compName, PmeHPart hItem )
 {
	 CTreeCtrl & treeCtrl = GetTreeCtrl();

	 if ( treeCtrl.ItemHasChildren( hRootNode ) )
	 {
		 HTREEITEM hParent = hRootNode;
		 HTREEITEM hChildNode = treeCtrl.GetChildItem( hRootNode );

#ifdef _DEBUG
	CString parent = treeCtrl.GetItemText( hRootNode );
	CString child = treeCtrl.GetItemText( hChildNode );
	PmePart * pPart = PME_HANDLE2PART( hItem );
	CString partName;
	PmePartAPI::GetName( pPart, partName );
#endif

		while ( hChildNode != NULL )
		{
			CString name = treeCtrl.GetItemText( hChildNode );

			if ( name == compName )
			{
				HTREEITEM hParent2 = hChildNode;
				HTREEITEM hChildNode2 = treeCtrl.GetChildItem( hParent2 );

				while ( hChildNode2 != NULL )
				{
					HTREEITEM hResult = FindComponentTreeNode( hChildNode2, hItem );
					if ( hResult )
						return hResult;

					hChildNode2 = treeCtrl.GetNextItem( hChildNode2, TVGN_NEXT );
				}
			}

			hChildNode = treeCtrl.GetNextItem( hChildNode, TVGN_NEXT );
		}

	 }

	 return NULL;
 }


void AssemFeatureTree::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	
	/*CTreeCtrl & treeCtrl = GetTreeCtrl();

	HTREEITEM hNode = treeCtrl.GetSelectedItem();
	PmeHComponent hComp = m_TreeCompMap[hNode];
	if(hComp)
		GetDocument()->SelectComponent(hComp);*/
	
	//__super::OnLButtonDown(nFlags, point);
}

void AssemFeatureTree::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	//CTreeCtrl & treeCtrl = GetTreeCtrl();
	//
	//HTREEITEM hNode = treeCtrl.GetSelectedItem();
	//PmeHComponent hComp = m_TreeCompMap[hNode];
	//if(hComp)
	//{
	//	GetDocument()->SelectComponent(hComp);
	//
	//	CMenu parent_menu;	
	//	CMenu * popup_menu;
	//					
	//	CRect   rect;
	//	CPoint  new_menu_position;
	//
	//	int pos;
	//	(void) pos;
	//		

	//	GetCursorPos(&new_menu_position);

	//
	//	parent_menu.LoadMenu (IDR_POPUP_MENU);
	//	// Get a pointer to the menu
	//	popup_menu = parent_menu.GetSubMenu (0);
	//
	//	GetWindowRect(&rect);
	//
	//	// Transform the screen coordinate point to a window-relative point.
	//	//new_menu_position = //CPoint (rect.left + point.x, rect.top + point.y);
	//
	//	popup_menu->TrackPopupMenu( TPM_LEFTALIGN , 
	//		new_menu_position.x, 
	//		new_menu_position.y, 
	//		(CWnd *)this);  
	//
	//}
	//__super::OnRButtonDown(nFlags, point);
}

void AssemFeatureTree::OnPopupDel()
{
	
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.

	/*PmeHAssembly hAssembly= GetDocument()->GetAssembly();

	PmeAssemblyAPI::DeleteComponent(hAssembly,GetDocument()->GetSelectedcomp());*/
}

void AssemFeatureTree::OnUpdatePopupDel(CCmdUI *pCmdUI)
{
	
	//pCmdUI->SetCheck(1);
	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
}

void AssemFeatureTree::AddFeatures(PmeHPart hPart, HTREEITEM hParentNode)
{
	CTreeCtrl & treeCtrl = GetTreeCtrl();
	
	BOOL IsBrepPart = (BOOL)true;
	PmePartAPI::IsBrepPart(hPart,IsBrepPart);
	
	if (IsBrepPart == 0)
	{
		PmeHFeatures hFeatures = 0;
		PmePartAPI::GetFeatures(hPart, hFeatures);
		
		int size = 0;
		PmeFeaturesAPI::GetSize(hFeatures,size);
		
		for (int i = 0; i < size; ++i)
		{
			PmeHFeature hFeature = 0;
			PmeFeaturesAPI::GetItem(hFeatures, i, hFeature);
			
			CString hName;
			PmeFeatureAPI::GetName(hFeature, hName);
			HTREEITEM hFeatureNode = treeCtrl.InsertItem(TVIF_TEXT | TVIF_PARAM, hName, -1, -1, -1, -1, (LPARAM)hFeature, hParentNode, TVI_LAST);
		}
	}
}

void AssemFeatureTree::HandleComponent( PmeHComponent hComponent, PmeUpdateInfoItem item )
{
	
	/*int nSize;

	PmeComponentAPI::GetSize(hComponent, nSize);

	AddComponent( item );	

	switch(item.state)
	{
	case PmeUpdateState_Add:

		for (int i = 0; i<nSize; i++)
		{
			BOOL result;
			PmeComponentAPI::IsComponent(hComponent,i,result);

			if(result)
			{
				PmeHComponent hComp = 0;
				PmeComponentAPI::GetItem(hComponent, i, hComp);

				HandleComponent(hComp, item);
			}	
			else
			{
				PmeHPart hPart = 0;
				PmeComponentAPI::GetItem(hComponent, i, hPart);
				AddPart(hPart,hComponent);
			}

		}

		break;
	
	case PmeUpdateState_Update:
		break;
	
	case PmeUpdateState_Delete:
		break;
	}*/
}

// HTREEITEM AssemFeatureTree::GetTreeItemFromItemText(CString str)
// {
// 	// ��� Tree��忡�� ã�´�.
// 	CTreeCtrl & treeCtrl = GetTreeCtrl();
// 
// 	HTREEITEM hItem = treeCtrl.GetRootItem();
// 
// 	while ( hItem )
// 	{
// 		CString strItem = treeCtrl.GetItemText( hItem );
// 		
// 	//	TRACE( _T("%s\n"), strItem);
// 		
// 		if(  strItem ==  str )
// 			return hItem;
// 
// 		hItem = treeCtrl.GetNextSiblingItem( hItem );
// 	}
// 
// 	if( treeCtrl.ItemHasChildren( treeCtrl.GetRootItem() ) )
// 	{
// 		return SearchSubItem(hItem,str);
// 	}
// 
// 	return NULL;
// 
// }
// 
// HTREEITEM AssemFeatureTree::SearchSubItem(HTREEITEM hItem, CString str)
// {
// 		CTreeCtrl & treeCtrl = GetTreeCtrl();
// 
// 		HTREEITEM hSubItem = treeCtrl.GetChildItem( hItem );
// 
// 		HTREEITEM retItem = NULL;
// 
// 		while ( hSubItem )
// 		{
// 			CString strItem = treeCtrl.GetItemText( hSubItem );
// 
// 		//	TRACE( _T("%s\n"), strItem);
// 
// 			if ( treeCtrl.ItemHasChildren( hSubItem ) )
// 			{
// 				retItem = SearchSubItem(hSubItem,str);
// 			}
// 			
// 			if(  strItem ==  str  )
// 				retItem = hSubItem;
// 
// 			hSubItem = treeCtrl.GetNextSiblingItem( hSubItem );
// 
// 		}
// 
// 		return retItem;
// 		
// }
