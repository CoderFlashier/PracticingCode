#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//int strlen1(char* arr)
////�˴�Ҳ�������������ʽ��int strlen1(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		*arr ++;//ÿ��char 1byte
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//
//	int len = 0;
//	len = strlen1(arr);
//	printf("%d\n", len);
//	return 0;
//}



//���õݹ飨����ʹ����ʱ�������󳤶�
//int strlen1(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen1(++arr);
//	}
//}
//
//int main() 
//{
//	char arr[] = "abc";
//	int b = strlen1(arr);
//	printf("%d", b);
//	return 0;
//}



//int factorial(int a)
//{
//	int ret = 1;
//	if (a <= 1)
//		return 1;
//	else
//		return a * factorial(a - 1);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",factorial(a));
//	return 0;
//}
//�õݹ���׳�



//int fib(int n)
//{
//	int a = 1;
//	int ret = 1;
//	int b = 0;
//	int sum = 0;
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	for (; n >= 3 ; n--)
//	{
//		b = ret;
//		ret = ret + a;
//		a = b;
//		sum += ret;
//	}
//	return sum + 2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//��ǰn��쳲��������еĺͣ����Ǻ����е�����

//1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
//	int a = 1;
//	int ret = 1;
//	int b = 0;
//	if (n == 1 || n == 2)
//		return 1;
//	for (; n > 2; n--)
//	{
//		b = ret;
//		ret = ret + a;
//		a = b;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//�����n��쳲�������


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//�õݹ�ķ�ʽ��Ч�ʼ���



//int main()
//{
//	int a = 0;
//	int b = 0;
//	while ((scanf("%d %d\n", &a, &a)) != EOF)
//		{
//			printf("%d",a + b);
//		}
//	return 0;
//}



