#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
//int main()
//{
//	int a = 10;
//
//	a = 20; // ʹ�õ���a�Ŀռ䣺��ֵ
//
//	int b = a; // ʹ�õ���a�����ݣ���ֵ
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	// ָ����ǵ�ַ
//	// ָ������ı��ʾ��Ǳ�����Ȼ�����汣����ǵ�ַ��ָ�룩ֵ
//	// ָ��������ռ䣨��ֵ��+���ݣ���ֵ����ַ��
//	p = (int*)0x1234;// p�����Ŀռ䣺��ֵ
//	int* q = p;      // p���������ݣ���ֵ������0x1234
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int b = *p;
//	*p = 20;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;//����a�����ĵ�ַ��0x12345678����ô����a������������ֱ��ͨ��ָ�뷽ʽ���з���
//	printf("%d\n", *(int*)0x12345678); //������һ��ֱ��Ѱַ�ķ�ʽ
//	*(int*)0x12345678 = 100; //������һ��ֱ��Ѱַ�ķ�ʽ
//	//���ԣ�C����ͨ�� int*p = &a;����ָ������ķ�ʽ������Ŀ��������ʲô�ô��أ�
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	p = (int*)&p;
//	*p = 10;
//	p = 20;
//	system("pause");
//	return 0;
//}