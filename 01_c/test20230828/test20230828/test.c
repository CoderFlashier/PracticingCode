#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("printf(\"Hello World!\\n\");\n");//����ת���ַ�
//	printf("cout<<\"Hello World!\"<<endl;");
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}
//�����������������Ǹ�


//int main()
//{
//	float a = 0.0f;
//	scanf("%f", &a);
//	float b = 3.1415926;
//
//	float c = 4 / 3.0 * b * a * a * a;//��������ֻҪ��һ��������������������������
//	printf("%.3f", c);
//	return 0;
//}
//�����뾶�����������



int main()
{
	int arr[2] = { 0 };//�����������ء���ߣ����ף�
	int i = 0;
	while (i < 2)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	float b = 0.0f;
	float c = arr[1] / 100.0;//100.0��.0������
	b = arr[0] / c / c;
	printf("%.2f", b);
	return 0;
}
//���BMIֵ