#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//���1~10


//int main()
//{
//	for (;;)//ʡ��
//	{
//		printf("wdnmd\n");
//	}
//	return 0;
//}
//��ѭ��


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);//������ʱ����ѭ��
//
//	return 0;
//}
//doѭ�������1~10


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 1;
//
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		sum = sum * a;
//	}
//	printf("%d", sum);
//	return 0;
//}
//��׳ˣ���С�˵���


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 1;
//
//	for (; a > 0; a--)
//	{
//		sum = sum * a;
//	}
//	printf("%d", sum);
//	return 0;
//}
//��׳ˣ��Ӵ�˵�С��


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	int b = 0;
//	int ret = 0;
//
//	scanf("%d", &a);
//
//	for (i = a; i > 0; i--)
//	{
//		for (b = i; b > 0; b--)
//		{
//			sum = sum * b;
//		}
//		ret = ret + sum;
//		sum = 1;//�ǵ���ÿ��ѭ��������sum
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}
//��n��+��n-1����+...+1��


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	int b = 0;
//	int ret = 0;
//
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		sum = sum * i;
//		ret = ret + sum;
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}
//�򻯴��룬����ǰһ�μ���Ľ�������Ч��


//int main()
//{
//	int a = 1;//��ʼ��
//	while (a <= 10)//�ж�
//	{
//		printf("%d\n", a);
//		a++;//����
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (3 == a)
//			continue;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//���1~10��3����


//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		
//		if (3 == a)
//			continue;
//		
//		a++;
//	}
//	return 0;
//}
//���������������3