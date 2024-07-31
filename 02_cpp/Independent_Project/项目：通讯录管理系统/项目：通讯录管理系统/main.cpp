#include <iostream>
#include <string>
using namespace std;

#define MAX_NUM 100

void Menu();//��ʾ�˵�

//��ϵ�˽ṹ��
struct contacts
{
	string name;
	int sex = 0;
	int age = 0;
	string phone_number;
	string address;
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct contacts personArr[MAX_NUM];//ͨѶ¼����
	int num = 0;//��Ա����
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
		case 1://���
			system("cls");
			Add_person(&abs);
			break;
		case 2://��ʾ
			system("cls");
			Print_person(&abs);
			break;
		case 3://ɾ��
			system("cls");
			Delet_person(&abs);
		case 4://����
			system("cls");
			Find_person(&abs);
			break;
		case 5://�޸�
			system("cls");
			Change_person(&abs);
			break;
		case 6://���
			system("cls");
			Clean_abs(&abs);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			cout << "����������" << endl;
			break;
		}
	}
	
	return 0;
}


//��ӡ�˵�
void Menu()
{
	cout << "****************************" << endl;
	cout << "********1.�����ϵ��*******" << endl;
	cout << "********2.��ʾ��ϵ��********" << endl;
	cout << "********3.ɾ����ϵ��********" << endl;
	cout << "********4.������ϵ��********" << endl;
	cout << "********5.�޸���ϵ��********" << endl;
	cout << "********6.�����ϵ��********" << endl;
	cout << "********0.�˳�ͨѶ¼********" << endl;
	cout << "****************************" << endl;
}


//�����ϵ��
void Add_person(struct Addressbooks *abs)
{
	//�ж��Ƿ����
	if (abs->num == MAX_NUM)
		cout << "ͨѶ¼�������޷����" << endl;
	else
	{
		//�����ϵ��
		cout << "������������" << endl;
		cin >> abs->personArr[abs->num].name;
		
		while (true)
		{
			cout << "�������Ա�1.��   2.Ů" << endl;
			cin >> abs->personArr[abs->num].sex;
			if (abs->personArr[abs->num].sex == 1 || abs->personArr[abs->num].sex == 2)
				break;
			else
				cout << "������������������" << endl;
		}

		while (true)
		{
			cout << "���������䣺" << endl;
			cin >> abs->personArr[abs->num].age;
			if (abs->personArr[abs->num].age >= 0)
				break;
			else
				cout << "������������������" << endl;
		}

		cout << "��������ϵ�绰��" << endl;
		cin >> abs->personArr[abs->num].phone_number;

		cout << "�������ַ��" << endl;
		cin >> abs->personArr[abs->num].address;

		abs->num++;//��������
		cout << "��ӳɹ���";
	}
	system("pause");
	system("cls");//����
}


//��ʾ��ϵ��
void Print_person(struct Addressbooks* abs)
{
	//�ж�����
	if (abs->num == 0)
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	else
	{
		for (int i = 0; i < abs->num; i++)
		{
			cout << "������" << abs->personArr[i].name << "\t";
			abs->personArr[i].sex == 1? cout << "�Ա���\t": cout << "�Ա�Ů \t";
			cout << "���䣺" << abs->personArr[i].age << "\t";
			cout << "�绰��" << abs->personArr[i].phone_number << "\t";
			cout << "��ַ��" << abs->personArr[i].address << endl;
		}
	}
	system("pause");
	system("cls");//����
}


//�����ϵ���±�
int Locate_person(struct Addressbooks *abs, string name)
{
	for (int i = 0; i < abs->num; i++)
	{
		if (abs->personArr[i].name == name)
			return i;//�����±�
	}
	return -1;
}


//ɾ����ϵ��
void Delet_person(struct Addressbooks* abs) 
{
	cout << "��������Ҫɾ������ϵ��������";
	string name;
	cin >> name;
	int mark = Locate_person(abs, name);
	if (mark == -1)
		cout << "δ�ҵ�" << endl;
	else
	{
		if (mark != (MAX_NUM - 1))
		{
			for (int i = mark; i < abs->num; i++)
				abs->personArr[i] = abs->personArr[i + 1];
			abs->num--;//��������
		}
		else
			abs->num--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}


//�����ض���ϵ��
void Find_person(struct Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��������";
	string name;
	cin >> name;
	int mark = Locate_person(abs, name);
	if (mark == -1)
		cout << "δ�ҵ�" << endl;
	else
	{
		cout << "������" << abs->personArr[mark].name << "\t";
		abs->personArr[mark].sex == 1 ? cout << "�Ա���\t" : cout << "�Ա�Ů \t";
		cout << "���䣺" << abs->personArr[mark].age << "\t";
		cout << "�绰��" << abs->personArr[mark].phone_number << "\t";
		cout << "��ַ��" << abs->personArr[mark].address << endl;
	}
	system("pause");
	system("cls");
}


//�޸���ϵ��
void Change_person(struct Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��������";
	string name;
	cin >> name;
	int mark = Locate_person(abs, name);
	if (mark == -1)
		cout << "δ�ҵ�" << endl;
	else
	{
		cout << "������������" << endl;
		cin >> abs->personArr[mark].name;

		while (true)
		{
			cout << "�������Ա�1.��   2.Ů" << endl;
			cin >> abs->personArr[mark].sex;
			if (abs->personArr[mark].sex == 1 || abs->personArr[mark].sex == 2)
				break;
			else
				cout << "������������������" << endl;
		}

		while (true)
		{
			cout << "���������䣺" << endl;
			cin >> abs->personArr[mark].age;
			if (abs->personArr[mark].age >= 0)
				break;
			else
				cout << "������������������" << endl;
		}

		cout << "��������ϵ�绰��" << endl;
		cin >> abs->personArr[mark].phone_number;

		cout << "�������ַ��" << endl;
		cin >> abs->personArr[mark].address;

		cout << "�޸ĳɹ���";
	}
	system("pause");
	system("cls");
}



void Clean_abs(struct Addressbooks *abs)
{
	cout << "�Ƿ�ȷ��Ҫ���?  1.ȷ��  2.ȡ��" << endl;
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
			cout << "������������������" << endl;
	}
	abs->num = 0;
	cout << "��ճɹ�" << endl;
	system("pause");
	system("cls");
}