//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;//1
//
//	flag = false;
//	cout << flag << endl;//0
//
//	cout << sizeof(flag);//1
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "short:" << sizeof(short) << endl;//2
//	cout << "int:" << sizeof(int) << endl;//4
//	cout << "long:" << sizeof(long) << endl;//4
//	cout << "long long:" << sizeof(long long) << endl;//8
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//1������
//	int a = 0;
//	cout << "�����α���a��ֵ��";
//	cin >> a;
//	cout << "a = " << a << endl;
//
//	//2���ַ���
//	double b = 0.0;
//	cout << "���˫���ȸ����ͱ���b��ֵ��";
//	cin >> b;
//	cout << "b = " << b << endl;
//
//	//3���ַ���
//	char c = 'a';
//	cout << "����ַ��ͱ���c��ֵ��";
//	cin >> c;
//	cout << "c = " << c << endl;
//
//	//4���ַ�����
//	string str_d = "Hello";
//	cout << "����ַ���str_d��ֵ��";
//	cin >> str_d;
//	cout << "srt_d = " << str_d << endl;
//
//	//5����������
//	bool e = 0;
//	cout << "�����������e��ֵ��";
//	cin >> e;//��������true or false
//	cout << "e = " << e;
//
//	return 0;
//}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;

	if ((++a) > 10 && (++b) > 10)
		cout << "123" << endl;
	cout << a << "\t" << b << endl;
	//11 11


	if ((++a) > 100 && (++b) > 10)
		cout << "123" << endl;
	cout << a << "\t" << b << endl;
	//12 11

	if ((++a) > 10 || (++b) > 10)
		cout << "456" << endl;
	cout << a << "\t" << b << endl;
	//13 11


	if ((++a) > 10 || (++b) > 10)
		cout << "456" << endl;
	cout << a << "\t" << b << endl;
	//14 11
	return 0;
}