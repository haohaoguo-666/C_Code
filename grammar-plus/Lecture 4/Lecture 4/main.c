//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <Windows.h>

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	printf("%u\n", i + j);
//
//	//������������ʱ�������Ƕ�����������������
//	//���;��������ȥ�����ڴ��еĶ���������
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	} 
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int flag = 1;
//	// 1.��ִ�У����еı��ʽor�������õ���ٽ��
//	// 2.�����жϹ���
//	// 3.���з�֧����
//	if (flag == 1)
//	{
//		printf("hello world");
//	}
//}

//���Դ���1
//#include <stdio.h>
//#include <stdbool.h> //û�����ͷ�ļ��ᱨ��ʹ��������һ��Ҫ����
//#include <windows.h>
//int main()
//{
//	bool ret = false;
//	ret = true;
//	printf("%d\n", sizeof(ret)); //vs2013 �� Linux�ж���1
//	system("pause");
//	return 0;
//}

////�鿴Դ��
///* stdbool.h standard header */
////stdbool.h
//#ifndef _STDBOOL
//#define _STDBOOL
//#define __bool_true_false_are_defined 1
//#ifndef __cplusplus
//���ؾ�ҵ��but����
//#define bool _Bool //c99����һ���ؼ���Ŷ����������ʹ��bool
//#define false 0 //��
//#define true 1 //��
//#endif /* __cplusplus */
//#endif /* _STDBOOL */
///*
//* Copyright (c) 1992-2010 by P.J. Plauger. ALL RIGHTS RESERVED.
//* Consult your license regarding permissions and restrictions.
//V5.30:0009 */

//���Դ���2
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	//��vs�У����ѡ��BOOL�������Ҽ������Կ���ת�����壬���ܿ���BOOL��ʲô
//	BOOL ret = FALSE;
//	ret = TRUE;
//	printf("%d\n", sizeof(ret)); //��������4����Ϊ��Դ�����У�����ô����ģ�typedef int BOOL;
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <windows.h>
//int main()
//{
//	int pass = 0; // 0��ʾ��,C90������ϰ����int��ʾbool
//				  // bool pass = false; //C99
//	if (pass == 0) { //�����Ͽ��У�����ʱ��pass��Ӧ�ñ�����bool�����ģ�==�������������Ƚϣ����Ƽ�
//		//TODO
//	} 
//	
//	if(pass == false) { //���Ƽ���������C99��Ҳ����
//		//TODO
//	} 
//	
//	if(pass) { //�Ƽ�
//		//TODO
//	} 
//		//�����Ͽ��У�����ʱ��pass��Ӧ�ñ�����bool�����ģ� == �������������Ƚϣ����Ƽ�
//		//���⣬��0Ϊ�棬���Ƿ�0�ж��������Ҳ��һ������ȫ��ȷ��
//	if (pass != 1) {
//		//TODO
//	} 
//		
//	if(pass != true) { //���Ƽ���������C99��Ҳ����
//		//TODO
//	}
//		
//	if(!pass) { //�Ƽ�
//		//TODO
//	} 
//		
//	system("pause");
//	return 0;
//}

////���������ڴ��д洢��������������ģ��������洢�ģ���ʮ����ת����Ϊ�����ƣ����п����о�����ʧ�ġ�
////ע���������ʧ������һζ�ļ����ˣ����п������ࡣ����������洢��ʱ���ڼ��㲻����ʱ�򣬻ᡰ�������롱
////demo1
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	double x = 3.6;
//	printf("%.50f\n", x);
//	system("pause");
//	return 0;
//}

//demo2
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if ((x - 0.9) == y) {
//		printf("you can see me!\n");
//	} 
//	else{
//		printf("oops\n");
//	} 
//	system("pause");
//	return 0;
//} 
////���ۣ���Ϊ������ʧ���⣬���������������Բ���ʹ�� == ������ȱȽ�

//���������
//#include <stdio.h>
//#include <math.h> //�������math.h,Ҫ��Ȼ�޷�ʹ��fabs
//#include <float.h> //���������Ҫ��Ȼ�޷�ʹ��ϵͳ����
//#include <windows.h>
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if (fabs((x - 0.9) - y) < DBL_EPSILON) { //ԭʼ�����Ǹ����������Ǿ���DBL_EPSILON
//		printf("you can see me!\n");
//	} 
//	else{
//		printf("oops\n");
//	} 
//	system("pause");
//	return 0;
//} 
////�������ȶ���
//#define DBL_EPSILON 2.2204460492503131e-016 /* smallest such that 1.0+DBL_EPSILON != 1.0
//*/
//#define FLT_EPSILON 1.192092896e-07F /* smallest such that 1.0+FLT_EPSILON != 1.0
//*/
//XXX_EPSILON����С���, �ǣ�XXX_EPSILON + n������n����С��������
//EPSILON������ʷ��������'��'����˼����ѧ�ϣ����Ǽ�С������

//���մ���
//#include <stdio.h>
//#include <math.h>
//#include <float.h>
//#include <windows.h>
//int main()
//{
//	double x = 0.00000000000000000000001;
//	//if (fabs(x-0.0) < DBL_EPSILON){ //д��1
//	//if (fabs(x) < DBL_EPSILON){ //д��2
//	if (x > -DBL_EPSILON && x < DBL_EPSILON) { //����д��
//		printf("you can see me!\n");
//	} 
//	else{
//		printf("oops\n");
//	} 
//	system("pause");
//	return 0;
//} 
//	//x > -DBL_EPSILON && x < DBL_EPSILON: Ϊ�β��� >= && <= �أ�
//	//���˿�����XXX_EPSILON����С���,�ǣ�XXX_EPSILON+n������n����С��������
//	//XXX_EPSILON+n������n����С������: �кܶ�����+n�����Բ�����n������XXX_EPSILON����С�ģ�but��XXX_EPSILON���������𲻵ȵ�һԱ��
//	//���仰˵��fabs(x) <= DBL_EPSILON(ȷ��x�Ƿ���0���߼�)�����=����˵��x�����Ѿ��ܹ�������������+-�����ݱ���ı仯�ˣ����������0�ĸ���

//int main()
//{
//	//���Ͳ�ͬ��������һ���ģ�0
//	printf("%d\n", 0);
//	printf("%d\n", NULL);
//	printf("%d\n", '\0');
//}

////���Դ��뻻һ��
//int main()
//{
//	int x = 0;
//	int y = 1;
//	if (10 == x)
//		if (11 == y)
//			printf("hello bit\n");
//		else
//			printf("hello world!\n");
//	system("pause");
//	return 0;
//}

////�Ƽ�д��
//int main()
//{
//	int x = 0;
//	int y = 1;
//	if (10 == x)
//	{
//		if (11 == y)
//		{
//			printf("hello bit\n");
//		}
//	} 
//	else
//	{
//		printf("hello world!\n");
//	} 
//	system("pause");
//	return 0;
//}

int main()
{
	int flag = 0;
	if (flag);
		printf("hello world");
}