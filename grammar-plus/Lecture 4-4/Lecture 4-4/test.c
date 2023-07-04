#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#define USERNAME "yyf"
#define PASSWORD "123"

void fun()
{
	printf("hello bit!\n");
}

//int main()
//{
//	printf("fun : %p\n", fun);
//	printf("&fun : %p\n", &fun);
//	fun();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	void (*p)() = fun;//函数的形参列表和返回值类型是函数指针的一部分
//
//	(*p)();
//	p();
//
//	system("pause");
//	return 0;
//}


//void welcome()
//{
//	printf("\n");
//	printf("###############\n");
//	printf("####欢迎回归####\n");
//	printf("###############\n");
//	printf("\n");
//
//}
//void reward()
//{
//	printf("\n");
//	printf("###############\n");
//	printf("#####恭喜你#####\n");
//	printf("###############\n");
//	printf("####获得皮肤####\n");
//	printf("\n");
//}
//
//void login(void(*p)(), void(*q)())
//{
//
//	char username[20] = { 0 };
//	char password[20] = { 0 };
//	printf("请输入账号:");
//	scanf("%s", username);
//	printf("请输入密码:");
//	scanf("%s", password);
//	if (strcmp(username, USERNAME) == 0 && strcmp(password, PASSWORD) == 0)
//	{
//		(*p)();
//		(*q)();
//	}
//
//}
//int main()
//{
//	login(welcome, reward);
//	system("pause");
//	return 0;
//}


//void fun()
//{
//	printf("call function!\n");
//}
//int main()
//{
//	char** p = 0;
//	char** q = 0;
//	//(*(void(*)())0)();
//	(*(char** (*)(char**, char**))0)(p, q);
//	//即对0地址进行函数指针类型解引用，访问0地址处的代码
//	system("pause");
//	return 0;
//}



