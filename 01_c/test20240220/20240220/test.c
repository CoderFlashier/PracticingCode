#define _CRT_SECURE_NO_WARNINGS


//�����
//#include <stdio.h>
//
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}



//��a��b����С������
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	//շת��������������
	int temp_a = a;
	int temp_b = b;
	int max_com = 0;
	int rem = temp_a % temp_b;
	if (rem == 0)
		max_com = temp_b;
	else
	{
		while (rem)
		{
			int temp = temp_b;
			temp_b = rem;
			rem = temp % rem;
		}
		max_com = temp_b;
	}
	//printf("%d", max_com);
	
	//����С������
	int ret = (a * b) / max_com;
	printf("%d", ret);
	return 0;
}