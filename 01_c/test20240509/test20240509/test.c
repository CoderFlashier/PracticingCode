#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
//int main()
//{
//	int arr[20] = { 0 };
//	int n = 0;
//	//输入元素个数
//	printf("请输入元素个数：");
//	scanf("%d", &n);
//	int i = 0;
//	//输入
//	printf("请输入元素（以空格间隔）：");
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	//找到最大和最小的元素对应下标
//	int max_mark = 0;
//	int min_mark = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < arr[min_mark])
//			min_mark = i;
//		if (arr[i] > arr[max_mark])
//			max_mark = i;
//	}
//
//	//交换两个元素
//	arr[min_mark] = arr[min_mark] + arr[max_mark];
//	arr[max_mark] = arr[min_mark] - arr[max_mark];
//	arr[min_mark] = arr[min_mark] - arr[max_mark];
//
//	//输出结果
//	printf("将最大元素和最小元素换位后的结果如下：\n");
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}



//T2
//#include <stdio.h>
//
//int main()
//{
//	int arr[20] = { 0 };
//	int n = 0;
//	//输入元素个数
//	printf("请输入元素个数：");
//	scanf("%d", &n);
//	int i = 0;
//	//输入
//	printf("请输入元素（以空格间隔）：");
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	int temp = 0;
//	//逆序元素
//	for (i = 0; i < (n / 2); i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[n - 1 - i];
//		arr[n - 1 - i] = temp;
//	}
//
//	//输出
//	printf("将数组逆序后的结果如下：\n");
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	
//	return 0;
//}


//sort
//#include <stdio.h>
//
//void insertion_sort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int key = 0;
//
//	for (i = 1; i < n; i++)
//	{
//		key = arr[i];
//		j = i - 1;
//		while ((j >= 0) && (arr[j] > key))
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//
//
//void insertion_sort_2dimension(int arr[][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int key = 0;
//
//	for (i = 1; i < (row * col); i++)
//	{
//		key = arr[i / col][i % col];
//		j = i - 1;
//		while ((j >= 0) && (arr[j / col][j % col] < key))
//		{
//			arr[(j + 1) / col][(j + 1) % col] = arr[j / col][j % col];
//			j--;
//		}
//		arr[(j + 1) / col][(j + 1) % col] = key;
//	}
//}
//
//void bubble_sort_2dimension(int arr[][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < (row * col - 1); i++)
//	{
//		for (j = 0; j < (row * col - 1 - i); j++)
//		{
//			if (arr[j / col][j % col] > arr[(j + 1) / col][(j + 1) % col])
//			{
//				int temp = arr[j / col][j % col];
//				arr[j / col][j % col] = arr[(j + 1) / col][(j + 1) % col];
//				arr[(j + 1) / col][(j + 1) % col] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//int arr[4][3] = { {1631, 3231,3242}, {4234, 23, 243},{6464,45, 462342}, {642424,5, 46223442} };
//	int arr[3][5] = { {999, 666, 444, 1,222}, {6666, 3333,5555,66,22},{8888, 8,44444,66666,333333} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	bubble_sort_2dimension(arr, 3, 5);
//
//	printf("\n");
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//
//	return 0;
//}


//t3
//161 321 464 131 456 2 4646 1231 4646
//#include <stdio.h>
//
//void insertion_sort_2dimension(int arr[][3], int row, int col);
//void bubble_sort_2dimension(int arr[][3], int row, int col);
//
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0;
//	printf("请输入9个数：\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//			scanf("%d", &arr[i][j]);
//	}
//
//	printf("你输入的矩阵为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//			printf("%5d ", arr[i][j]);
//		printf("\n");
//	}
//
//	printf("算法1、冒泡排序   算法2、插入排序\n");
//	printf("请输入数字序号进行选择：");
//	int mark = 0;
//	scanf("%d", &mark);
//	if (mark == 1)
//		bubble_sort_2dimension(arr, 3, 3);
//	else
//		insertion_sort_2dimension(arr, 3, 3);
//
//	printf("排序后的结果为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//			printf("%5d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//
//
//void insertion_sort_2dimension(int arr[][3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int key = 0;
//
//	for (i = 1; i < (row * col); i++)
//	{
//		key = arr[i / col][i % col];
//		j = i - 1;
//		while ((j >= 0) && (arr[j / col][j % col] > key))
//		{
//			arr[(j + 1) / col][(j + 1) % col] = arr[j / col][j % col];
//			j--;
//		}
//		arr[(j + 1) / col][(j + 1) % col] = key;
//	}
//}
//
//void bubble_sort_2dimension(int arr[][3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < (row * col - 1); i++)
//	{
//		for (j = 0; j < (row * col - 1 - i); j++)
//		{
//			if (arr[j / col][j % col] > arr[(j + 1) / col][(j + 1) % col])
//			{
//				int temp = arr[j / col][j % col];
//				arr[j / col][j % col] = arr[(j + 1) / col][(j + 1) % col];
//				arr[(j + 1) / col][(j + 1) % col] = temp;
//			}
//		}
//	}
//}


//T4
//#include <stdio.h>
//
//int main()
//{
//	int arr[5][5] = { 0 };
//	//输入
//	printf("请输入5 x 5矩阵:\n");
//	int i = 0;
//	for (i = 0; i < 25; i++)
//		scanf("%d", &arr[i / 5][i % 5]);
//
//	int diagonal_sum = 0;
//	long long diagonal_sum_even = 1;
//
//	printf("输入的矩阵为：\n");
//	//将判断、计算放在一个循环中，提高运行速度
//	for (i = 0; i < 25; i++)
//	{
//		if (i % 5 == 0 && i != 0)
//			printf("\n");
//		printf("%5d ", arr[i / 5][i % 5]);
//
//		//判断数据是否在对角线上
//		if (i / 5 == i % 5)
//		{
//			diagonal_sum += arr[i / 5][i % 5];
//			//判断数据下标是否为偶数
//			if ((i / 5) % 2 == 0 && (i % 5) % 2 == 0)
//				diagonal_sum_even *= arr[i / 5][i % 5];
//		}
//		if ((i / 5) + (i % 5) == 4 && (i / 5) != (i % 5))//防止数组中间的数据重复计算
//		{
//			diagonal_sum += arr[i / 5][i % 5];
//			if ((i / 5) % 2 == 0 && (i % 5) % 2 == 0)
//				diagonal_sum_even *= arr[i / 5][i % 5];
//		}
//	}
//
//	//输出结果
//	printf("\n两条对角线上的各元素之和为:%d。\n", diagonal_sum);
//	printf("两条对角线上行、列下标均为偶数的各元素之积为:%lld。", diagonal_sum_even);
//
//	return 0;
//}

//1 2 3 4 5   6 7 8 9 0   1 2 3 4 5   6 7 8 9 0    1 2 3 4 5
//00 01 02 03 04
//10 11 12 13 14
//20 21 22 23 24
//30 31 32 33 34
//40 41 42 43 44


//T5
#include <stdio.h>

int main()
{
	int n = 0;
	//输入生成的杨辉三角的层数
	printf("输入生成的杨辉三角的层数:");
	scanf("%d", &n);
	int i = 0;
	int arr[10][10] = { 0 };
	arr[0][0] = 1;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		//根据规律输出杨辉三角
		for (j = 0; j <= i; j++)
		{
			if(i >= 1 && j >=1 )
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			if(i >= 1 && j == 0)
				arr[i][j] = arr[i - 1][j];
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//GPT-3.5
//#include <stdio.h>
//
//int main()
//{
//    int rows, coef = 1;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (int i = 0; i < rows; i++) 
//    {
//        for (int space = 1; space <= rows - i; space++) 
//        {
//            printf("  ");
//        }
//        for (int j = 0; j <= i; j++) 
//        {
//            if (j == 0 || i == 0)
//                coef = 1;
//            else
//                coef = coef * (i - j + 1) / j;
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int blank = n;
//	int num = 0;
//	int mark = 0;
//	int i = 1;
//    for(i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= blank; j++)
//			printf("  ");
//		blank--;
//
//		for (j = 1; j <= i; j++)
//		{
//            int numerator = 1;
//            int denominator = 1;
//            int k = 0;
//            for (k = i; k >= (i - j + 1); k--)
//                numerator *= k;
//            for(k = j - 1;k > 0; k--)
//                numerator *= k;
//
//            printf("%4d", numerator / denominator);
//		}
//        printf("\n");
//	}
//}