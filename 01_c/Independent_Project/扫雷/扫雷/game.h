#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EAZY_COUNT 10

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);//��ʼ������
void DisplayBoard(char arr[ROWS][COLS], int rows, int cols);//��ӡ����

void SetMine(char arr[ROWS][COLS], int row, int col, int a, int b);//��������

void FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int cow);//ɨ��
int MineCount(char mine[ROWS][COLS], int x, int y);//��������
void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y);//�Զ��ų�