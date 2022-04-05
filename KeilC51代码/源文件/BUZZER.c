#include <intrins.h>
#include <REGX52.H>

void delay_ms(int a)
	{
		int i,j;
		for(i=0;i<a;i++)
		{
			for(j=0;j<1000;j++) _nop_();
	
		}
	}

	
void main()
{
	while(1)
	{
	P0=0xFF;
	delay_ms(500);
	P0=0xFE;
	delay_ms(500);
	}
}