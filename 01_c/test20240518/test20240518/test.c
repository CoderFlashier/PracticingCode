#define _CRT_SECURE_NO_WARNINGS

//T1
//#include <stdio.h>
//#include <math.h>
//
//void func_1(double mark, double a, double b, double* x1, double* x2);
//void func_0(double mark, double a, double b, double* x1, double* x2);
//void func_i(double mark, double a, double b, double* x1, double* x2, double* x_i);
//
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//	double x_i = 0.0;//���ڴ�Ÿ�������
//	printf("input a,b,c:");
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("equation:  %.2lfx*x+%.2lf*x+%.2lf=0\n" ,a ,b, c);
//	double mark = pow(b, 2) - (4 * a * c);//b^2 - 4ac
//	//�ж�b^2 - 4ac
//	if (mark > 0)
//		//�����޷�ͬʱ��������ֵ������ָ�봫��
//		func_1(mark, a, b, &x1, &x2);
//	else if (mark == 0)
//		func_1(mark, a, b, &x1, &x2);
//	else
//		func_i(mark, a, b, &x1, &x2, &x_i);
//
//	//��ӡ���
//	printf("root:\n");
//	if (mark >= 0)
//		printf("x1=%lf\tx2=%lf", x1, x2);
//	else
//		printf("x1=%lf+%lfi\t x2=%lf-%lfi", x1, x_i, x2, x_i);
//	return 0;
//}
//
////b^2 - 4ac > 0
//void func_1(double mark, double a, double b, double* x1, double* x2)
//{
//	*x1 = (0.0 - b + sqrt(mark)) / (2 * a);
//	*x2 = (0.0 - b - sqrt(mark)) / (2 * a);
//}
//
////b^2 - 4ac = 0
//void func_0(double mark, double a, double b, double* x1, double* x2)
//{
//	*x1 = (0.0 - b) / (2 * a);
//	*x2 = *x1;
//}
//
////b^2 - 4ac < 0
//void func_i(double mark, double a, double b, double* x1, double* x2, double* x_i)
//{
//	*x1 = (0.0 - b) / (2 * a);
//	*x2 = *x1;
//	if (mark < 0)
//		mark *= -1.0;
//	//����abs()�Ĳ����ͷ���ֵ����int���������ڸ���
//	*x_i = 1.0 * sqrt(mark) / (2 * a);
//}




//T2
//#include <stdio.h>
//
////����������к���
//#define row 3
//#define col 3
//
//void exchange(int arr[][col]);
//
//int main()
//{
//	//����
//	int arr[row][col] = { 0 };
//	int i = 0;
//	printf("������һ��3��3�����飺\n");
//	for (i = 0; i < (row * col); i++)
//		scanf("%d", &arr[i / col][i % col]);
//	printf("����ǰ������Ϊ��\n");
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%4d ", arr[i][j]);
//		printf("\n");
//	}
//	//�����к���
//	exchange(arr);
//	printf("�����������Ϊ��\n");
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%4d ", arr[i][j]);
//		printf("\n");
//	}
//		
//}
//
//
////���鴫�μ���������ĵ�ַ�����践��ֵ
//void exchange(int arr[][col])
//{
//	for (int i = 0; i < row; i++)
//	{
//		//�ԶԽ���Ϊ����н���
//		for (int j = 0; j < i; j++)
//		{
//			int temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//} 




//T3
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void Print_num(int input, char* num);
//
//int main()
//{
//	int input = 0;
//	char num[20] = { 0 };
//	printf("������һ������:");
//	scanf("%d", &input);
//	Print_num(input, num);
//	return 0;
//}
//
//
//void Print_num(int input, char* num)
//{
//	_itoa(input, num, 10);//������ת��Ϊ�ַ���
//	int len = (int)strlen(num);//�����ַ�������
//	for (int i = 0; i < len; i++)
//		printf("%c ", num[i]);
//}




//T4
//#include <stdio.h>
//
//double Legendre(double x, int n);
//
//int main()
//{
//	int n = 0;
//	double x = 0;
//	//����x��n
//	printf("����������Legendre��ʽ�����x��n:");
//	scanf("%lf %d", &x, &n);
//	printf("%lf", Legendre(x, n));
//	return 0;
//}
//
//double Legendre(double x, int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else
//		//��ʼ�ݹ飬��nΪ��������ֹ���ݹ�
//		return  (((2 * n - 1) * x) - Legendre(x, n - 1) - ((n - 1) * Legendre(x, n - 2))) / n;
//}



//T5
#include <stdio.h>

int Ackermann(int m, int n);

int main()
{
	int m = 0;
	int n = 0;
	printf("����������Ackermann��ʽ�����m��nֵ:");
	scanf("%d %d", &m, &n);

	printf("�������õ�ֵΪ:%d", Ackermann(m, n));
	return 0;
}


int Ackermann(int m, int n)
{
	if (m == 0 && n >= 0)
		return n + 1;
	else if (m >= 0 && n == 0)
		//��ʼ�ݹ�
		return Ackermann(m - 1, 1);
	else
		return Ackermann(m - 1, Ackermann(m, n - 1));
}