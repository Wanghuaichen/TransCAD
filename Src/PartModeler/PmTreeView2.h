#pragma once


// PmTreeView ���Դϴ�.

class PmTreeView
	: public CTreeView
{
	DECLARE_DYNCREATE(PmTreeView)

protected:
	PmTreeView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~PmTreeView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


