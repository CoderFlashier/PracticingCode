#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڵĿռ䴢��10
//	//&a;//ȡa�ĵ�ַ
//	printf("%p\n", &a);//��ӡa�ĵ�ַ
//	int* p = &a;//��ʱpΪָ�����������a�ĵ�ַ
//	
//	printf("%d\n", a);//���10
//	*p = 11;//p�д�����a�ĵ�ַ����ͨ��p�ҵ�a
//	printf("%d", a);//���11
//	
//	return 0;
//}


//int main()
//{
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(char*));
//	return 0;
//}//���ֵ��x86�����¾�Ϊ4����x64������Ϊ8


//struct human
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];//�ṹ��ĳ�Ա
//};//����ֺŲ��ܶ�
//
//void print(struct human* a)
//{
//		printf("%s %d %s %s\n",(*a).name,(*a).age,(*a).sex,(*a).tele);
//		
//		printf("%s %d %s %s", a->name, a->age, a->sex, a->tele);
//}
//
//int main()
//{
//	struct human r = { "ZhangSan",18,"male","114514" };//�������Ͳ���ʼ��
//	printf("%s %d %s %s\n", r.name, r.age, r.sex, r.tele);//���˳�򣬲����Զ�ƥ��
//	
//	print(&r); //��ϵ�ַ+����,�൱�鷳
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d", &a, &b);
//
//	c = a / b; //�õ���
//	d = a % b;//�õ�����
//	
//	printf("%d % d", c, d);
//	return 0;
//}



struct human
{
	char name[20];
	char sex[6];
	int age;
	int tele;
};

int main()
{
	struct human a = { "ZhangSan","male",18,114514 };
	printf("name sex age tele\n");
	
	scanf("%s %s %d %d", &a.name, &a.sex, &a.age, &a.tele);
	
	printf("%s %s %d %d", a.name, a.sex, a.age, a.tele);
	return 0;
}