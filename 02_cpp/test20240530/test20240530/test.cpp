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
//		cout << "������" << student[i].name << " " << "���䣺" << student[i].age << " " << "�ɼ���" << student[i].score << endl;
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
//	cout << "��ʦ��" << t1.name << " " << "���ţ�" << t1.id << " " << "���䣺" << t1.age << endl;
//	cout << "ѧ����" << t1.st.name << " " << "���䣺" << t1.st.age << " " << "�ɼ���" << t1.st.score << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//struct Student;//�ṹ�����������Ҫ���ڵ������ĺ���ǰ��
//void StudentPrint(Student stu);
//
////��Ȼ�����������Ƕ���÷���main����ǰ��
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
//	StudentPrint(student[0]);//����ֵ
//
//	return 0;
//}
//
//
//void StudentPrint(Student stu)
//{
//	cout << stu.name << " " << stu.age << " " << stu.score;
//	//������Ҫ�� . ����
//}


////ѧ���ṹ�嶨��
//struct student
//{
//    //��Ա�б�
//    string name;  //����
//    int age;      //����
//    int score;    //����
//};
//
////ֵ����
//void printStudent(student stu)
//{
//    stu.age = 28;
//    cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
//}
//
////��ַ����
//void printStudent2(student* stu)
//{
//    stu->age = 28;
//    cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
//}
//
//int main() {
//
//    student stu = { "����",18,100 };
//    //ֵ����
//    printStudent(stu);
//    cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
//
//    cout << endl;
//
//    //��ַ����
//    printStudent2(&stu);
//    cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
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
//		cout << "��ʦ��" << teacher[i].name << endl;
//		cout << "ѧ����" << teacher[i].stu1.name << "��" << "�ɼ���" << teacher[i].stu1.score << endl;
//		cout << "ѧ����" << teacher[i].stu2.name << "��" << "�ɼ���" << teacher[i].stu2.score << endl;
//		cout << "ѧ����" << teacher[i].stu3.name << "��" << "�ɼ���" << teacher[i].stu3.score << endl;
//		cout << "ѧ����" << teacher[i].stu4.name << "��" << "�ɼ���" << teacher[i].stu4.score << endl;
//		cout << "ѧ����" << teacher[i].stu5.name << "��" << "�ɼ���" << teacher[i].stu5.score << endl;
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
//    Student sArray[5];//�ṹ����Ҳ���԰����ṹ������
//};
//
//void allocateSpace(Teacher tArray[], int len)
//{
//    string tName = "��ʦ";
//    string sName = "ѧ��";
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
//            cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
//        }
//    }
//}
//
//int main() 
//{
//    srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>
//
//    Teacher tArray[3]; //��ʦ����
//    int len = sizeof(tArray) / sizeof(Teacher);
//    allocateSpace(tArray, len); //��������
//    printTeachers(tArray, len); //��ӡ����
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
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
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