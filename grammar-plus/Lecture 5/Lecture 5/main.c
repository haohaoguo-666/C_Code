#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
//int main()
//{
//	int day = 1;
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("bug!\n");
//		break;
//	} 
//	system("pause");
//	return 0;
//}

int main()
{
	const int a = 10;
	switch (a) {
	case a: //不行
		printf("hello\n");
		break;
	default:
		break;
	} 
	system("pause");
	return 0;
}