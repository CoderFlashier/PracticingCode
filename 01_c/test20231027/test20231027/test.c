#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char ch = 'a';
//	char* pch = &ch;
//	printf("%c", *pch);
//	*pch = 'b';
//	printf("\n%c", *pch);
//	return 0;
//}


//int main()
//{
//	const char* p = "abc";
//	printf("%s", p);
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("!=\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("!=\n");
//	}
//	return 0;
//}
//��� == �� !=


//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 3,4,5,6 };
//	int arr3[] = { 6,7,8,9 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	//�����������ǰ���������&�ᱨ����
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j = 0;
//		for (; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//			printf("%d ", *(parr[i] + j));
//			//���ַ��������Գɹ����
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr);
//	printf("%d", sz);
//	return 0;
//}


//char(*pc)[5] = &arr;

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int(*parr)[10] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (; i < sz; i++)
//	{
//		printf("%d ", *(*parr + i));
//	}
//	return 0;
//}


//void print1(int arr[3][5], int x, int y)
////�Զ�ά�����ÿһ�н��д�ӡ
//{
//	int i = 0;
//	for (; i < x; i++)
//	{
//		int j = 0;
//		for (; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)
////�˴�pָ��һ���������飬����5��Ԫ��
////pָ���һ�У�p+1ָ��ڶ��У���*p�൱���õ�һ���У���ʱ��p������&arr��Ϊ�������飩
//{
//	int i = 0;
//	for (; i < x; i++)
//	{
//		int j = 0;
//		for (; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//�˴�*(p + i)�õ���i + 1�е���Ԫ�ص�ַ��*(*(p + i) + j)�õ���i + 1�е�j + 1��Ԫ�صĵ�ַ
//			printf("%d ", p[i][j]);
//			//Ч��ͬ��
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print1(arr, 3, 5);//ֱ�Ӵ�������
//	print2(arr, 3, 5);//����������������λ�������Ԫ�������ĵ�һ��
//	//��arr��ʾ��һ�еĵ�ַ
//	return 0;
//}


//int test(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p ", &test);
//	printf("%p", test);
//	//���ں�����˵����û��&��ȡ�������Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &test;
//	int ret = (*pf)(2, 3);
//	printf("\n%d", ret);
//	return 0;
//}


//char* arr1[5];
//char* (*parr1)[5] = &arr1;


//void menu()
//{
//	printf("1.add\n");
//	printf("2.sub\n");
//	printf("3.mul\n");
//	printf("4.div\n");
//	printf("5.exit\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		int ret = 0;
//		switch (input)
//		{
//		case 1:
//			printf("enter two numbers:");//��������������ѡ��Ž�ÿ��case���棬���кܶ��������
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("enter two numbers:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("enter two numbers:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("enter two numbers:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//		{
//			printf("exit");
//			break;
//		}
//		default:
//			printf("error");
//			break;
//		}
//	} while (input);
//	return 0;
//}


////�ú���ָ�����������ࣨ�ص�������
//void menu()
//{
//	printf("1.add\n");
//	printf("2.sub\n");
//	printf("3.mul\n");
//	printf("4.div\n");
//	printf("0.exit\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////���·�װһ������
//void calc(int(*pf)(int, int))
////ͨ������ָ����ú������ܹ�ȥ��ÿ��case�е��������
////������Ҫ��ÿ��case����������������ֺ͵��ö�Ӧ�����Ĵ���
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("enter two numbers:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		int ret = 0;
//		switch (input)
//		{
//		case 1:
//			calc(Add);//���Ĳ�Ϊ����ָ��
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//		{
//			printf("exit");
//			break;
//		}
//		default:
//			printf("error");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	//arr���Ǻ���ָ������
//	//ֻ�в�����ͬ������������ͬ�ĺ������ܷŽ�ͬһ����
//	int i = 0;
//	int ret = 0;
//	for (; i < 4; i++)
//	{
//		ret = arr[i](3, 5);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//void menu()
//{
//	printf("1.add\n");
//	printf("2.sub\n");
//	printf("3.mul\n");
//	printf("4.div\n");
//	printf("0.exit\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };//ǰ��Ӹ�0��ʹ���ݶ�Ӧѡ��
//	//�ֳ�ת�Ʊ�
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		int ret = 0;
//		if (input == 0)
//		{
//			printf("exit");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("enter two numbers:");//��������������ѡ��Ž�ÿ��case���棬���кܶ��������
//			scanf("%d %d", &x, &y);
//			ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("error\n");
//		}
//	} while (input);
//	return 0;
//}//���ú���ָ������򻯴���


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	
	//ָ����ָ�������ָ��
	int (*(*pparr)[5])(int, int) = &parr;
	return 0;
}