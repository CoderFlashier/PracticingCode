//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 20;
//
//	((a > b) ? a : b) = 30;
//	cout << a << "\t" << b << endl;//10 30
//	return 0;
//}


//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	//cout << num << endl;
//
//	//��ҽ��в²�
//	int input = 0;
//	while (1)
//	{
//		cout << "������²�:";
//		cin >> input;
//
//		if (input > num)
//			cout << "�´���" << endl;
//		else if (input < num)
//			cout << "��С��" << endl;
//		else
//			break;
//	}
//	cout << "�¶���";
//
//	//�ж�
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n = 100;
//	do
//	{
//		int sum = 0;
//		int temp = n;
//		while (temp)
//		{
//			sum += (int)pow((temp % 10), 3);
//			temp /= 10;
//		}
//		if (sum == n)
//			cout << n << endl;
//	} while (++n <= 999);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		int temp = n;
//		int mark = 0;
//		if (n % 7 == 0)
//		{
//			cout << "������" << endl;
//			continue;
//		}
//
//		while (temp)
//		{
//			if (temp % 10 == 7)
//			{
//				cout << "������" << endl;
//				mark = 1;
//				break;
//			}
//			temp /= 10;
//		}
//		if(mark == 0)
//			cout << n << endl;
//	}
//	return 0;
//}



#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i << " x " << j << "= " << i * j << " ";
			if (i * j < 10)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}