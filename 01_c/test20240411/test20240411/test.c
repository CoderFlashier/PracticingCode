#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//#include <math.h>1
//
//int main()
//{
//	double x = 0;
//	//����
//	printf("Input x:");
//	scanf("%lf", &x);
//
//	//�ж������x������Χ��ѡ����Ӧ����ʽ
//	double deno = 0.0;
//	double ret = 0.0;
//	if (x >= -5 && x < 0)
//	{
//		deno = x * x + x + 1;
//		ret = 8.0 / deno;
//	}
//	else if (x >= 0 && x < 5)
//	{
//		deno = x * x + x - 6;
//		ret = 7.0 / deno;
//	}
//	else if (x >= 5 && x < 10)
//	{
//		//����sqrt()��ƽ����
//		deno = sqrt(x) + 8;
//		ret = 2.0 / deno;
//	}
//	else
//		ret = 0;
//	
//	//����Ҫ�����
//	printf("f(%.6lf) = %.2lf", x, ret);
//	return 0;
//}


//T2
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	//srandΪ��������֣���ϵͳʱ���Ϊ����
//	//srand����stdlib.h
//	//time����time.h
//	//��������ʱ��rand()������Ĭ��Ϊsrand(1)����ʱ��ÿ�γ�������ʱ���ɵ������Ϊ�̶�ֵ
//	srand((unsigned)time(NULL));
//
//	//����ab����ֵΪ�����
//	int a = rand() % 100;
//	int b = rand() % 100;
//	int sum = 0;
//	char ope = 0;
//
//	//����
//	printf("�������������+ / -����");
//	ope = getchar();
//	printf("%d %c %d = ", a, ope, b);
//
//	//�ж������
//	switch (ope)
//	{
//	case'+':
//		sum = a + b;
//		break;
//	case'-':
//		sum = a - b;
//		break;
//	}
//	
//	//������
//	int input = 0;
//	scanf("%d", &input);
//
//	//�жϽ���Ƿ���ȷ
//	if (input == sum)
//		printf("������ȷ���ð���");
//	else
//		printf("�������");
//
//	return 0;
//}


//T3
#include <stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	int mark_leap = 0;
	
	while (1)
	{
		printf("��������ݡ��·ݣ��Կո�������");
		scanf("%d %d", &year, &month);
		if (year < 0)
			printf("����Ƿ������������룡\n");
		else
		{
			if (month > 0 && month <= 12)
				break;
			else
				printf("����Ƿ������������룡\n");
		}
	}
	
	//����switch case�����ص㾫�����
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d��%d����31��", year, month);
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d��%d����30��", year, month);
		break;

	case 2:
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d��%d����29��", year, month);
		else
			printf("%d��%d����28��", year, month);
		break;
	}
	return 0;
}