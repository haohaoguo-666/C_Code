
#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏实现
//
//
//电脑随机生成一个1~100之间的数字
//猜数字
//如果你猜小了，告知猜小了
//如果你猜大了，告知猜大了
//如果你猜对了，告知猜对了

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("**********  1. play  ************\n");
//	printf("**********  0. exit  ************\n");
//	printf("*********************************\n");
//}
//
////rand函数可以生成随机数
////返回一个0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1. 生成随机数
//	int ret = rand()%100+1;//0~99-->1~100
//	//printf("%d\n", ret);
//	
//	//2. 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
// 
//int main()
//{
//	int input = 0;
//	//设置随机数的生成器
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
