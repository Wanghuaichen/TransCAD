#pragma once


// AssemTreeView ���Դϴ�.

class AssemTreeView
	: public CTreeView
{
	DECLARE_DYNCREATE(AssemTreeView)

protected:
	AssemTreeView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~AssemTreeView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


