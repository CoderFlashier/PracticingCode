#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n = 100;

	//func1
	int sum1 = 0;
	int i = 0;
	for (i = 1; i <= n; i++)//ͨ��ѭ���ۼ�
		sum1 += i;
	printf("The result obtained through the first function:%d\n", sum1);


	//func2
	int sum2 = (1 + n) * (n >> 1);//���õȲ����е����ʼ���
	printf("The result obtained through the second function:%d", sum2);

	return 0;
}