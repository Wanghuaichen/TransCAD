// ���� ifdef ����� DLL���� ���������ϴ� �۾��� ���� �� �ִ� ��ũ�θ� ����� 
// ǥ�� ����Դϴ�. �� DLL�� ��� �ִ� ������ ��� ����ٿ� ���ǵ� _EXPORTS ��ȣ��
// �����ϵǸ�, ������ DLL�� ����ϴ� �ٸ� ������Ʈ������ �� ��ȣ�� ������ �� �����ϴ�.
// �̷��� �ϸ� �ҽ� ���Ͽ� �� ������ ��� �ִ� �ٸ� ��� ������Ʈ������ 
// DLLUGPOST_API �Լ��� DLL���� �������� ������ ����, �� DLL��
// �� DLL�� �ش� ��ũ�η� ���ǵ� ��ȣ�� ���������� ������ ���ϴ�.
#ifdef SCRIPTINTERFACE_EXPORTS
#define DLLSCRIPT_API extern "C" __declspec(dllexport)
#else
#define DLLSCRIPT_API extern "C" __declspec(dllimport)
#endif

#include <stdio.h>
#include <tchar.h>

#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <sstream>
#include <comutil.h>
#include <comdef.h>
#include <stdlib.h>
#include <typeinfo>
#include <assert.h>

#include "StringToken.h"
#include "StringCalc.h"
#include "CMD.h"
#include "Definition.h"
#include "ClearList.h"
#include "Vector.h"
#include "Math.h"
#include "Matrix.h"
#include "File.h"
#include "System.h"
#include "Information.h"

using namespace std;
using namespace CommandType;

extern TransCAD::IApplicationPtr m_spApplication;
extern CommandList Commands;
extern char seps_blank[];

#define VARIABLE_GET_AND_SET_FUNC_IMPL( type, fname, variable )	\
	type Get##fname() { return variable; }	\
	void Set##fname(type p##fname) { variable = p##fname; }

#define VARIABLE_IS_AND_SET_FUNC_IMPL( type, fname, variable )	\
	type Is##fname() { return variable; }	\
	void Set##fname(type p##fname) { variable = p##fname; }

#define LIST_GET_AND_SET_FUNC_IMPL( type, fname, variable )	\
	type Get##fname(int index) { return variable[index]; }	\
	int Get##fname##ListSize(void) { return variable.size(); }	\
	void Set##fname(type p##fname) { variable.push_back(p##fname); }	\
	void Erase##fname(int index) { variable.erase(variable.begin() + index); }

DLLSCRIPT_API int ScriptStartService(void);
DLLSCRIPT_API int ScriptRun(char * command);
DLLSCRIPT_API int ScriptTerminate(void);
