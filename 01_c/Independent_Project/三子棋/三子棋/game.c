#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			board[i][j] = ' ';//�����������ȫ�����ɿո�
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (; i < row; i++)//��ӡ�ָ���
	{
		int j = 0;
		for (; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int k = 0;
			for (; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	printf("����ж�������������=>");
	
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')//����Ƿ�ռ��
			{
				printf("�����걻ռ�ã�����������=>");
			}
			else 
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������=>");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������=>\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//���0~2
		y = rand() % col;
		if (board[x][y] == ' ')//����Ƿ�ռ��
		{
			board[x][y] = '#';
			break;
		}
	}
	
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (; i < row; i++)//�ж���
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			if (board[i][1] == '#')
			{
				return '#';
			}
			else
			{
				return '*';
			}
		}
	}

	int j = 0;
	for (; j < col; j++)//�ж���
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			if (board[1][j] == '#')
			{
				return '#';
			}
			else
			{
				return '*';
			}
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�ж���б
	{
		if (board[1][1] == '#')
		{
			return '#';
		}
		else
		{
			return '*';
		}
	}
	
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//�ж���б
	{
		if (board[2][2] == '#')
		{
			return '#';
		}
		else
		{
			return '*';
		}
	}

	int x = 0;
	for (; x < row; x++)//�жϷ����
	{
		int y = 0;
		for (; y < col; y++)
		{
			if (board[x][y] == ' ')
			{
				return 'C';
			}
		}
	}

	return 'Q';//ƽ��
}