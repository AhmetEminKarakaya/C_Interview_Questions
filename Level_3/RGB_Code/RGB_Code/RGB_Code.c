#include <stdio.h>

#define RGB_COLOR(r,g,b)  ( (r)<<16 | (g)<<8 | (b) )

int deger;

int main()
{
	deger = RGB_COLOR(46, 56, 124);
	printf("0x%x", deger);
}


