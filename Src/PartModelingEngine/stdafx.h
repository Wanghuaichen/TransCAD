// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이 
// 들어 있는 포함 파일입니다.

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
#endif
#include "targetver.h"
// 아래 지정된 플랫폼에 우선하는 플랫폼을 대상으로 해야 한다면 다음 정의를 수정하십시오.
// 다른 플랫폼에 사용되는 해당 값의 최신 정보는 MSDN을 참조하십시오.
// #ifndef WINVER				// Windows 95 및 Windows NT 4 이상에서만 기능을 사용할 수 있습니다.
// #define WINVER 0x0400		// 이 값을 Windows 98 및 Windows 2000 이상을 대상으로 하는 데 적합한 값으로 변경하십시오.
// #endif
// 
// #ifndef _WIN32_WINNT		// Windows NT 4 이상에서만 기능을 사용할 수 있습니다.
// #define _WIN32_WINNT 0x0400	// 이 값을 Windows 2000 이상을 대상으로 하는 데 적합한 값으로 변경하십시오.
// #endif						
// 
// #ifndef _WIN32_WINDOWS		// Windows 98 이상에서만 기능을 사용할 수 있습니다.
// #define _WIN32_WINDOWS 0x0410 // 이 값을 Windows Me 이상을 대상으로 하는 데 적합한 값으로 변경하십시오.
// #endif
// 
// #ifndef _WIN32_IE			// IE 4.0 이상에서만 기능을 사용할 수 있습니다.
// #define _WIN32_IE 0x0400	// 이 값을 IE 5.0 이상을 대상으로 하는 데 적합한 값으로 변경하십시오.
// #endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// 일부 CString 생성자는 명시적으로 선언됩니다.

#include <afxwin.h>         // MFC 핵심 및 표준 구성 요소입니다.
#include <afxext.h>         // MFC 확장입니다.

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE 클래스입니다.
#include <afxodlgs.h>       // MFC OLE 대화 상자 클래스입니다.
#include <afxdisp.h>        // MFC 자동화 클래스입니다.
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC 데이터베이스 클래스입니다.
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO 데이터베이스 클래스입니다.
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>		// Internet Explorer 4의 공용 컨트롤에 대한 MFC 지원입니다.
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// Windows 공용 컨트롤에 대한 MFC 지원입니다.
#endif // _AFX_NO_AFXCMN_SUPPORT

#import <msxml3.dll>

#include <MathRepresentation.h>
#include ".\PmeAcis.h"
#include ".\PmeDcm.h"
#include ".\PmeMacro.h"

#include "license.hxx"
#include "spa_unlock_result.hxx"
//#include "spa_lic_err_gui.hxx"
#include <iostream>
#include <map>
using namespace std;



extern bool g_bNamingType;
