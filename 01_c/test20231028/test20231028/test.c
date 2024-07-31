#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//return (*(int*)e1 - *(int*)e2);
//	//�ų�����
//	return (*(int*)e2 - *(int*)e1);
//	//�ųɽ�������෴���߼�
//	//��Ϊ����Ҫ��ķ���ֵ��> = < 0 �����Կ���ֱ�ӷ��������ֵ
//}
//
//
//int main()
//{
//	int arr[] = { 10,9,8,6,7,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<string.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	//strcmp����ASCII������Ƚ�
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;
//}
//void Stu_cmp()
//{
//	struct Stu s[] = {{"zhangsan",15},{"lisi",16},{"wangwu",14}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_name);
//	//���������Ƚ�
//	qsort(s, sz, sioeof(s[0]), cmp_age);
//	//��������Ƚ�
//}
//
//int main()
//{
//	Stu_cmp();
//	return 0;
//}



//����ָ��ģ��qsort������дһ�������ڸ������ݵ�ð������
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
	//����������ָ�뻻��ԭ�������Ͷ�Ӧ��ָ�루�˴�Ϊint�����ٽ����ý��бȽ�
}

void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	//Ϊ����Ӧ��ͬ���͵����ݣ�����ͨ�����ֽ�һһ��Ӧ���н���ʵ�����ݵĽ���
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	//�������������void*�����м����ԣ���const���Σ���ֹ���ݱ��۸�
	int i = 0;
	for (; i < sz; i++)
	{
		int j = 0;
		int mark = 1;//�����ж������Ƿ��б䶯
		for (; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			//�����base��������׵�ַ����ת��Ϊchar����Ϊchar����С�ĵ�λ��ͨ�������ݴ�С�ķ�ʽ������Ӧ��ͬ����
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				//���������ݽ��н������˴���Ҫ�����׵�ַ�����ݴ�С
				mark = 0;
			}
		}
		if (mark == 1)
			//�����һ��ð�������Ժ�����û�� ���޸ģ�˵����ǰ���ݵ�������ȷ����������ж�
		{
			break;
		}
	}
}

void bubble()
{
	int arr[] = { 0,8,4,6,2,1,4,5,6,7,8,5 };
	//�����������������
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�����Ҫ��������ݴ�С
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	//���Σ�����Ϊ����Ҫ��������顢���ݴ�С���������ݴ�С�����ڵ�ǰ������������ĺ���
	//������Ҫ�Ƚϵ��������Ͳ�ͬʱ��ֻ��Ҫ�ṩ��Ӧ�ıȽϺ������ɣ������õĺ�������

	//��ӡ���
	int j = 0;
	for (; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
}

int main()
{
	bubble();
	return 0;
}