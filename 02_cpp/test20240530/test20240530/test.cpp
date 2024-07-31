//#include <iostream>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Student student[3] = {
//		{"ZhangSan", 16, 66.6},
//		{"LiSi", 17, 77.7},
//		{"WangWu", 18, 18.8}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名：" << student[i].name << " " << "年龄：" << student[i].age << " " << "成绩：" << student[i].score << endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//	double score;
//};
//
//struct Teacher
//{
//	string id;
//	int age;
//	string name;
//	struct Student st;
//};
//
//int main()
//{
//	struct Teacher t1;
//	t1.name = "Zhaoliu";
//	t1.age = 30;
//	t1.id = "123456789";
//	t1.st.name = "ZhangSan";
//	t1.st.age = 18;
//	t1.st.score = 66.6;
//
//	cout << "教师：" << t1.name << " " << "工号：" << t1.id << " " << "年龄：" << t1.age << endl;
//	cout << "学生：" << t1.st.name << " " << "年龄：" << t1.st.age << " " << "成绩：" << t1.st.score << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//struct Student;//结构体的声明，需要放在调用它的函数前面
//void StudentPrint(Student stu);
//
////虽然有声明，但是定义得放在main函数前面
//struct Student
//{
//	string name;
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Student student[3] = {
//		{"ZhangSan", 16, 66.6},
//		{"LiSi", 17, 77.7},
//		{"WangWu", 18, 18.8}
//	};
//	
//	StudentPrint(student[0]);//传数值
//
//	return 0;
//}
//
//
//void StudentPrint(Student stu)
//{
//	cout << stu.name << " " << stu.age << " " << stu.score;
//	//这里需要用 . 访问
//}


////学生结构体定义
//struct student
//{
//    //成员列表
//    string name;  //姓名
//    int age;      //年龄
//    int score;    //分数
//};
//
////值传递
//void printStudent(student stu)
//{
//    stu.age = 28;
//    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//}
//
////地址传递
//void printStudent2(student* stu)
//{
//    stu->age = 28;
//    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
//}
//
//int main() {
//
//    student stu = { "张三",18,100 };
//    //值传递
//    printStudent(stu);
//    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//
//    cout << endl;
//
//    //地址传递
//    printStudent2(&stu);
//    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//
//    system("pause");
//
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//struct Student
//{
//	string name;
//	double score;
//};
//
//struct Teacher
//{
//	string name;
//	struct Student stu1;
//	struct Student stu2;
//	struct Student stu3;
//	struct Student stu4;
//	struct Student stu5;
//};
//
//void Teacher_StudentPrint(const Teacher* teacher);
//
//int main()
//{
//	struct Teacher teacherArr[3] = {
//		{"ZhangYi", {"ZhangEr", 11.1}, {"ZhangSan", 22.2}, {"ZhangSi", 33.3}, {"ZhangWu", 44.4}, {"ZhangLiu", 55.5}},
//		{"ZhaoYi", {"ZhaoEr", 11.1}, {"ZhaoSan", 22.2}, {"ZhaoSi", 33.3}, {"ZhaoWu", 44.4}, {"ZhaoLiu", 55.5}},
//		{"WangYi", {"WangEr", 11.1}, {"WangSan", 22.2}, {"WangSi", 33.3}, {"WangWu", 44.4}, {"WangLiu", 55.5}}
//	};
//
//	Teacher_StudentPrint(teacherArr);
//
//	return 0;
//}
//
//
//void Teacher_StudentPrint(const Teacher* teacher)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "教师：" << teacher[i].name << endl;
//		cout << "学生：" << teacher[i].stu1.name << "，" << "成绩：" << teacher[i].stu1.score << endl;
//		cout << "学生：" << teacher[i].stu2.name << "，" << "成绩：" << teacher[i].stu2.score << endl;
//		cout << "学生：" << teacher[i].stu3.name << "，" << "成绩：" << teacher[i].stu3.score << endl;
//		cout << "学生：" << teacher[i].stu4.name << "，" << "成绩：" << teacher[i].stu4.score << endl;
//		cout << "学生：" << teacher[i].stu5.name << "，" << "成绩：" << teacher[i].stu5.score << endl;
//		cout << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//struct Student
//{
//    string name;
//    int score;
//};
//struct Teacher
//{
//    string name;
//    Student sArray[5];//结构体中也可以包含结构体数组
//};
//
//void allocateSpace(Teacher tArray[], int len)
//{
//    string tName = "教师";
//    string sName = "学生";
//    string nameSeed = "ABCDE";
//    for (int i = 0; i < len; i++)
//    {
//        tArray[i].name = tName + nameSeed[i];
//
//        for (int j = 0; j < 5; j++)
//        {
//            tArray[i].sArray[j].name = sName + nameSeed[j];
//            tArray[i].sArray[j].score = rand() % 61 + 40;
//        }
//    }
//}
//
//void printTeachers(Teacher tArray[], int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        cout << tArray[i].name << endl;
//        for (int j = 0; j < 5; j++)
//        {
//            cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
//        }
//    }
//}
//
//int main() 
//{
//    srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>
//
//    Teacher tArray[3]; //老师数组
//    int len = sizeof(tArray) / sizeof(Teacher);
//    allocateSpace(tArray, len); //创建数据
//    printTeachers(tArray, len); //打印数据
//    system("pause");
//    return 0;
//}


#include <iostream>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

void Stru_Print(Hero hero[]);
void Bubble_Sort_Stru(Hero hero[]);

int main()
{
	struct Hero heroArr[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};

	Bubble_Sort_Stru(heroArr);
	Stru_Print(heroArr);

	return 0;
}


void Bubble_Sort_Stru(Hero hero[])
{
	struct Hero temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < (4 - i); j++)
		{
			if (hero[j].age > hero[j + 1].age)
			{
				temp = hero[j + 1];
				hero[j + 1] = hero[j];
				hero[j] = temp;
			}
		}
	}
}

void Stru_Print(Hero hero[])
{
	for (int i = 0; i < 5; i++)
		cout << hero[i].name << " " << hero[i].age << " " << hero->sex << endl;
}