#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////while
//������ʼ��
//while (�����ж�) {
//	//ҵ�����
//	��������
//}
//
//
////for
//for (������ʼ��; �����ж�; ��������) {
//	//ҵ�����
//}
//
//
////do while
//������ʼ��
//do {
//	��������
//} while (�����ж�);

//while (1) {
//
//} 
//
//for (;;) {
//
//} 
//
//do{
//
//}while (1);

//int main()
//{
//	char a = 0xFF;
//	if (a == -1)
//		printf("signed");
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		int c = getchar();
//		if ('#' == c)
//		{
//			// break; // ����ѭ��
//			continue; // �������Σ�һ�Σ�ѭ��
//		}
//		putchar(c);
//	}
//	printf("\nbreak out!\n");
//	return 0;
//}


//int main()
//{
//	void a;
//	system("pause");
//	return 0;
//} 
//��vs2013��Centos 7��gcc 4.8.5�¶����ܱ���ͨ��


//test() // �����˷���ֵ�� ʹ��Ĭ�ϣ�
//{
//	printf("hello test\n");
//	return 1;
//}
//int main()
//{
//	int a = test();
//}

//��vs2013��
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	void* p = NULL;
//	p++; //����
//	p += 1; //����
//	system("pause");
//	return 0;
//} 
////��gcc4.8.5��
//#include <stdio.h>
//int main()
//{
//	void* p = NULL; //NULL����ֵ���棬����0
//	p++; //��ͨ��
//	printf("%d\n", p); //���1
//	p += 1; //��ͨ��
//	printf("%d\n", p); //���2
//	return 0;
//}