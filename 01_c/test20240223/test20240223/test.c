#define _CRT_SECURE_NO_WARNINGS


//����bug��VS��x86����������
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("wdnmd\n");
//	}
//	return 0;
//}
//��release�����²��������ѭ�������Ǵ�ӡ13��


#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", arr);
	printf("%p\n", &i);
	/*for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("wdnmd\n");
	}*/
	return 0;
}
//���Է��֣���Debug�汾�£�i�ĵ�ַ��arr���棻��Release�汾��i�ĵ�ַ��arrǰ��