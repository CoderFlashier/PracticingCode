#define _CRT_SECURE_NO_WARNINGS
#define modify_value() :
#include <stdio.h>
#include <string.h>

int min(int x, int y, int k)   //����min����������ֵΪ���ͣ���ʽ����x��yΪ����
{
    int z = 0;            //min�����������֣����庯���õ��ı���zΪ����
    if (x > y)z = y;     //��x > y,��y��ֵ��������z
    else z = x;          //����x��ֵ��������z
    return(z);           //��z��ֵ��Ϊmin����ֵ�����ص�����min������λ��
}

int main()                 //����������
{                          //��������ʼ
    //int min(int x, int y); //�Ա�������min������
    int a = 0;             //����a��b��c
    int b = 0;
    int c = 0;
    int d = 0;

    scanf("%d,%d,%d", &a, &b, &c);   //�������a��b ,c��ֵ  
    d = min(a, b, c);                  //����min���������õ���ֵ����d
    if (c > d)                     //��c��d���бȽ�
    {
        printf("min = %d\n", d);  //���d��ֵ
    }
    else
    {
        printf("min = %d\n", c);//���c��ֵ
    }

    return 0;               //���غ���ֵΪ0
}                           //����������� 