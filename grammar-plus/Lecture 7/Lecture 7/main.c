#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
//char* show()
//{
//	char str[] = "hello bit";
//	return str;
//} 
//int main()
//{
//	char* s = show();
//	printf("%s\n", s);
//	system("pause");
//	return 0;
//}

//int GetData()
//{
//	int x = 0x11223344;
//	printf("run get data!\n");
//	return x;
//}
//
//int main()
//{
//	int y = GetData();
//	printf("ret:%x\n", y);
//
//	return 0;
//}
int main()
{
	const int i = 10;
	int* p = (int*)&i;
	printf("before: %d\n", i);
	*p = 20;
	printf("after: %d\n", i);
	system("pause");
	return 0;
}

int main()
{
	char* p = "hello bit\n";
	*p = 'H';
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

void show(const int* p)
{
	printf("%p\n", &p);
}

int main()
{
	int a = 10;
	int* p = &a;

	printf("%p\n", &p);
	show(p);
}

//对比测试
#include <stdio.h>
#include <windows.h>
const int* test()
{
	static int g_var = 100;
	return &g_var;
}
int main()
{
	int* p = test(); //有告警
	//const int *p = test(); //需要用const int*类型接受
	*p = 200; //这样，在语法上，也就限制了，不能直接修改函数的返回值
	printf("%d\n", *p);
	system("pause");
	return 0;
}
//一般内置类型返回，加const无意义。