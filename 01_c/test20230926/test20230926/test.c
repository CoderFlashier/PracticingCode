#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int x = 0;
//	int y = 0;
//	for (; x <= 2; x++)
//	{
//		for (y = 0; y <= 3; y++)
//		{
//			printf("&arr[%d][%d] = %p\n", x , y , &arr[x][y]);
//		}
//	}
//	return 0;
//}


void bubble_sort(int arr[])//�˴���[]����ʡ
{
	int ii = 0;
	for (; ii <= 9; ii++)
	{
		int i = 0;
		for (; i <= 8 - ii; i++)//ע��˴���Ҫ����Խ��
		{
			if (arr[i] > arr[i + 1])
			{
				int a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;
			}
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr);//ð�����򣬽�����С��������
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//����  ������Χ�Ķ�ջ����