#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
//int main()
//{
//	int temp_F = 0;//������������ѭ��
//	for (temp_F = 100; temp_F <= 200; temp_F += 20)
//	{
//		double temp_C = (5.0 / 9.0) * (temp_F - 32);//������Ҫע�⸡����������Ҫ����������
//		printf("%d�H = %.2lf��\n", temp_F, temp_C);//���
//	}
//	return 0;
//}


//T2
//#include <stdio.h>
//
//int main()
//{
//	double a = 1.0;//��a��b��Ϊdouble�������ڸ������
//	double b = 2.0;
//	int i = 0;//���ڿ���ѭ������
//	double sum = 0.0;
//	for (i = 1; i <= 2; i++)
//	{
//		sum += b / a;
//		//��a+b��ֵ������һ��b��������ǰb��ֵ������һ��a
//		b = a + b;
//		a = b - a;
//	}
//	printf("%lf", sum);//���
//	return 0;
//}


//T3
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char input[50] = { 0 };
//	printf("�������ַ�����");
//	fgets(input, 50, stdin);
//	int len = (int)strlen(input);//�õ��ַ�������
//	int i = 0;
//	int num_n = 0;//����
//	int num_a = 0;//Ӣ����ĸ
//	int num_b = 0;//�ո�
//	int num_o = 0;//����
//	for (i = 0; i < (len - 1); i++)
//	{
//		if (input[i] >= '0' && input[i] <= '9')
//			num_n++;
//		else if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
//			num_a++;
//		else if (input[i] == ' ')
//			num_b++;
//		else
//			num_o++;
//	}
//	printf("����ַ�������%d�����֣�%d��Ӣ����ĸ��%d���ո�%d�������ַ���", num_n, num_a, num_b, num_o);
//	return 0;
//}



//T4
//#include <stdio.h>
//
//int main()
//{
//	int men = 0;
//	int women = 0;
//	int children = 0;
//	int money = 50;
//	int human = 30;
//	int ret_mark = 0;
//	printf("�������������");
//	scanf("%d %d", &money, &human);
//	int i = 0;
//
//	for (men = 0; (3 * men) <= money; men++)//�������˵�����
//	{
//		for (women = 0; (2 * women) <= (money - (3 * men)); women++)//����Ů�˵�����
//		{
//			for (children = 0; children <= (money - (3 * men) - (2 * women)); children++)//����С��������
//			{
//				
//				if ((men + women + children == human) && (((3 * men) + (2 * women) + children) == money))
//				{
//					if (ret_mark == 0)//���н��ʱ��������ʾ
//					{
//						ret_mark = 1;
//						printf("�������½����\n");
//					}
//					printf("��������%d�ˣ�Ů��%d�ˣ�С��%d��\n", men, women, children);
//				}
//			}
//		}
//	}
//	if(ret_mark == 0)
//		printf("�޽����");
//
//	return 0;
//}



//T5
#include <stdio.h>

int main()
{
	int n = 0;
	printf("���������εĸ�(���߳�)��");
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int blank = n - 1;
	int length = n;
	for (i = 0; i < length; i++)//ѭ��������Ϊ��ӡ���ε�����
	{
		for (j = 0; j < blank; j++)
			printf(" ");
		for (j = 0; j < n; j++)
			printf("*");

		printf("\n");
		n++;
		blank--;
	}
	return 0;
}