#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
// �ı�����->��ִ�г��򣨶������ļ���->˫�������ó���
// ���ɿ�ִ�г�������
// 1.��win�У�˫���ı������г��򣬽�������ص��ڴ���
// 2.�κγ����ڱ�����֮ǰ�����뱻���ص��ڴ浱��
//		a.����û�б����ص�ʱ����Ӳ����
//		b.ΪʲôҪ�������ڴ棺��ȡ�ٶȿ죡����ŵ����Ӳ����ϵ�ṹ��
//int main()
//{
//	printf("hello world!\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int x = 10;
//	char c = 'a'; // ��ʼ��:�����ڴ�ռ�
//	double d = 3.14;
//	c = 'd';// ��ֵ���ڴ�ռ��Ѿ�������
//}

//int g_val = 100;
//int main()
//{
//	g_val = 200;
//	printf("%d", g_val);//�ͽ�ԭ��
//	return 0;
//}

//demo
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//		printf("i=%d\n", i);
//		if (1)
//		{
//			auto int j = 0; //�Զ�����
//			printf("before: j=%d\n", j);
//			j += 1;
//			printf("after : j=%d\n", j);
//		}
//	}
//	system("pause");
//	return 0;
//}


//demo
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	register int a = 0;
//	printf("&a = %p\n", &a);
//	//�������������� 1 error C2103: �Ĵ��������ϵġ�&��
//	//ע�⣬���ﲻ�����еı�����������Ŀǰ���ǵ�vs2013�Ǳ���ġ�
//	//����ͬѧ�Ǹտ�ʼѧ������������Ӹ��������Ǻ���������������һ����������
//	system("pause");
//	return 0;
//}