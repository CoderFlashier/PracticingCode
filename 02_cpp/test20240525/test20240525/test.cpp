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
//	p++;//指针指向下一位
//	cout << *p << endl;
//	return 0;
//}


#include <iostream>
#include <string>
using namespace std;

struct Student//类型名
{
	//成员列表
	string name;
	int age;
	double score;
}S3;//定义时直接创建变量

int main()
{
	//通过自定义类型创建具体变量
	//定义时赋值
	struct Student S1 = { "ZhangSan", 18, 66.6 };
	cout << S1.name << " " << S1.age << " " << S1.score << endl;

	//单独赋值
	struct Student S2;
	S2.name = "LiSi";
	S2.age = 19;
	S2.score = 77.7;
	cout << S2.name << " " << S2.age << " " << S2.score << endl;

	return 0;
}