#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 3)
//		if (b == 2)
//			printf("wdnmd");
//		else
//			printf("qz");
//	return 0;
//}
////�����


//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 3)
//	{
//		if (b == 2)
//			printf("wdnmd");
//	}
//	else
//			printf("qz");
//	return 0;
//}
////���qz


//int a = 3
//;
//int test()
//{
//	if (a == 2)
//		return 3;
//	return 4;
//}
//
//int main()
//{
//	int b = 0;
//
//	b = test();
//	printf("%d", b);
//	return 0;
//}
////���4


//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//����
//
//	int r = a % 2;
//	
//	if (0 == r)//�ж�
//		printf("%dΪż��", a);
//	else
//		printf("%dΪ����", a);
//	return 0;
//}


//���1-100֮�������
int main()
{
	int a = 0;
	while (a < 100)
	{
		a++;
		if (a % 2 == 1)
			printf("%d ", a);
	}
	return 0;
}