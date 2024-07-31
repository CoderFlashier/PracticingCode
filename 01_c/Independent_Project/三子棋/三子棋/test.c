#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void start()
{
	system("cls");
	Sleep(500);
	printf("**************************\n");
	Sleep(500);
	printf("****      1.start    *****\n");
	Sleep(500);
	printf("****      0.exit     *****\n");
	Sleep(500);
	printf("**************************\n");
	Sleep(500);
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, 3, COL);
		DisplayBoard(board, ROW, COL);
		char ret = IsWin(board, ROW, COL);
		if (ret == '#')
		{
			printf("���Ի�ʤ");
			break;
		}
		if (ret == '*')
		{
			printf("��һ�ʤ");
			break;
		}
		if (ret == 'Q')
		{
			printf("ƽ��");
			break;
		}
		
		Sleep(500);
		
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret == '#')
		{
			printf("���Ի�ʤ\n");
			break;
		}
		if (ret == '*')
		{
			printf("��һ�ʤ\n");
			break;
		}
		if (ret == 'Q')
		{
			printf("ƽ��\n");
			break;
		}
	}
	Sleep(3000);
}

int main()
{
	srand((unsigned int )time(NULL));//����ʱ�������������������
	

	int chose = 0;
	do 
	{
		start();//��ʼ�˵�
		scanf("%d", &chose);
		switch (chose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit");
			Sleep(3000);
			break;
		default:
			printf("error");
			break;
		}
	} while (chose);
		
	return 0;
}