#define _CRT_SECURE_NO_WARNINGS


//�ж�����������
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//����
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		//�ж�
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//				//�ȱ�
//			}
//			else if ((a == b) || (b == c) || (a == c))
//			{
//				printf("Lsosceles triangle!\n");
//				//����
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//				//��ͨ
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//			//������
//		}
//	}
//	return 0;
//}



//��������ַ���
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//	char arr[20] = { 0 };
//	//gets��C11������
//	gets(arr);
//
//	//ע��fgets��ѻ������е�\nҲ��ȡ���������ַ����У���gtes()�ǽ�\nȡ������
//	//�������ĳ���ǡ��ֻʣһ��λ�õĻ���\n���ᱻ�����ַ���
//	//���һ��λ��һ��������\0��
//	//fgets(arr, 18, stdin);
//	int length = (int)strlen(arr);
//	//strlen���㳤�Ȳ�����\0
//
//	reverse(arr, length);
//	printf("%s", arr);
//	return 0;
//}
//
//void reverse(char arr[], int length)
//{
//	char* pointer = arr + (length - 2);
//	//���ǵ�\nռ��λ��
//	//��\n���������ַ���ʱ������Ӧ����-1
//	char* st = arr;
//	//����ע�ⲻ��ֱ����arr���м��㣬��Ȼ�ַ������׵�ַ�ᱻ�ı�
//	int len = length;
//	while (pointer >= st)
//	{
//		char temp = *st;
//		*st = *pointer;
//		*pointer = temp;
//		st++;
//		pointer--;
//	}
//}




//#include <stdio.h>
//
//int main()
//{
//	char arr1[5] = { 0 };
//	char arr2[5] = { 0 };
//	fgets(arr1, 5, stdin);
//	fgets(arr2, 5, stdin);
//	
//	printf("arr1 = %s\n", arr1);
//	printf("arr2 = %s", arr2);
//	return 0;
//}



#include <stdio.h>

int main()
{
	char arr1[5] = { 0 };
	char arr2[5] = { 0 };
	gets(arr1);
	gets(arr2);

	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	return 0;
}