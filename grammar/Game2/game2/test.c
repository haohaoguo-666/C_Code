#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("====================\n");
	printf("=======1.ɨ��=======\n");
	printf("=======0.�˳�=======\n");
	printf("====================\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	
	//��ʼ����������ݣ�mine����û���ף����ǡ�0����show����û���ף����ǡ�*��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	

	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	

	//�Ų���
	FindMine(mine, show, ROW, COL);



}
int main()
{	
	//���������������
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);
	return 0;
}