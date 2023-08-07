#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define ROW 3
#define COL 3
void Board(char arr[ROW][COL], int row, int col);//初始化二维数组
void Print(char arr[ROW][COL], int row, int col);//打印棋盘
void PlayerRound(char arr[ROW][COL], int row, int col);//玩家走
int Victory(char arr[ROW][COL], int row, int col);//判断输赢
int Tie(char arr[ROW][COL], int row, int col);//判断是否和局
void ComputerRound(char arr[ROW][COL], int row, int col);//电脑走