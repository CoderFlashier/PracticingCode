#define _CRT_SECURE_NO_WARNINGS


//��������ַ���
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//    char arr[20] = { 0 };
//    //gets��C11������
//    //gets(arr);
//
//    //ע��fgets��ѻ������е�\nҲ��ȡ���������ַ����У���gtes()�ǽ�\nȡ������
//    //�������ĳ���ǡ��ֻʣһ��λ�õĻ���\n���ᱻ�����ַ���
//    //���һ��λ��һ��������\0��
//    fgets(arr, 18, stdin);
//    int length = (int)strlen(arr);
//    //strlen���㳤�Ȳ�����\0
//
//    reverse(arr, length);
//    printf("%s", arr);
//    return 0;
//}
//
//void reverse(char arr[], int length)
//{
//    char* pointer = arr + (length - 2);
//    //���ǵ�\nռ��λ��
//    //��\n���������ַ���ʱ������Ӧ����-1
//    int len = length;
//    while (pointer >= arr)
//    {
//        char temp = *arr;
//        *arr = *pointer;
//        *pointer = temp;
//        arr++;
//        pointer--;
//    }
//}

//��������ַ���
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//    char arr[20] = { 0 };
//    //gets��C11������
//    //gets(arr);
//
//    //ע��fgets��ѻ������е�\nҲ��ȡ���������ַ����У���gtes()�ǽ�\nȡ������
//    //�������ĳ���ǡ��ֻʣһ��λ�õĻ���\n���ᱻ�����ַ���
//    //���һ��λ��һ��������\0��
//    fgets(arr, 18, stdin);
//    int length = (int)strlen(arr);
//    //strlen���㳤�Ȳ�����\0
//
//    reverse(arr, length);
//    printf("%s", arr);
//    return 0;
//}
//
//void reverse(char arr[], int length)
//{
//    char* pointer = arr + (length - 2);
//    //���ǵ�\nռ��λ��
//    //��\n���������ַ���ʱ������Ӧ����-1
//    int len = length;
//    while (pointer >= arr)
//    {
//        char temp = *arr;
//        *arr = *pointer;
//        *pointer = temp;
//        arr++;
//        pointer--;
//    }
//}



//��������ַ���
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//    char arr[20] = { 0 };
//
//    fgets(arr, 18, stdin);
//    int length = (int)strlen(arr);
//    reverse(arr, length);
//
//    printf("%s", arr);
//    return 0;
//}
//
//void reverse(char arr[], int length)
//{
//    char* pointer = arr + (length - 2);
//    int len = length;
//    while (pointer >= arr)
//    {
//        char temp = *arr;
//        *arr = *pointer;
//        *pointer = temp;
//        arr++;
//        pointer--;
//    }
//}


//���a + aa + aaa + aaaa + aaaaa
#include <stdio.h>
#include <math.h>

int main()
{
	int input = 0;
	scanf("%d", &input);
	int length = 0;
	int temp_input = input;
	while (temp_input)
	{
		length++;
		temp_input /= 10;
	}
	//printf("%d", length);

	int sum = 0;
	int temp = input;

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		sum += temp;
		temp = temp * pow(10, length) + input;
	}
	
	printf("%d", sum);
	return 0;
}

