#include "game.h"
void menu()
{
	printf("########################\n");
	printf("#####1.play  0.exit#####\n");
	printf("########################\n");
}
void game()
{
	char arr[ROW][COL];
	Board(arr, ROW, COL);//初始化二维数组
	int First = rand() % 3 + 1;
	Print(arr, ROW, COL);//打印棋盘
	int flag = 1;
	while (flag)
	{
		if (First == 3)
			printf("运气不错！本回合电脑先走！\n");
		switch (First)
		{
		case 1:
		case 2:

			PlayerRound(arr, ROW, COL);//玩家走
			Print(arr, ROW, COL);//打印棋盘
			if (Victory(arr, ROW, COL) == 1)//判断输赢
			{
				flag = 0;
				break;
			}
			if (Tie(arr, ROW, COL) == 0)//判断是否和局
			{
				printf("平局！\n");
				flag = 0;
				break;
			}
		case 3:
			ComputerRound(arr, ROW, COL);//电脑走
			Print(arr, ROW, COL);//打印棋盘
			if (Victory(arr, ROW, COL) == 2)//判断输赢
			{
				flag = 0;
				break;
			}
			if (Tie(arr, ROW, COL) == 0)//判断是否和局
			{
				printf("平局！");
				flag = 0;
				break;
			}
			First = 1;
		}

	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}