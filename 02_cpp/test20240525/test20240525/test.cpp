//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3,4 ,5, 6, 7, 8, 9 };
//
//	int* p = arr;
//	cout << *p << endl;
//
//	p++;//ָ��ָ����һλ
//	cout << *p << endl;
//	return 0;
//}


#include <iostream>
#include <string>
using namespace std;

struct Student//������
{
	//��Ա�б�
	string name;
	int age;
	double score;
}S3;//����ʱֱ�Ӵ�������

int main()
{
	//ͨ���Զ������ʹ����������
	//����ʱ��ֵ
	struct Student S1 = { "ZhangSan", 18, 66.6 };
	cout << S1.name << " " << S1.age << " " << S1.score << endl;

	//������ֵ
	struct Student S2;
	S2.name = "LiSi";
	S2.age = 19;
	S2.score = 77.7;
	cout << S2.name << " " << S2.age << " " << S2.score << endl;

	return 0;
}