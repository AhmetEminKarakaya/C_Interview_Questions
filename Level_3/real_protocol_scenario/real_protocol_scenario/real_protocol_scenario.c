#include <stdio.h>

/*
	2 byte birleştiren program
*/

int main()
{
	unsigned char buf[] = { 0xAB,0x02 };
	unsigned short val = (buf[0] << 8) | buf[1];

	printf("0x%X", val);

}


