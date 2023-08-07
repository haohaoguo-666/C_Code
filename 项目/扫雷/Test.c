#include "game.h"
void menu()
{
	printf("#######################\n");
	printf("########1、play########\n");
	printf("########2、exit########\n");
	printf("#######################\n");
}
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	BoardInit(show, ROWS, COLS, '*');//初始化二维数组
	BoardInit(mine, ROWS, COLS, '0');//初始化二维数组
	GenerateMine(mine, ROW, COL);//生成雷
	BoardPrint(show, ROW, COL);//打印二维数组
	CheckMine(mine, show, ROW, COL);//排查雷
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input == 1)
			game();
		else if (input == 2)
		{
			printf("游戏已退出！\n");
			break;
		}
		else
			printf("输入错误！请重新输入！\n");
	} while (1);
	return 0;
}