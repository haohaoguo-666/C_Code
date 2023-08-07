#include "game.h"
void BoardInit(char arr[ROWS][COLS], int rows, int cols, char a)//初始化二维数组
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = a;
		}
	}
}

void BoardPrint(char arr[ROWS][COLS], int row, int col)//打印二维数组
{
	for (int j = 0; j <= col; j++)
		printf("%d ", j);
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

void GenerateMine(char mine[ROWS][COLS], int row, int col)//生成雷
{
	int i = NUMS;
	while (i)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//字符1是雷
			i--;
		}
	}
}

void Flag(char show[ROWS][COLS], int x, int y)//插旗
{
	if (show[x][y] == '*')
	{
		show[x][y] = 'F';
	}
	else
		printf("非法插旗！\n");
}
void FlagCancel(char show[ROWS][COLS], int x, int y)//取消插旗
{
	if (show[x][y] == 'F')
	{
		show[x][y] = '*';
	}
	else
		printf("非法取消插旗！\n");
}

void MineHint(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//显示周边几个雷
{
	int sum = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y + 1]
		+ mine[x + 1][y] + mine[x + 1][y - 1] - 8 * '0';
	show[x][y] = '0' + sum;
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//展开
{
	if (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y + 1]
		+ mine[x + 1][y] + mine[x + 1][y - 1] - 8 * '0' == 0)
	{
		show[x][y] = ' ';
		if (show[x - 1][y - 1] == '*')
			Expand(mine, show, x - 1, y - 1);
		if (show[x - 1][y] == '*')
			Expand(mine, show, x - 1, y);
		if (show[x - 1][y + 1] == '*')
			Expand(mine, show, x - 1, y + 1);
		if (show[x][y - 1] == '*')
			Expand(mine, show, x, y - 1);
		if (show[x][y + 1] == '*')
			Expand(mine, show, x, y + 1);
		if (show[x + 1][y + 1] == '*')
			Expand(mine, show, x + 1, y + 1);
		if (show[x + 1][y] == '*')
			Expand(mine, show, x + 1, y);
		if (show[x + 1][y - 1] == '*')
			Expand(mine, show, x + 1, y + 1);
	}
	else
		MineHint(mine, show, x, y);
}

int Victory(char show[ROWS][COLS], int row, int col)//判断胜利
{
	int count = 0;//统计剩余*的数量
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' || show[i][j] == 'F')
				count++;
		}
	}
	if (count == NUMS)
	{
		printf("恭喜获胜！\n");
		return 1;
	}
	else
		return 0;
}

void GameMenu()
{
	printf("#######1、排雷########\n");
	printf("#######2、插旗########\n");
	printf("#######3、取消插旗####\n");
	printf("请选择：");
}
void CheckMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//排查雷
{
	int x = 0;
	int y = 0;
	while (1)
	{
		GameMenu();
		int input = 0;
		scanf("%d", &input);
		if (input != 1 && input != 2 && input != 3)
		{
			continue;
		}
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (input == 1)
		{
			if (x > 0 && x <= row && y > 0 && y <= col)
			{
				if (show[x][y] == '*' && mine[x][y] != '1')
				{
					Expand(mine, show, x, y);//展开
					BoardPrint(show, row, col);//打印二维数组
					if (Victory(show, row, col) == 1)//判断胜利
					{
						break;
					}
				}
				else if (mine[x][y] == '1')
				{
					printf("被雷炸死了！\n");
					break;
				}
				else
					printf("坐标非法！请重新输入！\n");
			}
			else
				printf("坐标非法！请重新输入！\n");
		}
		else if (input == 2)
		{
			Flag(show, x, y);
			BoardPrint(show, row, col);//打印二维数组
		}
		else if (input == 3)
		{
			FlagCancel(show, x, y);
			BoardPrint(show, row, col);//打印二维数组
		}
		else
			printf("输入错误！请重新选择：\n");
	}
	BoardPrint(mine, row, col);//打印二维数组
}