#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���벢�������ֵ
int main()
{
	int arr[10] = { 0 };//��û��ָ��Ԫ�ظ���ʱ������ݳ�ʼ��������ȷ����С
	int i = 0;
	for (; i < 10; i++)
	{
		scanf("%d", &arr[i]);//���ﲻ��ȡ����ĵ�ַ������ȡÿ��Ԫ�صĵ�ַ�������Ҫ��&
	}
	
	int a = 0;
	int max = arr[0];
	for (a = 1; a < 10; a++)
	{
		if (arr[a] > max)
		{
			max = arr[a];
		}
	}
	printf("%d", max);
	
	return 0;
}