#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>//��׼��ͷ�ļ�

//���������������ֱ��Ӧ�����㷨
long long func1(int n);
long long func2(int n);

int main()
{
	int n = 0;
	long long sum = 0;
	//����long long���ʹ洢���������

	//�����ַ��������������֣����ڽ��кϷ����ж�
	//�ַ�����ʼ��Ϊȫ0��ASCII��0��Ӧ '\0',��ʾ�ַ�������
	char input[10] = { 0 };

	int c = 0;

	//������ѭ�����кϷ����жϣ������벻�Ϸ�ʱ��������������
	while (1)
	{
		printf("Please enter an integer greater than 0(Max = 999999999):___________\b\b\b\b\b\b\b\b\b\b");
		fgets(input, 10, stdin);//�������֣�����9Ϊ�������ƣ�stdin��ʾ��׼�����������������룩
		//��fgets������ַ���ĩβ��Ϊ '\0'�������Ĳ��֣����� \n)�����ڻ��������ȴ���һ�ζ�ȡ

		//�Ϸ����ж�
		
		//��������Ƿ񳬳�
		//�����볬����������9λʱ���ַ�����9λΪһ�����֣���\n�ᱻ���ڻ�����
		if (input[8] == '\n' || input[8] == '\0');//������
		else
		{
			int a = 0;
			if ((a = getchar()) != '\n')
				goto clean;//������ֱ����������ѭ���������֣���ʾ����Ƿ�����������
		}

		//����⵽�������ַ�ʱ���ж�Ϊ�Ƿ�
		//ͬʱ����ͨ���ж��Ƿ����С�������ж��Ƿ�Ϊ������
		int i = 0; 
		for (i = 0; i < 9; i++)
		{
			//��һ������ͨ��ASCII�ж��Ƿ�Ϊ���֣��ڶ��������ж��Ƿ�Ϊ�ַ���ԭ�����ݻ��ǻ��з�
			if ((input[i] < 48 || input[i] > 57) && (input[i] != '\n' && input[i] != '\0'))
				goto end;//��ʱ����������������������ᵼ����������������һ�Σ�
		}

		//���ַ����е�����ת��Ϊ���Σ�atoi��������stdlib
		n = atoi(input);

		if (n > 0)//�ж��Ƿ����0
			break;
		else
			goto end;

	clean:
		while ((c = getchar()) != '\n');
		//getchar()һ�δӻ������ж�ȡһλ����
		//����ѭ��������������ʽ��һ����������ݶ���һ���������Ӱ��
		//������Ϸ�ʱ�����Բ�����

	end:
		printf("Your input is incorrect, please re-enter!\n");

		//����input
		for (i = 0; i < 9; i++)
			input[i] = 0;
	}
	
	sum = func1(n);
	printf("The result obtained through the first function:%lld\n", sum);
	sum = func2(n);
	printf("The result obtained through the second function:%lld", sum);
	return 0;
}


//�㷨һ��ͨ��ѭ���ۼ�
long long func1(int n)
{
	int i = 0;
	long long sum = 0;
	for (i = 1; i <= n; i++)//i��1��ʼ��ÿִ��һ�μ�1
	{
		sum += i;//�����ۼ�
	}
	return sum;
}


//�㷨����
//����Ҫ���֪����ͨ����β��Ӳ��� n/2 ���õ����
long long func2(int n)
{
	long long sum = 0;
	long long sum_1 = 1 + n;

	if (n % 2 == 1)//��nΪ��������Ҫ����һ���м�ֵ
		sum = ((sum_1) * (n >> 1)) + ((n / 2) + 1);//����ͨ������һλ�������2
	else
		sum = ((sum_1) * (n >> 1));
	//�����ַǳ���ʱ������ֱ����n+1�����쳣���ñ�������

	return sum;
}