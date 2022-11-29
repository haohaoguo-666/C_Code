#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("====================\n");
	printf("=======1.扫雷=======\n");
	printf("=======0.退出=======\n");
	printf("====================\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	
	//初始化数组的内容，mine数组没有雷，都是‘0’，show数组没排雷，都是‘*’
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	

	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	

	//排查雷
	FindMine(mine, show, ROW, COL);



}
int main()
{	
	//设置随机数的生成
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (input);
	return 0;
}