#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---mine clearance---\n");
	
	for (j = 0; j <= col; j++)//��ӡ�еı�ţ�����۲�
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�еı��
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n"); 
	}
	
	printf("---mine clearance---\n");
}

void SetMine(char arr[ROWS][COLS], int row, int col, int a, int b)
{
	int i = 0;
	int j = 0;

	int count = EAZY_COUNT;
	while (count)
	{
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (i != a && j != b)
		{
			if (arr[i][j] != '1')
			{
				arr[i][j] = '1';
				count--;
			}
		}
	}
}

void FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int chose = 0;
	
	//��һ����������
	printf("����������=>");
	while (1)//�ж�����
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			break;
		}
		else
		{
			printf("����Ƿ�������������=>");
		}
	}
	
	SetMine(mine, ROW, COL, x, y);//�ڵ�һ�������������������ֹ������ʧ����
	show[x][y] = MineCount(mine, x, y) + '0';
	
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	AutoExc(show, mine, ROW, COL, x, y);//����һ��������Χû���׵ĵط��Զ��ų�
	DisplayBoard(show, ROW, COL);

	while (count < ROW * COL - EAZY_COUNT)
	{
		printf("��ѡ��ģʽ��1���Ų�  2����ǣ�\n");//ʵ�ֱ�ǹ���
		while (1)
		{
			scanf("%d", &chose);
			if(chose == 1)//ѡ���Ų�
			{
				printf("����������=>");
				while (1)//�ж�����
				{
					scanf("%d %d", &x, &y);
					if (x >= 1 && x <= row && y >= 1 && y <= col)
					{
						break;
					}
					else
					{
						printf("����Ƿ�������������=>");
					}
				}
				if (mine[x][y] == '1')//�ж���û�в���
				{
					printf("���ˣ�����������\n");
					DisplayBoard(mine, ROW, COL);
					goto END;
				}
				else
				{
					if (show[x][y] != '*'&& show[x][y] != 4)
					{
						printf("�������ѱ��Ų飬����������\n");
					}
					else
					{
						show[x][y] = MineCount(mine, x, y) + '0';
						DisplayBoard(show, ROW, COL);
						count = Iswin(show, ROW, COL);
					}
					break;
				}
			}
			else if (chose == 2)//ѡ����
			{
				printf("����������=>");
				scanf("%d %d", &x, &y);
				show[x][y] = 4;//���
				count = Iswin(show, ROW, COL);
				DisplayBoard(show, ROW, COL);
				break;
			}
			else
			{
				printf("ѡ�����������ѡ��=>");
			}
		}
		if (count == EAZY_COUNT)
		{
			printf("YOU WIN!\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
END:
	;
}


int MineCount(char mine[ROWS][COLS], int x, int y)//��������������Χ������
{
	int i = -1;
	int j = -1;
	int count = 0;
	for (; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += mine[x + i][y + j];
		}
	}
	count -= ('0' * 9);//���ַ�ת��Ϊ����
	return count;
}


void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y)
{
	int i = -1;
	int j = -1;
	show[x][y] = ' ';
	for (; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			/*if (mine[x + i][y + j] == '0' && show[x + i][y + j] != ' ')
			{
				show[x + i][y + j] = ' ';
				AutoExc(show, mine, ROW, COL, x + i, y + i);
			}*/
			if (mine[x + i][y + j] != '1')
			{
				int ret = 0;
				ret = MineCount(mine, x + i, y + j);
				if (ret == 0)
				{
					if (show[x + i][y + j] == '*')
					{
						AutoExc(show, mine, ROW, COL, x + i, y + j);
					}
					show[x + i][y + j] = ' ';
				}
				else
				{
					show[x + i][y + j] = ret + '0';
				}
			}
		}
	}
}


int Iswin(char show[ROWS][COLS],int row,int col)
{
	int i = 1;
	int j = 1;
	int count = 0;
	for (; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*'|| show[i][j] == 4)
			{
				count++;
			}
		}
	}
	return count;
}