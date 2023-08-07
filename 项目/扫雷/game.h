#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9//用于展示的二维数组行的长度
#define COL 9//用于展示的二维数组列的长度
#define ROWS ROW+2//创建稍大的二维数组，防止判断时越界
#define COLS COL+2//创建稍大的二维数组，防止判断时越界
#define NUMS 10//雷的个数
void BoardInit(char arr[ROWS][COLS], int rows, int cols, char a);//初始化二维数组
void BoardPrint(char arr[ROWS][COLS], int row, int col);//打印二维数组
void GenerateMine(char mine[ROWS][COLS], int row, int col);//生成雷
void CheckMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//排查雷
void Flag(char show[ROWS][COLS], int x, int y);//插旗
void FlagCancel(char show[ROWS][COLS], int x, int y);//取消插旗
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//展开
int Victory(char show[ROWS][COLS], int row, int col);//判断胜利