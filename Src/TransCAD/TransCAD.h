// TransCAD.h : TransCAD ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error PCH���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����Ͻʽÿ�.
#endif

#include "resource.h"       // �� ��ȣ
#include "TransCAD_i.h"


// TransCADApp:
// �� Ŭ������ ������ ���ؼ��� TransCAD.cpp�� �����Ͻʽÿ�.
//

class TransCADApp
	: public CHoopsApp
{
public:
	TransCADApp();

	bool InitializeHoops(void);
	bool ReleaseHoops(void);

	bool InitializeAcis(void);
	bool ReleaseAcis(void);

// ������
public:
	virtual BOOL InitInstance();

// ����

	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	afx_msg void OnAppAbout();
	afx_msg void OnScriptInterface();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();

	
};

extern TransCADApp theApp;