#include <iostream>
#include <string>
using namespace std;

#define MAX_NUM 100

void Menu();//显示菜单

//联系人结构体
struct contacts
{
	string name;
	int sex = 0;
	int age = 0;
	string phone_number;
	string address;
};

//通讯录结构体
struct Addressbooks
{
	struct contacts personArr[MAX_NUM];//通讯录数组
	int num = 0;//人员个数
};

void Add_person(struct Addressbooks* abs);
void Print_person(struct Addressbooks* abs);
int Locate_person(struct Addressbooks* abs, string name);
void Delet_person(struct Addressbooks* abs);
void Find_person(struct Addressbooks* abs);
void Change_person(struct Addressbooks* abs);
void Clean_abs(struct Addressbooks* abs);

int main()
{
	struct Addressbooks abs;
	abs.num = 0;

	int select_mode = 0;
	while (true)
	{
		Menu();
		cin >> select_mode;

		switch (select_mode)
		{
		case 1://添加
			system("cls");
			Add_person(&abs);
			break;
		case 2://显示
			system("cls");
			Print_person(&abs);
			break;
		case 3://删除
			system("cls");
			Delet_person(&abs);
		case 4://查找
			system("cls");
			Find_person(&abs);
			break;
		case 5://修改
			system("cls");
			Change_person(&abs);
			break;
		case 6://清空
			system("cls");
			Clean_abs(&abs);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			cout << "请重新输入" << endl;
			break;
		}
	}
	
	return 0;
}


//打印菜单
void Menu()
{
	cout << "****************************" << endl;
	cout << "********1.添加联系人*******" << endl;
	cout << "********2.显示联系人********" << endl;
	cout << "********3.删除联系人********" << endl;
	cout << "********4.查找联系人********" << endl;
	cout << "********5.修改联系人********" << endl;
	cout << "********6.清空联系人********" << endl;
	cout << "********0.退出通讯录********" << endl;
	cout << "****************************" << endl;
}


//添加联系人
void Add_person(struct Addressbooks *abs)
{
	//判断是否存满
	if (abs->num == MAX_NUM)
		cout << "通讯录已满，无法添加" << endl;
	else
	{
		//添加联系人
		cout << "请输入姓名：" << endl;
		cin >> abs->personArr[abs->num].name;
		
		while (true)
		{
			cout << "请输入性别：1.男   2.女" << endl;
			cin >> abs->personArr[abs->num].sex;
			if (abs->personArr[abs->num].sex == 1 || abs->personArr[abs->num].sex == 2)
				break;
			else
				cout << "输入有误，请重新输入" << endl;
		}

		while (true)
		{
			cout << "请输入年龄：" << endl;
			cin >> abs->personArr[abs->num].age;
			if (abs->personArr[abs->num].age >= 0)
				break;
			else
				cout << "输入有误，请重新输入" << endl;
		}

		cout << "请输入联系电话：" << endl;
		cin >> abs->personArr[abs->num].phone_number;

		cout << "请输入地址：" << endl;
		cin >> abs->personArr[abs->num].address;

		abs->num++;//更新人数
		cout << "添加成功，";
	}
	system("pause");
	system("cls");//清屏
}


//显示联系人
void Print_person(struct Addressbooks* abs)
{
	//判断人数
	if (abs->num == 0)
		cout << "通讯录为空！" << endl;
	else
	{
		for (int i = 0; i < abs->num; i++)
		{
			cout << "姓名：" << abs->personArr[i].name << "\t";
			abs->personArr[i].sex == 1? cout << "性别：男\t": cout << "性别：女 \t";
			cout << "年龄：" << abs->personArr[i].age << "\t";
			cout << "电话：" << abs->personArr[i].phone_number << "\t";
			cout << "地址：" << abs->personArr[i].address << endl;
		}
	}
	system("pause");
	system("cls");//清屏
}


//检测联系人下标
int Locate_person(struct Addressbooks *abs, string name)
{
	for (int i = 0; i < abs->num; i++)
	{
		if (abs->personArr[i].name == name)
			return i;//返回下标
	}
	return -1;
}


//删除联系人
void Delet_person(struct Addressbooks* abs) 
{
	cout << "请输入需要删除的联系人姓名：";
	string name;
	cin >> name;
	int mark = Locate_person(abs, name);
	if (mark == -1)
		cout << "未找到" << endl;
	else
	{
		if (mark != (MAX_NUM - 1))
		{
			for (int i = mark; i < abs->num; i++)
				abs->personArr[i] = abs->personArr[i + 1];
			abs->num--;//更新人数
		}
		else
			abs->num--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}


//查找特定联系人
void Find_person(struct Addressbooks* abs)
{
	cout << "请输入需要查找的联系人姓名：";
	string name;
	cin >> name;
	int mark = Locate_person(abs, name);
	if (mark == -1)
		cout << "未找到" << endl;
	else
	{
		cout << "姓名：" << abs->personArr[mark].name << "\t";
		abs->personArr[mark].sex == 1 ? cout << "性别：男\t" : cout << "性别：女 \t";
		cout << "年龄：" << abs->personArr[mark].age << "\t";
		cout << "电话：" << abs->personArr[mark].phone_number << "\t";
		cout << "地址：" << abs->personArr[mark].address << endl;
	}
	system("pause");
	system("cls");
}


//修改联系人
void Change_person(struct Addressbooks* abs)
{
	cout << "请输入需要修改的联系人姓名：";
	string name;
	cin >> name;
	int mark = Locate_person(abs, name);
	if (mark == -1)
		cout << "未找到" << endl;
	else
	{
		cout << "请输入姓名：" << endl;
		cin >> abs->personArr[mark].name;

		while (true)
		{
			cout << "请输入性别：1.男   2.女" << endl;
			cin >> abs->personArr[mark].sex;
			if (abs->personArr[mark].sex == 1 || abs->personArr[mark].sex == 2)
				break;
			else
				cout << "输入有误，请重新输入" << endl;
		}

		while (true)
		{
			cout << "请输入年龄：" << endl;
			cin >> abs->personArr[mark].age;
			if (abs->personArr[mark].age >= 0)
				break;
			else
				cout << "输入有误，请重新输入" << endl;
		}

		cout << "请输入联系电话：" << endl;
		cin >> abs->personArr[mark].phone_number;

		cout << "请输入地址：" << endl;
		cin >> abs->personArr[mark].address;

		cout << "修改成功，";
	}
	system("pause");
	system("cls");
}



void Clean_abs(struct Addressbooks *abs)
{
	cout << "是否确定要清空?  1.确定  2.取消" << endl;
	while (1)
	{
		int mark = 0;
		cin >> mark;
		if (mark == 1)
			break;
		else if (mark == 2)
		{
			system("pause");
			system("cls");
			return;
		}
		else
			cout << "输入有误，请重新输入" << endl;
	}
	abs->num = 0;
	cout << "清空成功" << endl;
	system("pause");
	system("cls");
}