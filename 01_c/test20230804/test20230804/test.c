#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 40;
//	int c = 212;
//	
//	int b = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", b);//����ط���bǰ�治�ܼ�&����Ȼ�����ֵΪ-876873116
//	return 0;
//}
////��ȷ��ֵΪ656

//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);//ע������ط�������%d֮�䲻���С���������Ȼ�����ֻ�ǵ�һ����
//	int sum = add(n1,n2);
//	printf("%d", sum);
//	return 0;
//}
//������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//����
//
//	if (a > b)//�ȴ�С��ѡ��
//	{
//		printf("%d�Ƚϴ�",a);
//	}
//	else
//	{
//		printf("%d�Ƚϴ�", b);
//	}
//	return 0;
// }
//������


//int Max(int x, int y)//дһ���Ƚϴ�С�ĺ���
//{
//	int m = 0;
//	if (x > y)
//	{
//		m = x;
//	}
//	else
//	{
//		m = y;
//	}
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);//����ط�������ڶ���%d�����һ��\n�ͻ��޷����
//	int r = Max(a, b);//���ú���
//	
//	printf("%d\n", r);
//	return 0;
//}
//������


//int Max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //��2�������Ľϴ�ֵ
//    int r = Max(a, b);
//    printf("%d\n", r);
//
//    return 0;
//}
//���صĴ���

//int hs(int x)
//{
//	if (x > 0)
//		return 1;
//	else if (x < 0)
//		return -1;
//	else
//		return 0;
//}
//
//int mian()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	int r = hs(a);//����ѡ����
//	
//	printf("%d", r);
//	return 0;
//}
//������ʾ�޷��������ⲿ����main

//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x > 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//
//	printf("%d", y);
//	return 0;
//}

//int hs(int x)
//{
//	int y = 0;
//
//	if (x > 0)
//		y = 1;
//	else if (x < 0)
//		y = -1;
//	else
//		y = 0;
//	
//	return y;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//ע��Ҫдȡ��ַ��&����Ȼ���Ե�ʱ��VS���ᱨ�����ǻᱨdebug����
//
//	int r = hs(a);
//	printf("%d", r);
//	
//	return 0;
//}
//������

int main()
{
	int a = 0;
	if (a)
	{
		printf("hehe");
	}
	return 0;
}