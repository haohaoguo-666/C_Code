#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9//����չʾ�Ķ�ά�����еĳ���
#define COL 9//����չʾ�Ķ�ά�����еĳ���
#define ROWS ROW+2//�����Դ�Ķ�ά���飬��ֹ�ж�ʱԽ��
#define COLS COL+2//�����Դ�Ķ�ά���飬��ֹ�ж�ʱԽ��
#define NUMS 10//�׵ĸ���
void BoardInit(char arr[ROWS][COLS], int rows, int cols, char a);//��ʼ����ά����
void BoardPrint(char arr[ROWS][COLS], int row, int col);//��ӡ��ά����
void GenerateMine(char mine[ROWS][COLS], int row, int col);//������
void CheckMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//�Ų���
void Flag(char show[ROWS][COLS], int x, int y);//����
void FlagCancel(char show[ROWS][COLS], int x, int y);//ȡ������
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//չ��
int Victory(char show[ROWS][COLS], int row, int col);//�ж�ʤ��