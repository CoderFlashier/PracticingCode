#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��ӡ�˷��ھ���
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	scanf("%d", &i);
//	for (; a <= i; a++)
//	{
//		for (b = 1;a >= b; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a * b);//ͨ��%2dʹ����Ҷ��룬-2d�����
//
//		}
//		printf("\n");
//	}
//	return 0;
//}



//���벢�������ֵ
//int main()
//{
//	int arr[10] = { 0 };//��û��ָ��Ԫ�ظ���ʱ������ݳ�ʼ��������ȷ����С
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//���ﲻ��ȡ����ĵ�ַ������ȡÿ��Ԫ�صĵ�ַ�������Ҫ��&
//	}
//	
//	int a = 0;
//	int max = arr[0];
//	for (a = 1; a < 10; a++)
//	{
//		if (arr[a] > max)
//		{
//			max = arr[a];
//		}
//	}
//	printf("%d", max);
//	
//	return 0;
//}



//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%s", arr);
//	return 0;
//}
//������


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (; i <= (sz - 1); i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}
//��ӡԪ�ص�ַ