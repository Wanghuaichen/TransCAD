#pragma once

// ���̺귯�� ����� ��ȣ ����
#ifdef MR_EXPORTS
#define MR_API __declspec(dllexport)
#else
#define MR_API __declspec(dllimport)
#endif