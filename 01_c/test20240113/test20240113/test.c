#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;//����+=�����ȼ��ϵͣ�������棬����a++��a�ȱ��ӷ���ʽ���ã��ټ�1
//	printf("%d %d %d", a, b, c);
//	//���9��23��8
//	return 0;
//}



//ͳ�ƶ�������1�ĸ���
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int count_1 = 0;
	int count_0 = 0;
	int mark = 0;

	while (1)
	{
		if(n % 2 == 1)
			count_1++;

		n /= 2;

		if (mark == 1)
			break;

		if (n == 1)
			mark = 1;
	} 

	if (count_1 < 8)
		count_0 = 8 - count_1;

	printf("%d %d", count_0, count_1);
	return 0;
}