#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int c = 999999999999999999;
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	a = 10;
//	int b = a;
//	
//
//	return 0;
//}

int main()
{
	int a = 0xDD;
	int b = ++a; //��b���գ���ôa����ʹ���ǽ�a��ֵ(����),�ŵ�b��
	int c = 0xEE;
	c++; //û�н��շ�����ô"��ʹ��"�������⣿
	system("pause");
	return 0;
}

//int a = 0xDD;
//00CA13DE mov dword ptr[a], 0DDh //dword ptr [a]: �����ڴ��е�a������a����
//int b = a++; //��b���գ���ôa����ʹ���ǽ�a��ֵ(����),�ŵ�b��
//00CA13E5 mov eax, dword ptr[a] //���ڴ��е�a������eax�Ĵ���
//00CA13E8 mov dword ptr[b], eax //��eax�Ĵ����е����ݣ�����b�����"��ʹ��"
//00CA13EB mov ecx, dword ptr[a] //���ڴ��е�a,����ecx�Ĵ���
//00CA13EE add ecx, 1 //��ecx������(����a��ֵ0xDD)����������
//00CA13F1 mov dword ptr[a], ecx //����������д��a����.���"������"
//int c = 0xEE;
//00CA13F4 mov dword ptr[c], 0EEh //����c����
//c++; //û�н��շ�����ô"��ʹ��"�������⣿
//00CA13FB mov eax, dword ptr[c] //��C����������(�ڴ���)������eax�Ĵ���
//00CA13FE add eax, 1 //�������
//00CA1401 mov dword ptr[c], eax //�����д��c���������"����"
//���ۣ�a++�����ĺ�������ʹ�ã������������û�б������գ���ôֱ������(������νʹ�ã����Ƕ�ȡ���Ĵ�����Ȼ��û��Ȼ��)��
//��ע����ͬ�ı��������ܴ�����̲�ͬ������������һ�������о����̣�Ҫ�ȵ�������ѧϰ���Ͻ���Ŀǰ��������⡣