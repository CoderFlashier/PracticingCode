#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
////����������к���
//#define row 3
//#define col 3
//
//void exchange(int* arr);
//
//int main()
//{
//	//����
//	int arr[row][col] = { 0 };
//	int i = 0;
//	printf("������һ��%d��%d�����飺\n", row, col);
//	for (i = 0; i < (row * col); i++)
//		scanf("%d", &arr[i / col][i % col]);
//	printf("����ǰ������Ϊ��\n");
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%4d ", arr[i][j]);
//		printf("\n");
//	}
//	//�����к���
//	exchange(arr);
//	printf("�����������Ϊ��\n");
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%4d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;	
//}
//
//
////���鴫�μ���������ĵ�ַ�����践��ֵ
//void exchange(int* arr)
//{
//	for (int i = 0; i < row; i++)
//	{
//		//�ԶԽ���Ϊ����н����������൱�ڽ��������Σ�����ָ�ԭ��
//		for (int j = 0; j < i; j++)
//		{
//			int temp = *(arr + i * row + j);//����ָ��Ľ����ý��н���
//			*(arr + i * row + j) = *(arr + j * row + i);
//			*(arr + j * row + i) = temp;
//		}
//	}
//}


//T2
//#include <stdio.h>
//
//#define Length 51//�����ַ������ȣ���һλ���ڴ��'\0'
//void Char_Count(char* arr, int* capital, int* lowercase, int* blank, int* number, int* others);
//
//int main()
//{
//	char arr[Length] = { 0 };
//	printf("�����볤��С�� %d ���ַ�����", Length - 1);
//	//��fgets()������������
//	//����1Ϊ������������2Ϊ�ַ������볤�ȣ�����3Ϊ����Դ��stdinΪ��׼��������豸��
//	fgets(arr, Length, stdin);
//
//	//�������ڴ洢���ݵı���
//	int capital_nun = 0;
//	int lowercase_num = 0;
//	int blank_num = 0;
//	int number_num = 0;
//	int others_num = 0;
//
//	Char_Count(arr, &capital_nun, &lowercase_num, &blank_num, &number_num, &others_num);
//
//	printf("���ַ����й��д�д��ĸ %d ����Сд��ĸ %d �����ո� %d �������� %d ���������ַ� %d ����"
//		, capital_nun, lowercase_num, blank_num, number_num, others_num);
//	return 0;
//}
//
//
////����ָ��ʵ�ֶԶ�������ĸı�
//void Char_Count(char* arr, int* capital, int* lowercase, int* blank, int* number, int* others)
//{
//	//ѭ������������Ϊ����ȡ���ַ�����Ϊ�յ�λ�á�
//	for (char* p = arr; *p != '\0'; p++)
//	{
//		if (*p == '\n')
//			//fgets()�����Ὣ'\n'һ�������ַ���������ĩβ������Ҫ����ȥ�������ǽ�����Ϊѭ�����ж�������
//			continue;
//		else if (*p >= 'A' && *p <= 'Z')
//			// "++"��׺�������������ȼ�����"*"������ò���������Ҫ�����ŵ�������˳��
//			(*capital)++;
//		else if (*p >= 'a' && *p <= 'z')
//			(*lowercase)++;
//		else if (*p >= '0' && *p <= '9')
//			(*number)++;
//		else if (*p == ' ')
//			(*blank)++;
//		else
//			(*others)++;
//	}
//}



//T3
//#include <stdio.h>
//
//#define Length 51
//int My_Strcmp(char* str1, char* str2);
//
//int main()
//{
//	char str1[Length] = { 0 };
//	char str2[Length] = { 0 };
//	printf("�������ַ���1������С��%d����", Length - 1);
//	fgets(str1, Length, stdin);
//	printf("�������ַ���1������С��%d����", Length - 1);
//	fgets(str2, Length, stdin);
//
//	//�������ֵ
//	printf("%d", My_Strcmp(str1, str2));
//	return 0;
//}
//
//
//int My_Strcmp(char* str1, char* str2)
//{
//	char* p1 = str1;
//	char* p2 = str2;
//
//	//����Ƚ��ַ��������ֲ���ʱ����ѭ��
//	while (*p1 == *p2)
//	{
//		p1++;
//		p2++;
//		//����fgets()�����ַ����е�'\n'��Ϊ���
//		//���Ƚϵ������ַ�����ĩβʱ������0������ѭ�����������У�ֱ��Խ�����
//		if ((*p1 == '\n' && *p2 == '\n') || (*p1 == 0 && *p2 == 0))
//			return 0;
//	}
//	return ((*p1 - *p2) > 0 ? 1: -1);
//	//������ĳһ���ַ�����ĩβʱ������'\n'��ASCIIΪ10��С��ƽ��ʹ�õĸ����ַ�����˿���ֱ�ӽ��м�������
//}



//T4
//#include <stdio.h>
//#include <string.h>
//
//#define Length 100
//void Insert_str(char* str1, char* str2, int mark, int length_str1, int length_str2);
//
//int main()
//{
//	char str1[Length * 2] = { 0 };
//	char str2[Length] = { 0 };
//
//	printf("�������ַ���1������С��%d����", Length);
//	fgets(str1, Length, stdin);
//	int length_str1 = (int)strlen(str1) - 1;
//
//	//����K<=N����ʾ��������
//	printf("�������ַ���2������С��%d����", length_str1);
//	fgets(str2, length_str1 + 1, stdin);//����'\n'�Ŀռ�
//	int length_str2 = (int)strlen(str2) - 1;
//
//	int mark = 0;
//	//�������Ϸ���
//	while (1)
//	{
//		printf("����������λ�ã�");
//		scanf("%d", &mark);
//		if (mark < 0)
//			printf("����Ƿ������������룡\n");
//		else
//			break;
//	}
//
//	Insert_str(str1, str2, mark, length_str1, length_str2);
//	printf(str1);
//
//	return 0;
//}
//
//
//void Insert_str(char* str1, char* str2, int mark, int length_str1, int length_str2)
//{
//	char* p1 = str1;
//	char* p2 = str2;
//	//������λ�ô��ڵ���str1��ĩβʱ����str2���뵽str1��ĩβ
//	if (mark >= length_str1)
//	{
//		p1 += length_str1;
//		//��str2ƴ�ӵ�str1����'\n'Ϊ��ǣ�'\n'�����룩
//		while (*p2 != '\n')
//		{
//			*p1 = *p2;
//			p1++;
//			p2++;
//		}
//	}
//	//���������str1�м�ʱ������������ַ����ƣ�Ȼ��str2����
//	else if (mark < length_str1)
//	{
//		p1 += mark;
//		//����������ַ�����
//		/*
//		* memmove()
//		* ���ܣ�����ѡ��Χ���ַ����Ƶ�ָ����ַ
//		* 
//		* ����˵����
//		* ����1�����Ƶ�Ŀ��λ�ã��˴�Ϊ����㴦+str2�ĳ���
//		* ����2�����Ƶ���ʼλ�ã��˴�Ϊ����㴦
//		* ����3�����ƵĿռ�Ĵ�С���˴�Ϊ��Ҫ�ƶ����ַ���*ÿ���ַ���ռ�ռ�
//		*/
//		memmove(p1 + length_str2, p1, (length_str1 - mark) * (int)sizeof(char));
//		//����str2
//		while (*p2 != '\n')
//		{
//			char temp = *p1;
//			*p1 = *p2;
//			*p2 = temp;
//			p1++;
//			p2++;
//		}
//	}	
//}


//T5
#include <stdio.h>

//�궨�������С
#define Num_arr 10
void sort(int* arr, int n);

int main()
{
	int arr[Num_arr] = { 0 };
	//����
	printf("��������Ҫ�����%d��������", Num_arr);
	for (int i = 0; i < Num_arr; i++)
		scanf("%d", &arr[i]);

	//������Ϊ�к궨�壬����Ĳ���2���Բ��ã�
	sort(arr, Num_arr);

	//���
	for (int i = 0; i < Num_arr; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

void sort(int* arr, int n)
{
	int* min_mark = NULL;
	int* mark = NULL;
	for (int i = 0; i < Num_arr; i++)
	{
		//ÿ��ѭ���У���δ����Ĳ���ѡ����С�ķ���ǰ��
		min_mark = arr + i;
		for (int j = i; j < Num_arr; j++)
		{
			if (*(arr + j) < *min_mark)
				min_mark = arr + j;
		}
		int temp = *min_mark;
		*min_mark = *(arr + i);
		*(arr + i) = temp;
	}
}