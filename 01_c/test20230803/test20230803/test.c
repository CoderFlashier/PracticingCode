#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//    printf("�������\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("��Ҫ����Ŭ���ô���\n");
//    }
//    if (line > 20000)
//        printf("��offer\n");
//    return 0;
//}
//���Ǳ��صĴ���


//int main()
//{
//	int line = 0;
//	printf("Ҫд������\n");
//	while (line <= 20000)
//		{
//			line++;
//			printf("����%d\n", line);
//		}
//		if (line >= 20000)
//		{
//			printf("д����");
//		}
//	return 0;
//}
//������

int main()
{
	char input = 'y';
	int line = 0;

	printf("д�����𣿣�y/n��\n");
	printf("���ѡ����=>");
	scanf("%c", &input);

	if (input == 'y')//����ط�һ��Ҫ����=����Ȼ����y����n���ǵ�whileѭ��
	{
		while (line <= 10)
		{
			printf("д%d\n", line);
			line++;
		}
		if (line >= 10)
		{
			printf("д����");
		}
	}
	else
	{
		printf("�Ǿͻ�ȥ������");
	}
	return 0;
}