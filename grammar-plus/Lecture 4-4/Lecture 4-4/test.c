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
//	void (*p)() = fun;//�������β��б�ͷ���ֵ�����Ǻ���ָ���һ����
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
//	printf("####��ӭ�ع�####\n");
//	printf("###############\n");
//	printf("\n");
//
//}
//void reward()
//{
//	printf("\n");
//	printf("###############\n");
//	printf("#####��ϲ��#####\n");
//	printf("###############\n");
//	printf("####���Ƥ��####\n");
//	printf("\n");
//}
//
//void login(void(*p)(), void(*q)())
//{
//
//	char username[20] = { 0 };
//	char password[20] = { 0 };
//	printf("�������˺�:");
//	scanf("%s", username);
//	printf("����������:");
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
//	//����0��ַ���к���ָ�����ͽ����ã�����0��ַ���Ĵ���
//	system("pause");
//	return 0;
//}



