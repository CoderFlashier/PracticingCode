#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &c); 
//
//	a = sizeof(arr) / sizeof(arr[0]);
//	for (b = 0; b < a; b++)
//	{
//		if (arr[b] == c)
//		{
//			printf("�У��±���%d", b);
//			break;
//		}
//	}
//	if (b == a)
//	{
//		printf("��");
//	}
//	return 0;
//}
//�������������е����֣�ԭʼ���ң���������һ�����Ƚϣ�Ч�ʼ���



//int main()
//{
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	i = sizeof(arr) / sizeof(arr[0]);
//	right = i - 1;
//	
//	int a = 0;
//	scanf("%d", &a);//����
//
//	while (left <= right)
//	{
//		mid = (right - left) / 2 + left;//��ʱ���ᳬ����Χ
//	//�˴�����mid = (left + right) / 2;//��mid���ܷ���ѭ������
//	//��left��right��ֵ����������һ��int�ܱ������ֵ���ᵼ�´���
//
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("��,�±���%d", mid);//���
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("��");
//	}
//	return 0;
//}
////���ö��ַ����۰���ң������������У�������Ϊ���̣�����ʹ��2��32�η������֣�Ҳ���ֻ��Ҫ����32�Σ�


//void test()
//{
//	static b = 1;
//	b++;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	int a = 0;
//
//	while (a < 5)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}


//#include<string.h>//strlen����
//#include<windows.h>//Sleep����
//#include<stdlib.h>//clsָ��
//
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "############";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//�ַ�����\0�㳤��
//
//	while (left <= right)
//	{
//		system("cls");//�����Ļ��ʵ��һ�е�Ч��
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);//����ͣ��
//		left++;
//		right--;
//	}
//	return 0;
//}


#include<string.h>//strcmp
int main()
{
	int a = 0;
	char password[20] = { 0 };

	for (a = 0; a < 3; a++)
	{
		printf("��=>");
		scanf("%s", password);//���������ǵ�ַ���˴����Բ�ȡ��ַ
		//�Ƚ������ַ����Ƿ���ȣ�������==��eg��password == "123456"
		//��Ӧ��ʹ�ú���strcmp  (strling compair)
		if (strcmp(password,"123456") == 0)//��������ķ���ֵ��0�������ַ������
		{
			printf("oh yes!");
			break;
		}
		else
		{
			printf("error\n");
		}
	}
	if (a == 3)
	{
		printf("wdnmd");
	}
	return 0;
}