#include "game.h"

void Board(char arr[ROW][COL], int row, int col)//初始化二维数组
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void Print(char arr[ROW][COL], int row, int col)//打印棋盘
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerRound(char arr[ROW][COL], int row, int col)//玩家走
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标（空格隔开）：");
		scanf("%d%d", &x, &y);
		if ((x > row || x <= 0) || (y > col || y <= 0) || arr[x - 1][y - 1] != ' ')
		{
			printf("坐标非法，请重新输入！\n");
		}
		else
			break;
	}
	arr[x - 1][y - 1] = '*';
}

int Victory(char arr[ROW][COL], int row, int col)//判断输赢
{
	for (int i = 0; i < row; i++)//判断行
	{
		int j = 0;
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) && arr[i][j] == '*')
		{
			printf("玩家获胜！\n");
			return 1;
		}
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) && arr[i][j] == '#')
		{
			printf("电脑获胜！\n");
			return 2;
		}
	}
	for (int j = 0; j < col; j++)//判断列
	{
		int i = 0;
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) && arr[i][j] == '*')
		{
			printf("玩家获胜！\n");
			return 1;
		}
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) && arr[i][j] == '#')
		{
			printf("电脑获胜！\n");
			return 2;
		}
	}
	//判断斜列
	if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] == '*') || arr[0][2] == arr[1][1] && arr[0][2] == arr[3][0] && arr[0][2] == '*')
	{
		printf("玩家获胜！\n");
		return 1;
	}
	if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] == '#') || arr[0][2] == arr[1][1] && arr[0][2] == arr[3][0] && arr[0][2] == '#')
	{
		printf("电脑获胜！\n");
		return 2;
	}
	return 0;
}

int Tie(char arr[ROW][COL], int row, int col)//判断是否和局
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}

void ComputerRound(char arr[ROW][COL], int row, int col)//电脑走
{
	Sleep(1500);
	printf("电脑走：\n");
	Sleep(1200);
	while (1)
	{
		if (arr[1][1] == ' ')
		{
			arr[1][1] = '#';
			break;
		}
		else
		{
			int x = rand() % row;
			int y = rand() % col;
			if (arr[x][y] == ' ')
			{
				arr[x][y] = '#';
				break;
			}
		}
	}
}