#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
//int main()
//{
//	//创建并初始化三个变量用于保存成绩
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	printf("Please enter three integers:");
//	scanf("%d %d %d", &a, &b, &c);//输入数据
//
//	float average = (a + b + c) / 3.0;//求平均
//
//	printf("The average score is %.2f.", average);//输出
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	double n = 0.0;//用double类型，便于后面使用
//	printf("Please enter the number of values:");
//	scanf("%lf", &n);
//	printf("Please enter %d values:", (int)n);
//
//	double sum = 0.0;
//	int i = 0;
//	double temp = 0.0;
//
//	//通过循环接收多个数据
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &temp);
//		sum += temp;
//	}
//
//	double average = sum / n;
//	printf("The average value is %.2lf.", average);
//	return 0;
//}



//T2
//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("Please enter a three digit integer:");//输入
//	scanf("%d", &input);
//	int sum = 0;
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		sum += (input % 10);//取出个位
//		input /= 10;//右移
//	}
//
//	printf("The result of adding each digit of this integer is %d.", sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	double input = 0.0;
//	printf("Please enter one value:");
//	scanf("%lf", &input);//可以输入带小数的值
//	int cnt = 0;
//
//	if (input - (int)input)//当存在小数时，先将小数转换为整数
//		while (input - (int)input)
//		{
//			cnt++;//受double存储方式限制，存在死循环的现象
//			//加一计数变量，当有出现死循环的可能时直接终止过程
//			input *= 10;
//			if (cnt > 5)
//				break;
//		}
//	
//	int sum = 0;
//	int temp = (int)input;//转换成整形
//	while (temp)
//	{
//		sum += (temp % 10);
//		temp /= 10;
//	}
//
//	printf("The result of adding each digit of this value is %d.", sum);
//	return 0;
//}




//T3
#include <stdio.h>

#define PI 3.1

int main()
{
	double radius = 0.0;
	printf("Please enter the radius of the circle:");
	scanf("%lf", &radius);//输入半径
	double perimeter = 2 * PI * radius;//求周长
	double area = PI * (radius * radius);//求面积
	printf("The circumference of a circle is %.2lf.\n", perimeter);
	printf("The area of a circle is %.2lf.", area);
	return 0;
}