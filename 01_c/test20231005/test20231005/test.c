#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a < b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 7;
//	7[arr] = 8;
//	printf("%d", arr[7]);
//	return 0;
//}


//#include<string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu *ps)
//{
//	/*strcpy((*ps).name, "zhangsan");
//	(*ps).age = 20;
//	(*ps).score = 100.00;*/
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.00;
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %.2lf", ss.name, ss.age, ss.score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}


//int main()
//{
//	int a = 3 + 5 / 5;
//	printf("%d\n", a);//���4
//	int b = 2 + 3 + 4;//���ݼӷ��Ľ���ԣ�L-R),�����Ҽ���
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//�ضϣ�����00000101�������з�����������λռ��һ��λ����
//	char b = 126;
//	//00000000000000000000000001111110
//	//�ضϣ�����01111110
//	char c = a + b;
//	//a  -  00000101
//	//b  -  01111110
//	//����������a  -  00000000000000000000000000000101
//	//			b  -  00000000000000000000000001111110
//	//	 c = a + b -  00000000000000000000000010000011
//	//�ضϣ�c - 10000011
//	printf("%d", c);//���-125
//	//��ӡʱ���������� c - 11111111111111111111111110000011�����룩
//	//11111111111111111111111110000010�����룩
//	//10000000000000000000000001111101��ԭ�룩 --> -125
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;//182 - 1011 0110
//	short b = 0xb600;//46592 - 1011 0110 0000 0000
//	int c = 0xb6000000;//3,053,453,312 - 1011 0110 0000 0000 0000 0000 0000 0000
//	//a��b��������������������ԭֵ���
//	//��a��b�ĳ�unsinged����a��b�����
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2000; i <= n; i++)
//	{
//		if ((i % 7 == 0) && (i % 5 != 0))
//		{
//			if ( (i - 7)> 2000 &&(i - 7 ) % 5 == 0)
//			{
//				printf(",");
//			}
//			printf("%d", i);
//			if ((i + 7 <= n)&&(( i + 7 ) % 5 != 0))
//			{
//				printf(",");
//			}
//		}
//	}
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	a = 3 + 2 * 4 + 5;
//	//�˴��������ȼ�ֻ��ȷ��*�������+�磬������ȷ������+�ĸ���
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while ((scanf("%d %d", &a, &b)) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//float fib1(int x)
//{
//	int a = 0;
//	int b = 1;
//	float ret = 0;
//	int i = 0;
//	for (;i < x; i++)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//	}
//	return ret;
//}
//
//int fib2(int x)
//{
//	int a = 0;
//	int b = 1;
//	int ret = 0;
//	int i = 0;
//	for (; i - 1 < x; i++)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//	}
//	return ret;
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	float num1 = 0.0f;
//	int num2 = 0;
//	int i = 1;
//	float sum = 0.0;
//	for (; i <= input; i++)
//	{
//		num1 = fib1(i);//��ĸ
//		num2 = fib2(i);//����
//
//		float ret = num2 / num1;
//		sum = sum + ret;
//	}
//	printf("%.2f", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 1;
//	long long sum = 1;
//	for (; i <= input; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%lld", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int count = 0;
//	while (1)
//	{
//		if (input % 2 == 0)
//		{
//			input /= 2;
//			count++;
//		}
//		if (input % 2 != 0 && input != 1)
//		{
//			input = (input * 3 + 1) / 2;
//			count++;
//		}
//		if (input == 1)
//		{
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	
//	if (input % 4 == 0 && input % 100 != 0)
//	{
//		printf("YES");
//	}
//	else if (input % 400 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//
//int sum = 0;
//
//void test(int i)
//{
//	sum = sum + (i % 10) * (i % 10) * (i % 10);
//	if (i / 10 > 0)
//	{
//		test(i / 10);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		test(i);
//		if (sum == i)
//		{
//			printf("%d", i);
//		}
//		sum = 0;
//		test(i + 1);
//		if (i > 153)
//		{
//			if (sum == i + 1)
//			{
//				printf(",");
//			}
//		}
//		sum = 0;
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 1;
//	for (; i <= input; i++)
//	{
//		int j = 1;
//		for (; j <= i; j++)
//		{
//			printf("%dx%d=%d ", j, i, i * j);
//		}
//		if (i <= input - 1)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int r_t = 0;
//	int y_t = 0;
//	int g_t = 0;
//	scanf("%d %d %d", &r_t, &y_t, &g_t);//��һ�У����ú��̵�
//	int count = 0;
//	scanf("%d", &count);//�����ĺ��̵����͵�·��
//	long long time = 0;//�����ʱ��
//	int i = 0;
//	for (; i < count; i++)
//	{
//		int input1 = 0;
//		int input2 = 0;
//		scanf("%d %d", &input1, &input2);
//		if (input1 == 0)//����һ�ε�·
//		{
//			time = time + input2;
//		}
//		else if (input1 == 1)//���
//		{
//			time = time + input2;
//		}
//		else if (input1 == 2)//�Ƶ�
//		{
//			time = time + input2 + r_t;
//		}
//		else
//		{
//			;
//		}
//	}
//	printf("%lld", time);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int count = 0;
//	int is_cp = 0;
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			count++;
//			is_cp = 0;
//		}
//		if (input == 2)
//		{
//			is_cp++;
//			count = count + (2 * is_cp);
//		}
//		if (input == 0)
//		{
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	for (i = 2000; i <= input; i++)
//	{
//		if (i % 7 == 0 && i % 5 != 0)
//		{
//			printf("%d", i);
//		}
//		if ((i + 7) % 7 == 0 && (i + 7) <= input && (i + 7) % 5 != 0)
//		{
//			printf(",");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//void my_shift(char* p)
//{
//	(*p) = (*p) - 32;
//}
//
//int main()
//{
//	char arr[9] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	for (; i <= 7; i++)
//	{
//		if (arr[i] >= 97 && arr[i] <= 122)
//		{
//			my_shift(&arr[i]);
//		}
//	}
//	if ((strcmp(arr, "YA5F8ZQC")) == 0)
//	{
//		printf("��֤����ȷ");
//	}
//	else
//	{
//		printf("��֤���������������");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	int i = 0;
//	int j = sz - 1;
//	int count = 0;
//	while (i <= j)
//	{
//		if (arr[i] == arr[j])
//		{
//			;
//		}
//		else
//		{
//			count++;
//		}
//		i++;
//		j--;
//	}
//	if (count == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	int i = 0;
//	int count = 0;
//	if (sz % 2 == 0)
//	{
//		for (; i <= sz / 2; i++)
//		{
//			if (arr[i] != arr[sz - i - 1])
//			{
//				count++;
//			}
//		}
//	}
//	else
//	{
//		for (; i <= sz / 2; i++)
//		{
//			if (arr[i] != arr[sz - i - 1])
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int count(int num1, int num2)
//{
//	int i = num2;
//	int j = num1;
//	int x = abs(num1 - num2);
//	int ret = 0;
//	for (; i > 0; i--)
//	{
//		if (x > abs(i - j))
//		{
//			x = abs(i - j);
//			ret = i;
//		}
//		j += 2;
//	}
//	return ret;
//}
//
//int main()
//{
//	int cost = 0;
//	scanf("%d", &cost);
//	int num1 = 0;
//	int num2 = 0;
//	if (cost % 2 == 0)
//	{
//		num2 = cost / 2;
//		int ret = count(num1, num2);
//		num1 = (num2 - ret) * 2;
//		num2 = ret;
//	}
//	else
//	{
//		num2 = cost / 2;
//		num1 = 1;
//		int ret = count(num1, num2);
//		num1 = (num2 - ret) * 2 + 1;
//		num2 = ret;
//	}
//
//	printf("%d %d", num1, num2);
//	return 0;
//}


//#include<stdio.h>
//void fib(int x)
//{
//	int a = 1;
//	int b = 0;
//	int ret = 0;
//	int i = 0;
//	if (x == 1)
//	{
//		printf("1");
//	}
//	if (x >= 2)
//	{
//		printf("1,");
//		while (1)
//		{
//			ret = a + b;
//			b = a;
//			a = ret;
//			if (ret > x)
//			{
//				break;
//			}
//			printf("%d", ret);
//			if ((a + b) <= x)
//			{
//				printf(",");
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = 0;
//	fib(input);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void My_shift(int x, char arr2[100], int *j)
//{
//	while (x != 0)
//	{
//		arr2[(*j)] = x % 10 + 48;
//		(*j)++;
//		x /= 10;
//	}
//}
//
//void print(char arr2[100],int j)
//{
//	for (; j >= 0; j--)
//	{
//		int c = arr2[j] - 48;
//		switch (c)
//		{
//		case 1:
//			printf("yi");
//			break;
//		case 2:
//			printf("er");
//			break;
//		case 3:
//			printf("san");
//			break;
//		case 4:
//			printf("si");
//			break;
//		case 5:
//			printf("wu");
//			break;
//		case 6:
//			printf("liu");
//			break;
//		case 7:
//			printf("qi");
//			break;
//		case 8:
//			printf("ba");
//			break;
//		case 9:
//			printf("jiu");
//			break;
//		case 0:
//			printf("ling");
//			break;
//		}
//		if (j >= 1)
//		{
//			printf(" ");
//		}
//	}
//}
//
//int main()
//{
//	char arr[200] = { 0 };
//	scanf("%s", arr);
//	int count = 0;
//	int i = 0;
//	int sz = strlen(arr);
//	for (; i <= sz - 1; i++)
//	{
//		count = count + (arr[i] - 48);
//	}
//	int j = 0;
//	char arr2[100] = { 0 };
//	My_shift(count, arr2, &j);
//	print(arr2,j - 1);
//	return 0;
//}