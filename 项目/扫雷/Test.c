#include "game.h"
void menu()
{
	printf("#######################\n");
	printf("########1��play########\n");
	printf("########2��exit########\n");
	printf("#######################\n");
}
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	BoardInit(show, ROWS, COLS, '*');//��ʼ����ά����
	BoardInit(mine, ROWS, COLS, '0');//��ʼ����ά����
	GenerateMine(mine, ROW, COL);//������
	BoardPrint(show, ROW, COL);//��ӡ��ά����
	CheckMine(mine, show, ROW, COL);//�Ų���
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input == 1)
			game();
		else if (input == 2)
		{
			printf("��Ϸ���˳���\n");
			break;
		}
		else
			printf("����������������룡\n");
	} while (1);
	return 0;
}