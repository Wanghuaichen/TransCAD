#pragma once

// ���̺귯�� ����� ��ȣ ����
#ifdef ASSEM_EXPORTS
#define ASSEM_API __declspec(dllexport)
#else
#define ASSEM_API __declspec(dllimport)
#endif