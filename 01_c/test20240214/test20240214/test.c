#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
//��ѭ��
//��i = 10��ʼԽ�����0����arr[12]���i����    
//ֻ����x86�����²��ܸ���       
//ԭ��i��arr[12]��ͬһ�ڴ�ռ�
//i��arr���Ǿֲ����ݣ������ڴ��ջ��
//ջ���ڴ��ʹ��ϰ�ߣ���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//���������±����������ַ�ɵ͵��߱仯
//���i��arr֮�����ʵ��Ŀռ䣬���������Խ��������п��ܸ���i���Ӷ�������ѭ��
//i��arr֮��Ŀռ��Сȡ���ڱ���������vs2022��x86������Ϊ8���ֽ�
//���i��arr֮�󴴽����򲻻�����������



//strcpy

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr2[20] = "xxxxxxxxxxxx";
//	char arr1[] = "hello world";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//}
//ͨ�����ӣ�����strcpy���\0Ҳ����


////ģ��ʵ��strcpy
//#include<stdio.h>
//void my_strcpy(char* dest, char* src)
////�����ַ�����ַ
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//
//int main()
//{
//	char arr2[20] = "xxxxxxxxxxxx";
//	char arr1[] = "hello world";
//
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//}


//�Ľ�����
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)//��������const��֤src������Ϊ�����д������޸�
//����char*��Ϊ����ʽ���ʣ�ʹ�øú����ķ���ֵ������Ϊ���������Ĳ���������Ŀ��ռ����ʼ��ַ
{
	//���ԣ���srcΪNULL����ָ�룩ʱ���ᱨ��ָ�����󣨿������������Լ����жϵ���䣩
	assert(src != NULL);
	assert(dest != NULL);
	//��release�汾��assert�ᱻ�Ż�

	char* ret = dest;

	while (*dest++ = *src++);
	//һ����ֵ���ʽ���������ַ�ʱ����Ϊ0��������\0ʱ��Ϊ�٣�ֹͣѭ��
	//ͬʱ���ú���++�򻯴��룬while�Ĵ����ſ�ȥ

	return ret;
}


int main()
{
	char arr2[20] = "xxxxxxxxxxxx";
	char arr1[] = "hello world";

	my_strcpy(arr2, arr1);
	printf("%s", arr2);
}



//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	int num2 = 50;
//	num = 20;
//	//�����Ļᱨ��
//
//	int* p = &num;
//	*p = 20;
//	//�����Ŀ���
//
//	//1��const �� * ���
//	int const* p = &num;
//	*p = 20;
//	//����Ҳ�ᱨ��
//	//����int const* p��const��*��ߣ�����˼�ǣ�pָ��Ķ�����ͨ��p���ı��ˣ�����p������Ըı�
//	p = &num2;
//	//û������
//
//	 
//	//2��const �� * �ұ�
//	int* const p = &num;
//	//��˼��pָ��Ķ������ͨ��p�ı䣬���ǲ����޸�p����
//	*p = 0;
//	//��ʱnum���޸�
//	p = &num2;
//	//p���ܱ��޸�
//
//	//*�����ҿ��Ը���һ��const
//	const int* const p = &num;
//	p = &num2;
//	*p = 20;
//	//������
//
//	printf("%d", num);
//	return 0;
//}