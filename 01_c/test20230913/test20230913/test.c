#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>          


//int test(int x)//����leap year
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))//����ط����ܼӷֺ�
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (test(year))
//		{
//			printf("%d\n", year);
//			num++;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}



//int binary_search(int arr[], int x, int sz)//�˴���arrֻ��һ��ָ���������СΪ4��8bit��
//{
//	int right = 0;
//	int left = 0;
//	int mid = 0;
//
//	right = sz - 1;
//	
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;//��ֹ���
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int input = 0;
//	scanf("%d", &input);
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�˴�sz�����ں����ж��壬��Ϊ����ȥ�Ĳ�����������������Ԫ�ص�ַ����������������
//	//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ���ʱ�����׵�
//	
//	ret = binary_search(arr, input, sz);//�˴���������ֻ�贫������
//	if (ret == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ��ˣ���Ӧ�±�Ϊ%d", ret);
//	} 
//	//Լ�����ҵ������±꣬�Ҳ�������-1
//	return 0;
//
//}



//����bool�����������ͽ����жϵķ��أ�ʵ�ʾ��ǰ�0��1��װ��һ��
//#include<math.h>
//#include<stdbool.h>
//
//bool test(int x)
//{
//	int b = 0;
//	int flag = 1;
//
//	for (b = 2; b <= sqrt(x); b++)
//	{
//		if (x % b == 0)
//		{
//			flag = 0;
//			return false;
//		}
//	}
//		return true;
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
//		c += test(a);
//		if (test(a))
//		{
//			printf("%d\n", a);
//		}
//	}
//
//	printf("%d", c);
//	return 0;
//}


//#include<stdlib.h>
//
//int test()
//{
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		test();
//		num += test();
//		//system("cls");
//		printf("%d\n", num);
//	}
//	return 0;
//}
//ÿ����һ��test��num��һ


//void test(int *p)//���ô���
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		test(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);//���6
//	printf("%d\n", strlen("abcdef"));//���6
//	
//	printf("%d", printf("%d", printf("%d", 43)));//��������,���4321
//
//	return 0;
//}



int binary_search(int arr[], int x)
{
	int right = 0;
	int left = 0;
	int mid = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);

	right = sz - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int input = 0;
	scanf("%d", &input);
	int ret = 0;
	

	ret = binary_search(arr, input);
	if (ret == -1)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("�ҵ��ˣ���Ӧ�±�Ϊ%d", ret);
	}

	return 0;

}
//����д��