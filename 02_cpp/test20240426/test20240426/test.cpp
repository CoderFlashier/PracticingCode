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
//	//1、整形
//	int a = 0;
//	cout << "给整形变量a赋值：";
//	cin >> a;
//	cout << "a = " << a << endl;
//
//	//2、字符型
//	double b = 0.0;
//	cout << "请给双精度浮点型变量b赋值：";
//	cin >> b;
//	cout << "b = " << b << endl;
//
//	//3、字符型
//	char c = 'a';
//	cout << "请给字符型变量c赋值：";
//	cin >> c;
//	cout << "c = " << c << endl;
//
//	//4、字符串型
//	string str_d = "Hello";
//	cout << "请给字符串str_d赋值：";
//	cin >> str_d;
//	cout << "srt_d = " << str_d << endl;
//
//	//5、布尔类型
//	bool e = 0;
//	cout << "请给布尔类型e赋值：";
//	cin >> e;//不能输入true or false
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