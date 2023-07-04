#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
//#define C 1

//int main()
//{
//#ifdef C
//	printf("hello C\n");
//#else
//	printf("hello other\n");
//#endif
//}

//int main()
//{
//#if C
//	printf("hello C\n");
//#else
//	printf("hello other\n");
//#endif
//}

//#define VERSION 1
//
//int main()
//{
//#if VERSION == 1
//	printf("hello 1\n");
//#elif VERSION == 2
//	printf("hello 2\n");
//#elif VERSION == 3
//	printf("hello 3");
//#endif
//}

//int main()
//{
//#if defined(VERSION)
//	printf("hello version\n");
//#else
//	printf("hello other\n");
//#endif
//}

//#define C
//#define CPP
//
//int main()
//{
//#if (defined(C) && defined(CPP))
//	printf("hello C && CPP\n");
//#else
//	printf("hello other\n");
//#endif
//}

//#define C
//#define CPP
//
//int main()
//{
//#if defined(C)
//	#if defined(CPP)
//		printf("hello CPP\n");
//	#endif
//	printf("hello C\n");
//#else
//	printf("hello other\n");
//#endif
//}

/*#include "test.h"*/ //在当前目录找，再在系统默认路径下找

//#define C
//#define CPP
//
//int main()
//{
//#if defined(C)
//	printf("hello C\n");
//#elif defined(CPP)
//	printf("hello CPP\n");
//#else
//	printf("hello other\n");
//#endif
//}


//# 1 "test.c"
//# 1 "<built-in>"
//# 1 "<command-line>"
//# 1 "/ usr/include/stdc-predef.h" 1 3 4
//# 1 "<command-line>" 2
//# 1 "test.c"
//# 1 "test.h" 1
//void show(); //内容被拷贝第一次
//# 2 "test.c" 2
//# 1 "test.h" 1
//void show(); //内容被拷贝第二次
//# 3 "test.c" 2
//int main()
//{
//	return 0;
//}


//int main()
//{
//
//#ifndef __cplusplus
//#error 老铁，你用的不是C++的编译器哦
//#endif
//		system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%s, %d\n", __FILE__, __LINE__); //C预定义符号，代表当前文件名和代码行号
//#line 60 "hehe.h" //定制化完成
//	printf("%s, %d\n", __FILE__, __LINE__);
//	system("pause");
//	return 0;
//}

//#define M 10
//int main()
//{
//#ifdef M
//#pragma message("M宏已经被定义了")
//#endif
//		system("pause");
//	return 0;
//}

//#pragma warning(disable:4996) //禁止4996报错，
//int main()
//{
//	int x = 10;
//	scanf("%d", &x);
//	printf("hello : %d\n", x);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	printf("hello bit""hello world\n");
//
//	const char* str = "hello 1""hello 2\n";
//	printf(str);
//
//}

//#define STR(s) #s
//
//int main()
//{
//	int a = 12345;
//	printf("%s", STR(a));
//}


//#define XNAME(n) student##n
//
//int main()
//{
//	XNAME(1);
//	XNAME(2);
//	XNAME(3);
//	XNAME(4);
//	XNAME(5);
//}

#define CONT(base, n) base##e##n

int main()
{
	printf("%lf\n", CONT(3.14, 2));
	return 0;
}