#define _CRT_SECURE_NO_WARNINGS 1
//demo
#include <stdio.h>
#include <windows.h>
///*��һ���꣬�ַ���û�д�˫���ţ�ֱ�ӱ���*/
////#define PATH1 C:\Users\whb\Desktop\���ؿƼ�\1-��ѧ�����Ŷ�\1-���ؿμ�\1.C���Կμ�\2021C�����������
//
///*�ڶ����꣬�ַ�������˫���ã��и澯���ܹ�����ͨ��������windows��·���ָ����Ҫ\\,������룬�Ĺ�֮������*/
////#define PATH1 "C:\\Users\\whb\\Desktop\\���ؿƼ�\\1-��ѧ�����Ŷ�\\1-���ؿμ�\\1.C���Կμ�\\2021C�����������"
//
///*�������꣬����˫���ţ�����\����*/
////#define PATH1 C:\\Users\\whb\\Desktop\\���ؿƼ�\\1-��ѧ�����Ŷ�\\1-���ؿμ�\\1.C���Կμ�\\2021C����\
//// �������
//
///*���ĸ��꣬��˫���ţ�����\����*/
//#define PATH1 "C:\\Users\\whb\\Desktop\\���ؿƼ�\\1-��ѧ�����Ŷ�\\1-���ؿμ�\\1.C��\
//�Կμ�\\2021C�����������"
//int main()
//{
//	const char* path = PATH1;
//	printf("%s\n", path);
//	system("pause");
//	return 0;
//}

//#define PI 3.1415
//
//int main()
//{
//	double d = PI;
//	double d1 = PI;
//	double d2 = PI;
//	printf("%d\n", d);
//	printf("%d\n", d1);
//}

//#define SUM(x) (x)+(x)
//int main()
//{
//	printf("%d\n", SUM(10));
//	printf("SUM(10)\n");
//	return 0;
//}

//#define INIT_VALUE(a,b)\
//a = 0;\
//b = 0;
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	int a = 100;
//	int b = 200;
//	printf("before: %d, %d\n", a, b);
//	if (flag)
//		INIT_VALUE(a, b);
//	else
//		printf("error!\n");
//	printf("after: %d, %d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	int a = 100;
//	int b = 200;
//	printf("before: %d, %d\n", a, b);
//	if (flag)
//		a = 0; b = 0;; //if����û�д�{},��ôif����ֻ�ܸ�һ�����
//	else //elseƥ��ifʱ��ֱ�ӱ�����
//		printf("error!\n");
//	printf("after: %d, %d\n", a, b);
//	return 0;
//} 
//
//#define INIT_VALUE(a,b) \
//	do{\
//		a = 0;\
//		b = 0;\
//	}while(0)

//#include <stdio.h>
//#define INC(a) ((a)++) //���岻�ܴ��ո�
//int main()
//{
//	int i = 0;
//	INC (i); //ʹ�ÿ��Դ��ո񣬵������ز��Ƽ�(��Ҫ�����Ե��Լ���һ��Ŷ)
//	printf("%d\n", i);
//}

//#include <stdio.h>
//#define M 10
//int main()
//{
//#define N 100
//		printf("%d, %d\n", M, N);
//	return 0;
//}

//#define M 10
//int main()
//{
//	printf("%d, %d\n", M, N);
//#define N 100
//	printf("%d, %d\n", M, N);
//	return 0;
//}
//
//int main()
//{
//	printf("%d, %d\n", 10, N); //NΪ��û�б��滻����
//	printf("%d, %d\n", 10, 100);
//	return 0;
//}

//#include <stdio.h>
//#define M 10
//int main()
//{
//#define N 100
//		printf("%d, %d\n", M, N);
//	printf("%d, %d\n", M, N);
//	printf("%d, %d\n", M, N);
//#undef M //ȡ��M
//#undef N //ȡ��N
//	printf("%d, %d\n", M, N);
//	printf("%d, %d\n", M, N);
//	printf("%d, %d\n", M, N);
//	return 0;
//}

//int main()
//{
//	printf("%d, %d\n", 10, 100);
//	printf("%d, %d\n", 10, 100);
//	printf("%d, %d\n", 10, 100);
//	//�Ӹ�λ�ÿ�ʼ��M��N,���ڱ�ʶ��
//	printf("%d, %d\n", M, N);
//	printf("%d, %d\n", M, N);
//	printf("%d, %d\n", M, N);
//	return 0;
//}

//#define M 10
//
//#undef M
//int main()
//{
//	
//	show();
//	return 0;
//}
//void show()
//{
//	printf("%d\n", M);
//}

