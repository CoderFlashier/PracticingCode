#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#include "add.h"
//
//#pragma comment(lib,"add.libtest20230914.lib")//��̬���ʹ��(���뾲̬�⣩
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);//�ݹ�
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
//����1234�����1 2 3 4