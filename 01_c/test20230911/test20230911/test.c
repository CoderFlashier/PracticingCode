#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//��ѭ��


//#include<stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	printf("�豸����60���ػ������롰ȡ����ȡ���ػ�\n=>");
//	system("shutdown -s -t 60");
//	
//again:
//	scanf("%s", arr);
//
//	if (strcmp(arr, "ȡ��") == 0)
//	{
//		system("shutdown -a");
//		Sleep(500);
//		printf("ȡ���ػ�");
//		Sleep(1000);
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
//����ȡ����ȡ���ػ�



//void exchange(int x,int y)
//{
//	int z = 0;//�˴�Ϊ��ʽ����
//	z = x;//���ַ��֪x��a��ַ��ͬ���˴���xy��abʱ�����ı���
//	x = y;
//	y = z;
//}
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ�Ӱ��ʵ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�˴���ab��ʵ��
//	printf("����ǰ%d %d", a, b);
//	exchange(a, b);
//	printf("������%d %d",a, b);
//	return 0;
//}



void exchange(int *px, int *py)//����a��b�ĵ�ַ,Զ���ҵ�������a��b��������ϵ
{
	int z = *px;//�˴������ǽ�����ַ�����ǰѵ�ַ��ָ���ֵ������
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ%d %d", a, b);
	exchange(&a, &b);
	printf("������%d %d", a, b);
	return 0;
}