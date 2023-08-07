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
	Board(arr, ROW, COL);//��ʼ����ά����
	int First = rand() % 3 + 1;
	Print(arr, ROW, COL);//��ӡ����
	int flag = 1;
	while (flag)
	{
		if (First == 3)
			printf("�����������غϵ������ߣ�\n");
		switch (First)
		{
		case 1:
		case 2:

			PlayerRound(arr, ROW, COL);//�����
			Print(arr, ROW, COL);//��ӡ����
			if (Victory(arr, ROW, COL) == 1)//�ж���Ӯ
			{
				flag = 0;
				break;
			}
			if (Tie(arr, ROW, COL) == 0)//�ж��Ƿ�;�
			{
				printf("ƽ�֣�\n");
				flag = 0;
				break;
			}
		case 3:
			ComputerRound(arr, ROW, COL);//������
			Print(arr, ROW, COL);//��ӡ����
			if (Victory(arr, ROW, COL) == 2)//�ж���Ӯ
			{
				flag = 0;
				break;
			}
			if (Tie(arr, ROW, COL) == 0)//�ж��Ƿ�;�
			{
				printf("ƽ�֣�");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}