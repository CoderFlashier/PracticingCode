#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int num1 = 0;//��ʼ��
//	int num2 = 0;
//	//������������
//	scanf("%d %d",&num1,&num2);
//		//���
//		int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}\

//
//int main()
//{
//	char arr1[] =  "abcdef" ;
//	char arr2[] = { 'a', 'b', 'c','d','e','f','\0'};
//	
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	printf("\\wdnmd");
//	return 0;
//}

//int main()
//{
//	char input = 'y';
//	printf("�������\n");
//	printf("�Ƿ�úö��飨Y/N��\n");
//	scanf��"%c", &input��;
//	if��input == 'Y'��
//	{
//		printf("ǰ���ƽ�\n");
//	}
//	else
//	{
//		printf("������\n")
//		}
//	return 0;д����


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("�Ƿ�úö��飨1/0��\n");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("ǰ���ƽ�\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//
//}


//int main()
//{
//    int coding = 0;
//    printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("��֣�����к�offer\n");
//    }
//    else
//    {
//        printf("�������ؼ�������\n");
//    }
//    return 0;
//���صĴ���


int main()
{
	char input = 'y';//������ʼ��
	printf("�������\n");
	printf("�Ƿ�ú�ѧϰ?(y/n)=>>");//�������
	scanf("%c", &input);//�û��ش�

	if (input == 'y')//ѡ��
	{
		printf("ǰ���ƽ�");
	}
	else
	{
		printf("�ؼ�������");
	}
	return 0;
}