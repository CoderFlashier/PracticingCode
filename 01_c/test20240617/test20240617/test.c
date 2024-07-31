#define _CRT_SECURE_NO_WARNINGS


//T1
//#include <stdio.h>
//
////定义数组的行和列
//#define row 3
//#define col 3
//
//void exchange(int* arr);
//
//int main()
//{
//	//输入
//	int arr[row][col] = { 0 };
//	int i = 0;
//	printf("请输入一个%d×%d的数组：\n", row, col);
//	for (i = 0; i < (row * col); i++)
//		scanf("%d", &arr[i / col][i % col]);
//	printf("交换前的数组为：\n");
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%4d ", arr[i][j]);
//		printf("\n");
//	}
//	//交换行和列
//	exchange(arr);
//	printf("交换后的数组为：\n");
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
////数组传参即传递数组的地址，无需返回值
//void exchange(int* arr)
//{
//	for (int i = 0; i < row; i++)
//	{
//		//以对角线为界进行交换，否则相当于交换了两次，数组恢复原样
//		for (int j = 0; j < i; j++)
//		{
//			int temp = *(arr + i * row + j);//利用指针的解引用进行交换
//			*(arr + i * row + j) = *(arr + j * row + i);
//			*(arr + j * row + i) = temp;
//		}
//	}
//}


//T2
//#include <stdio.h>
//
//#define Length 51//定义字符串长度，多一位用于存放'\0'
//void Char_Count(char* arr, int* capital, int* lowercase, int* blank, int* number, int* others);
//
//int main()
//{
//	char arr[Length] = { 0 };
//	printf("请输入长度小于 %d 的字符串：", Length - 1);
//	//用fgets()函数进行输入
//	//参数1为变量名，参数2为字符串输入长度，参数3为输入源（stdin为标准输入输出设备）
//	fgets(arr, Length, stdin);
//
//	//定义用于存储数据的变量
//	int capital_nun = 0;
//	int lowercase_num = 0;
//	int blank_num = 0;
//	int number_num = 0;
//	int others_num = 0;
//
//	Char_Count(arr, &capital_nun, &lowercase_num, &blank_num, &number_num, &others_num);
//
//	printf("该字符串中共有大写字母 %d 个，小写字母 %d 个，空格 %d 个，数字 %d 个，其它字符 %d 个。"
//		, capital_nun, lowercase_num, blank_num, number_num, others_num);
//	return 0;
//}
//
//
////利用指针实现对多个变量的改变
//void Char_Count(char* arr, int* capital, int* lowercase, int* blank, int* number, int* others)
//{
//	//循环跳出的条件为“读取到字符串中为空的位置”
//	for (char* p = arr; *p != '\0'; p++)
//	{
//		if (*p == '\n')
//			//fgets()函数会将'\n'一并存入字符串（放在末尾），需要将其去掉（或是将其作为循环的判断条件）
//			continue;
//		else if (*p >= 'A' && *p <= 'Z')
//			// "++"后缀自增操作符优先级高于"*"间接引用操作符，需要用括号调整操作顺序
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
//	printf("请输入字符串1（长度小于%d）：", Length - 1);
//	fgets(str1, Length, stdin);
//	printf("请输入字符串1（长度小于%d）：", Length - 1);
//	fgets(str2, Length, stdin);
//
//	//输出返回值
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
//	//逐个比较字符，当出现差异时跳出循环
//	while (*p1 == *p2)
//	{
//		p1++;
//		p2++;
//		//利用fgets()存入字符串中的'\n'作为标记
//		//当比较到两个字符串的末尾时，返回0，否则循环将继续运行，直到越界访问
//		if ((*p1 == '\n' && *p2 == '\n') || (*p1 == 0 && *p2 == 0))
//			return 0;
//	}
//	return ((*p1 - *p2) > 0 ? 1: -1);
//	//当到达某一个字符串的末尾时，由于'\n'的ASCII为10，小于平常使用的各类字符，因此可以直接进行减法运算
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
//	printf("请输入字符串1（长度小于%d）：", Length);
//	fgets(str1, Length, stdin);
//	int length_str1 = (int)strlen(str1) - 1;
//
//	//根据K<=N，提示输入条件
//	printf("请输入字符串2（长度小于%d）：", length_str1);
//	fgets(str2, length_str1 + 1, stdin);//保留'\n'的空间
//	int length_str2 = (int)strlen(str2) - 1;
//
//	int mark = 0;
//	//检查输入合法性
//	while (1)
//	{
//		printf("请输入插入的位置：");
//		scanf("%d", &mark);
//		if (mark < 0)
//			printf("输入非法，请重新输入！\n");
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
//	//当插入位置大于等于str1的末尾时，将str2插入到str1的末尾
//	if (mark >= length_str1)
//	{
//		p1 += length_str1;
//		//将str2拼接到str1后，以'\n'为标记（'\n'不参与）
//		while (*p2 != '\n')
//		{
//			*p1 = *p2;
//			p1++;
//			p2++;
//		}
//	}
//	//当插入点在str1中间时，将插入点后的字符后移，然后将str2插入
//	else if (mark < length_str1)
//	{
//		p1 += mark;
//		//将插入点后的字符后移
//		/*
//		* memmove()
//		* 功能：将所选范围的字符复制到指定地址
//		* 
//		* 参数说明：
//		* 参数1：复制的目标位置，此处为插入点处+str2的长度
//		* 参数2：复制的起始位置，此处为插入点处
//		* 参数3：复制的空间的大小，此处为需要移动的字符数*每个字符所占空间
//		*/
//		memmove(p1 + length_str2, p1, (length_str1 - mark) * (int)sizeof(char));
//		//插入str2
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

//宏定义数组大小
#define Num_arr 10
void sort(int* arr, int n);

int main()
{
	int arr[Num_arr] = { 0 };
	//输入
	printf("请输入需要排序的%d个整数：", Num_arr);
	for (int i = 0; i < Num_arr; i++)
		scanf("%d", &arr[i]);

	//排序（因为有宏定义，这里的参数2可以不用）
	sort(arr, Num_arr);

	//输出
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
		//每轮循环中，从未排序的部分选出最小的放在前面
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