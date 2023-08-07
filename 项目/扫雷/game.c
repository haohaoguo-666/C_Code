#include "game.h"
void BoardInit(char arr[ROWS][COLS], int rows, int cols, char a)//��ʼ����ά����
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = a;
		}
	}
}

void BoardPrint(char arr[ROWS][COLS], int row, int col)//��ӡ��ά����
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

void GenerateMine(char mine[ROWS][COLS], int row, int col)//������
{
	int i = NUMS;
	while (i)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//�ַ�1����
			i--;
		}
	}
}

void Flag(char show[ROWS][COLS], int x, int y)//����
{
	if (show[x][y] == '*')
	{
		show[x][y] = 'F';
	}
	else
		printf("�Ƿ����죡\n");
}
void FlagCancel(char show[ROWS][COLS], int x, int y)//ȡ������
{
	if (show[x][y] == 'F')
	{
		show[x][y] = '*';
	}
	else
		printf("�Ƿ�ȡ�����죡\n");
}

void MineHint(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//��ʾ�ܱ߼�����
{
	int sum = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y + 1]
		+ mine[x + 1][y] + mine[x + 1][y - 1] - 8 * '0';
	show[x][y] = '0' + sum;
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//չ��
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

int Victory(char show[ROWS][COLS], int row, int col)//�ж�ʤ��
{
	int count = 0;//ͳ��ʣ��*������
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
		printf("��ϲ��ʤ��\n");
		return 1;
	}
	else
		return 0;
}

void GameMenu()
{
	printf("#######1������########\n");
	printf("#######2������########\n");
	printf("#######3��ȡ������####\n");
	printf("��ѡ��");
}
void CheckMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//�Ų���
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
		printf("���������꣺");
		scanf("%d%d", &x, &y);
		if (input == 1)
		{
			if (x > 0 && x <= row && y > 0 && y <= col)
			{
				if (show[x][y] == '*' && mine[x][y] != '1')
				{
					Expand(mine, show, x, y);//չ��
					BoardPrint(show, row, col);//��ӡ��ά����
					if (Victory(show, row, col) == 1)//�ж�ʤ��
					{
						break;
					}
				}
				else if (mine[x][y] == '1')
				{
					printf("����ը���ˣ�\n");
					break;
				}
				else
					printf("����Ƿ������������룡\n");
			}
			else
				printf("����Ƿ������������룡\n");
		}
		else if (input == 2)
		{
			Flag(show, x, y);
			BoardPrint(show, row, col);//��ӡ��ά����
		}
		else if (input == 3)
		{
			FlagCancel(show, x, y);
			BoardPrint(show, row, col);//��ӡ��ά����
		}
		else
			printf("�������������ѡ��\n");
	}
	BoardPrint(mine, row, col);//��ӡ��ά����
}