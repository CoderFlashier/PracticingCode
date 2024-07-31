#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//#include <math.h>1
//
//int main()
//{
//	double x = 0;
//	//输入
//	printf("Input x:");
//	scanf("%lf", &x);
//
//	//判断输入的x所属范围，选择相应函数式
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
//		//利用sqrt()求平方根
//		deno = sqrt(x) + 8;
//		ret = 2.0 / deno;
//	}
//	else
//		ret = 0;
//	
//	//根据要求输出
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
//	//srand为随机数播种，以系统时间戳为种子
//	//srand属于stdlib.h
//	//time属于time.h
//	//当不播种时，rand()的种子默认为srand(1)，此时，每次程序运行时生成的随机数为固定值
//	srand((unsigned)time(NULL));
//
//	//创建ab并赋值为随机数
//	int a = rand() % 100;
//	int b = rand() % 100;
//	int sum = 0;
//	char ope = 0;
//
//	//输入
//	printf("请输入运算符（+ / -）：");
//	ope = getchar();
//	printf("%d %c %d = ", a, ope, b);
//
//	//判断运算符
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
//	//输入结果
//	int input = 0;
//	scanf("%d", &input);
//
//	//判断结果是否正确
//	if (input == sum)
//		printf("运算正确，好棒！");
//	else
//		printf("运算错误。");
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
		printf("请输入年份、月份（以空格间隔）：");
		scanf("%d %d", &year, &month);
		if (year < 0)
			printf("输入非法，请重新输入！\n");
		else
		{
			if (month > 0 && month <= 12)
				break;
			else
				printf("输入非法，请重新输入！\n");
		}
	}
	
	//利用switch case语句的特点精简代码
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d年%d月有31天", year, month);
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d年%d月有30天", year, month);
		break;

	case 2:
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d年%d月有29天", year, month);
		else
			printf("%d年%d月有28天", year, month);
		break;
	}
	return 0;
}