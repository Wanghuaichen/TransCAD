#pragma once

// ���̺귯�� ����� ��ȣ ����
#ifdef PM_EXPORTS
#define PM_API __declspec(dllexport)
#else
#define PM_API __declspec(dllimport)
#endif