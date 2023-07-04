#define _CRT_SECURE_NO_WARNINGS 1
//demo
#include <stdio.h>
#include <windows.h>
///*第一个宏，字符串没有带双引号，直接报错*/
////#define PATH1 C:\Users\whb\Desktop\比特科技\1-教学服务团队\1-比特课件\1.C语言课件\2021C语言深度剖析
//
///*第二个宏，字符串带上双引用，有告警，能够编译通过。不过windows中路径分割符需要\\,输出乱码，改过之后，正常*/
////#define PATH1 "C:\\Users\\whb\\Desktop\\比特科技\\1-教学服务团队\\1-比特课件\\1.C语言课件\\2021C语言深度剖析"
//
///*第三个宏，不带双引号，进行\续行*/
////#define PATH1 C:\\Users\\whb\\Desktop\\比特科技\\1-教学服务团队\\1-比特课件\\1.C语言课件\\2021C语言\
//// 深度剖析
//
///*第四个宏，带双引号，进行\续行*/
//#define PATH1 "C:\\Users\\whb\\Desktop\\比特科技\\1-教学服务团队\\1-比特课件\\1.C语\
//言课件\\2021C语言深度剖析"
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
//		a = 0; b = 0;; //if倘若没有带{},那么if后面只能跟一条语句
//	else //else匹配if时，直接报错了
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
//#define INC(a) ((a)++) //定义不能带空格
//int main()
//{
//	int i = 0;
//	INC (i); //使用可以带空格，但是严重不推荐(不要处处显得自己不一样哦)
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
//	printf("%d, %d\n", 10, N); //N为何没有被替换掉？
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
//#undef M //取消M
//#undef N //取消N
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
//	//从该位置开始，M，N,不在被识别
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

