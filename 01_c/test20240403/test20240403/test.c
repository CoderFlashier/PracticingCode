#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
//int main()
//{
//	//��������ʼ�������������ڱ���ɼ�
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	printf("Please enter three integers:");
//	scanf("%d %d %d", &a, &b, &c);//��������
//
//	float average = (a + b + c) / 3.0;//��ƽ��
//
//	printf("The average score is %.2f.", average);//���
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	double n = 0.0;//��double���ͣ����ں���ʹ��
//	printf("Please enter the number of values:");
//	scanf("%lf", &n);
//	printf("Please enter %d values:", (int)n);
//
//	double sum = 0.0;
//	int i = 0;
//	double temp = 0.0;
//
//	//ͨ��ѭ�����ն������
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
//	printf("Please enter a three digit integer:");//����
//	scanf("%d", &input);
//	int sum = 0;
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		sum += (input % 10);//ȡ����λ
//		input /= 10;//����
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
//	scanf("%lf", &input);//���������С����ֵ
//	int cnt = 0;
//
//	if (input - (int)input)//������С��ʱ���Ƚ�С��ת��Ϊ����
//		while (input - (int)input)
//		{
//			cnt++;//��double�洢��ʽ���ƣ�������ѭ��������
//			//��һ�������������г�����ѭ���Ŀ���ʱֱ����ֹ����
//			input *= 10;
//			if (cnt > 5)
//				break;
//		}
//	
//	int sum = 0;
//	int temp = (int)input;//ת��������
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
	scanf("%lf", &radius);//����뾶
	double perimeter = 2 * PI * radius;//���ܳ�
	double area = PI * (radius * radius);//�����
	printf("The circumference of a circle is %.2lf.\n", perimeter);
	printf("The area of a circle is %.2lf.", area);
	return 0;
}