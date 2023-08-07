#include "game.h"

void Board(char arr[ROW][COL], int row, int col)//��ʼ����ά����
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void Print(char arr[ROW][COL], int row, int col)//��ӡ����
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

void PlayerRound(char arr[ROW][COL], int row, int col)//�����
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������꣨�ո��������");
		scanf("%d%d", &x, &y);
		if ((x > row || x <= 0) || (y > col || y <= 0) || arr[x - 1][y - 1] != ' ')
		{
			printf("����Ƿ������������룡\n");
		}
		else
			break;
	}
	arr[x - 1][y - 1] = '*';
}

int Victory(char arr[ROW][COL], int row, int col)//�ж���Ӯ
{
	for (int i = 0; i < row; i++)//�ж���
	{
		int j = 0;
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) && arr[i][j] == '*')
		{
			printf("��һ�ʤ��\n");
			return 1;
		}
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) && arr[i][j] == '#')
		{
			printf("���Ի�ʤ��\n");
			return 2;
		}
	}
	for (int j = 0; j < col; j++)//�ж���
	{
		int i = 0;
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) && arr[i][j] == '*')
		{
			printf("��һ�ʤ��\n");
			return 1;
		}
		if ((arr[i][j] != ' ') && (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) && arr[i][j] == '#')
		{
			printf("���Ի�ʤ��\n");
			return 2;
		}
	}
	//�ж�б��
	if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] == '*') || arr[0][2] == arr[1][1] && arr[0][2] == arr[3][0] && arr[0][2] == '*')
	{
		printf("��һ�ʤ��\n");
		return 1;
	}
	if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] == '#') || arr[0][2] == arr[1][1] && arr[0][2] == arr[3][0] && arr[0][2] == '#')
	{
		printf("���Ի�ʤ��\n");
		return 2;
	}
	return 0;
}

int Tie(char arr[ROW][COL], int row, int col)//�ж��Ƿ�;�
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

void ComputerRound(char arr[ROW][COL], int row, int col)//������
{
	Sleep(1500);
	printf("�����ߣ�\n");
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