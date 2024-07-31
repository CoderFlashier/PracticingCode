#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
//int main()
//{
//	int temp_F = 0;//创建变量用于循环
//	for (temp_F = 100; temp_F <= 200; temp_F += 20)
//	{
//		double temp_C = (5.0 / 9.0) * (temp_F - 32);//这里需要注意浮点数除法需要包含浮点数
//		printf("%d℉ = %.2lf℃\n", temp_F, temp_C);//输出
//	}
//	return 0;
//}


//T2
//#include <stdio.h>
//
//int main()
//{
//	double a = 1.0;//将a、b设为double类型用于浮点除法
//	double b = 2.0;
//	int i = 0;//用于控制循环次数
//	double sum = 0.0;
//	for (i = 1; i <= 2; i++)
//	{
//		sum += b / a;
//		//将a+b的值赋给下一个b，并将当前b的值赋给下一个a
//		b = a + b;
//		a = b - a;
//	}
//	printf("%lf", sum);//输出
//	return 0;
//}


//T3
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char input[50] = { 0 };
//	printf("请输入字符串：");
//	fgets(input, 50, stdin);
//	int len = (int)strlen(input);//得到字符串长度
//	int i = 0;
//	int num_n = 0;//数字
//	int num_a = 0;//英文字母
//	int num_b = 0;//空格
//	int num_o = 0;//其它
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
//	printf("这个字符串共有%d个数字，%d个英文字母，%d个空格，%d个其它字符。", num_n, num_a, num_b, num_o);
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
//	printf("请输入金额，人数：");
//	scanf("%d %d", &money, &human);
//	int i = 0;
//
//	for (men = 0; (3 * men) <= money; men++)//遍历男人的人数
//	{
//		for (women = 0; (2 * women) <= (money - (3 * men)); women++)//遍历女人的人数
//		{
//			for (children = 0; children <= (money - (3 * men) - (2 * women)); children++)//遍历小孩的人数
//			{
//				
//				if ((men + women + children == human) && (((3 * men) + (2 * women) + children) == money))
//				{
//					if (ret_mark == 0)//当有结果时，进行提示
//					{
//						ret_mark = 1;
//						printf("存在以下结果：\n");
//					}
//					printf("共有男人%d人，女人%d人，小孩%d人\n", men, women, children);
//				}
//			}
//		}
//	}
//	if(ret_mark == 0)
//		printf("无结果！");
//
//	return 0;
//}



//T5
#include <stdio.h>

int main()
{
	int n = 0;
	printf("请输入梯形的高(顶边长)：");
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int blank = n - 1;
	int length = n;
	for (i = 0; i < length; i++)//循环次数即为打印梯形的行数
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