#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void wdnmd(int a[])
{
	printf("%zu\n", sizeof(a));//�����ڴ��ε�ʱ�򴫵ݵ���������Ԫ�صĵ�ַ��Ӧ����ָ����գ��˴�Ϊ��ָ��Ĵ�С
	//�˴���x86���������4��x64���8
}
int main()
{
	int a[10] = { 0 };
	printf("%zu\n", sizeof(a));//��������
	printf("%zu\n", sizeof(a[1]));//�ڶ���Ԫ�صĴ�С
	wdnmd(a);
	return 0;
}
//���40��4��8

  