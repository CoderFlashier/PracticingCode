#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////����һ����Ϊperson�Ľṹ��
//struct prson
//{
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int height;
//}p1, p2;//����ķֺŲ���ȥ�����ֺ�ǰ��ɼӿɲ��ӱ�����������ж�����������������ӣ�
////�����Ҫ�ж����������Ҫ�Ӷ�����
////����p1��p2��ʹ��person�ṹ�崴���ı�������Ϊȫ�ֱ�������˲��Ƽ��ڴ˴���





struct person
{
	char name[20];
	char tele[20];
	char sex[10];
	int height;
}; 

struct student
{
	struct person p;//������Բ��ӽṹ�����������(����p3����������ʵ�ʱ��Ҫ���Ͻṹ��
	int No;
	float grade;
};

//���մ������ĵ�ַ
void print2(struct person* p)
{
	printf("%s %s %s %d", p->name, p->tele, p->sex, p->height);
}

int main()
{
	struct person p1 = { "zhangsan","123456789123","male",180 };
	//�ṹ������Ĵ����ͳ�ʼ��
	struct student p2 = { {"lisi","987654321123","female",170},02,200.0 };
	//����Ĵ����ſ���ȥ��
	//���нṹ��Ľṹ������Ĵ����ͳ�ʼ��
	//ע�⣺���������ڴ��в��ܾ�ȷ���棬���ܻ������

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
	printf("%s %s %s %d %d %.2f\n", p2.p.name, p2.p.tele, p2.p.sex, p2.p.height, p2.No, p2.grade);
	//���������������һ���ṹ���ʱ��д�˱�����(����p3��������Ҫ���ϣ���p2.p3.name

	print2(&p1);
	return 0;
}