#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	
//	switch (day)
//	{
//	case 1:
//		printf("\n����һ");
//		break;//����switch��� 
//	case 2:
//		printf("\n���ڶ�");
//		break;
//	case 3:
//		printf("\n������");
//		break;
//	case 4:
//		printf("\n������");
//		break;
//	case 5:
//		printf("\n������");
//		break;
//	case 6:
//		printf("\n������");
//		break;
//	case 7:
//		printf("\n������");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		case 2:
//		case 3:
//		case 4:
//	case 5:
//		printf("\nweekday");
//		break;
//	case 6:
//	case 7:		
//		printf("\nweekend");
//		break;
//	default:
//		printf("error");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	while (num<=10)
//	{
//		printf("wdnmd%d\n", num);
//		num++;
//		if (num == 6)
//			break;
//	}
//	return 0;
//}//���1-5



//int main()
//{
//	int num = 0;
//	while (num <= 10)
//	{
//		if (num == 6)
//			continue;
//
//		printf("wdnmd%d\n", num);
//		num++;
//	}
//	return 0;
//}//����Ῠ��


//int main()
//{
//	int a = 0;
//	a = (getchar());//getchar�����õ��ľ���������ַ���Ӧ��ASCIIֵ�������int������char
//	if (a != EOF)
//	{
//		printf("wdnmd\t%c", a);
//	}
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	while ((a=getchar()) != EOF)//�ã�����Ԫ�س�Ϊһ������
//	{
//		printf("%c", a);
//	}
//	return 0;
//}//����ʲô�ַ������ʲô�ַ�������Ctrl+Zֹͣ����


int main()
{
	char password[20] = { 0 };
	printf("����������>");
	scanf("%s", password);//ֻ��ȡ\n��ո�ǰ���ַ���

	//getchar();//ֻ�ܶ�ȡһ���ַ�,�����������ڵ�һ���ַ����������пո񣬾Ͳ�����ȫ����

	//����ѭ����������
	int a = 0;
	while ((a = getchar()) != '\n')
	{
		;//����©
	}

	printf("��ȷ������(Y/N)>%s\n",password);

	int ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ��\n");
	}
	else
	{
		printf("ȡ��\n");
	}


	return 0;
}

