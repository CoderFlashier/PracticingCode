#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int num = 0;
//	
//	for (a = 100; a <= 200; a++)
//	{
//		//�ж��Ƿ�Ϊ��������2~a-1֮�����ȥ�Գ�a
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <= a - 1; b++)//һ�����ԣ�����
//		{
//			if (a % b == 0)
//			{
//				flag = 0;//��a��Ϊ����ʱ��flagΪ0
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", a);//�������
//			num++;
//		}
//	}
//
//	printf("%d", num);//�������
//	return 0;
//}
//���100~200֮�������


//�������������ʣ� a = b * c��b��c��һ����һ����<=sqrt(a)  [sqrt:��ƽ��]
//ż��������������
//�򻯴���
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	int num = 0;
//
//	for (a = 101; a <= 200; a+=2)//�ų�ż��
//	{
//		//�ж��Ƿ�Ϊ��������2~a-1֮�����ȥ�Գ�a
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <= sqrt(a); b++)//�������������ʣ���������̣�sqrtΪ��ѧ�⺯��
//		{
//			if (a % b == 0)
//			{
//				flag = 0;//��a��Ϊ����ʱ��flagΪ0
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", a);//�������
//			num++;
//		}
//	}
//
//	printf("%d", num);//�������
//	return 0;
//}


//���ú�����д��
//#include<math.h>
//
//int test(int x)//�ж��Ƿ�Ϊ�����ĺ���
//{
//	int b = 0;
//	int flag = 1;
//
//	for (b = 2; b <= sqrt(x); b++)
//	{
//		if (x % b == 0)
//		{
//			flag = 0;
//			return 0;//ִ��returnʱ��������������
//		}
//	}
//	return flag;//����flag��ֵ��c�����ڼ���
//}
//
//int main()
//{
//	int a = 0;
//	int num = 0;
//	int c = 0;
//
//	for (a = 101; a <= 200; a += 2)
//	{
//		c += test(a);//���ú���
//		if (test(a))
//		{
//			printf("%d\n", a);
//		}
//	}
//
//	printf("%d", c);
//	return 0;
//}


//�ж�����Ĺ����ܱ�4���������ܱ�100����,�����ܱ�400����
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d\n", year);
			}
		}
		if (year % 400 == 0)//�˴����ܼ�else����Ϊ�˴�����if��Ҫ�жϣ�����else if�Ļ�ֻ���ж�һ��
		{
			printf("%d\n", year);
		}
	}
	return 0;
}