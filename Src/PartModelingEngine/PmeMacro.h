#pragma once

// ���̺귯�� ����� ��ȣ ����
#ifdef PME_EXPORTS
#define PME_API __declspec(dllexport)
#else
#define PME_API __declspec(dllimport)
#endif