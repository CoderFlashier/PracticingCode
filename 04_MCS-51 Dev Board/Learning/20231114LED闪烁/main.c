#include <STC89C5xRC.H>
#include <INTRINS.H>

void Delay500ms(void)	//@12.000MHz
{
	unsigned char data i, j, k;

	_nop_();
	//��Ҫ���ͷ�ļ�<INTRINS.H>
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	while(1)
	{
		P2 = 0xFE;
		//����LED
		Delay500ms();
		//��ʱ
		P2 = 0xFF;
		//Ϩ��LED
		Delay500ms();
	}
}

