#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define ROW 3
#define COL 3
void Board(char arr[ROW][COL], int row, int col);//��ʼ����ά����
void Print(char arr[ROW][COL], int row, int col);//��ӡ����
void PlayerRound(char arr[ROW][COL], int row, int col);//�����
int Victory(char arr[ROW][COL], int row, int col);//�ж���Ӯ
int Tie(char arr[ROW][COL], int row, int col);//�ж��Ƿ�;�
void ComputerRound(char arr[ROW][COL], int row, int col);//������