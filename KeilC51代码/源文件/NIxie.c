#include <REGX52.H>


unsigned char NixieTable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void Delay(unsigned int xms)
{
	unsigned char i, j;
	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}


void Nixie(unsigned char Location,Number)
{
	switch(Location)		//位码输出
	{
		case 1:P3_4=0;P3_5=1;P3_6=1; P3_6=1;break;
		case 2:P3_4=1;P3_5=0;P3_6=1; P3_6=1;break;
		case 3:P3_4=1;P3_5=1;P3_6=0; P3_6=1;break;
		case 4:P3_4=1;P3_5=1;P3_6=1; P3_6=0;break;
	
	}
	P0=NixieTable[Number];	//段码输出
	Delay(1);				//显示一段时间
	P0=0x00;				//段码清0，消影
}

void main()
{
	while(1)
	{
		
		Nixie(1,1);		//在数码管的第1位置显示1
//		Delay(20);
		Nixie(2,2);		//在数码管的第2位置显示2
//		Delay(20);
		Nixie(3,3);		//在数码管的第3位置显示3
//		Delay(20);
		Nixie(4,4);	
		
	}
}
