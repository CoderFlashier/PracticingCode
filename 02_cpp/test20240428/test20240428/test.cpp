//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[10] = { 1, 646, 32, 4651, 123 ,545, 123, 546, 12 ,6846 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//		cout << arr[i] << " ";
//
//	cout << endl;
//
//	for (i = 0; i < 10; i++)
//	{
//		int j = i;
//		for (j = 0; j < (10 - 1); j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//		cout << arr[i] << " ";
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int arr[10] = { 1, 646, 32, 4651, 123 ,545, 123, 546, 12 ,6846 };
	int i = 0;

	for (i = 0; i < 10; i++)
		cout << arr[i] << " ";

	cout << endl;

	for (i = 0; i < 10; i++)
	{
		int j = i;
		for (j = 0; j < (10 - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
		cout << arr[i] << " ";

	return 0;
}
