#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


//ͳһ�����к��У������޸�
#define ROW  3//������,���ﶨ�峣�����ܼ� = �� ��
#define COL  3//������


//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//����ж�
void PlayerMove(char board[ROW][COL], int row, int col);
//�����ж�
//��û�����λ�������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);
//����#�������ʤ��
//����*�����ʤ��
//����C����Ϸ����
//����Q��ƽ��