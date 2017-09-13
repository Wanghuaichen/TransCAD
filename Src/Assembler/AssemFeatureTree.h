#pragma once

#include "AssemMacro.h"
#include ".\AssemTreeCtrlBar.h"
#include "afxcmn.h"
#include <map>

class AssemDocument;
class AssemFrame;

// AssemFeatureTree

class ASSEM_API AssemFeatureTree
	: public CAssemTreeCtrlBar
	, public IPmeAssemblyEventListener
{
	DECLARE_DYNAMIC(AssemFeatureTree)
	typedef std::map<PmeHComponent, HTREEITEM> TreeMap;
	typedef std::map<HTREEITEM, PmeHComponent> ObjectMap;
public:
	AssemFeatureTree();
	virtual ~AssemFeatureTree();

	BOOL Create(CString title, UINT barID, UINT treeID, CWnd * parent);

	void Initialize(void);

	AssemDocument * GetDocument() const;

	void SetParentFrame(AssemFrame * pFrame) {_pFrame = pFrame;}
	AssemFrame * GetParentFrame() const {return _pFrame;}

	// IPmePartEventListener
	virtual void OnPartUpdated( PmeHUpdateInfo hInfo );
	virtual void OnComponentUpdated(PmeHUpdateInfo hInfo);
	
	void SelectComponent(PmeHComponent hComponent);
private:
	void AddFeatures(PmeHPart hPart, HTREEITEM hParentNode);
	void AddComponent( PmeUpdateInfoItem item );
	void UpdateComponent( PmeUpdateInfoItem hItem );
	void AddPart( PmeUpdateInfoItem item );
	void UpdatePart( PmeUpdateInfoItem item );
	void HandleComponent(PmeHComponent hComponent, PmeUpdateInfoItem item);

 	HTREEITEM FindComponentTreeNode( HTREEITEM hRootNode, PmeHComponent hItem );
	HTREEITEM FindComponentTreeNodeByName( CString componentName, HTREEITEM hItem = NULL );
	HTREEITEM FindPartTreeNode( HTREEITEM hRootNode, CString compName, PmeHPart hItem );
// 	HTREEITEM GetTreeItemFromItemText(CString str);
// 	HTREEITEM SearchSubItem(HTREEITEM , CString);

	AssemFrame * _pFrame;
	TreeMap m_CompTreeMap;
	ObjectMap m_TreeCompMap;

protected:
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPopupDel();
	afx_msg void OnUpdatePopupDel(CCmdUI *pCmdUI);
};