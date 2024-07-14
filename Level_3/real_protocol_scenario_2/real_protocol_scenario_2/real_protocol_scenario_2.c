#include <stdio.h>



int main()
{
	unsigned int val = 230150120;
	unsigned char buf[4];

	for (int i = 0; i < sizeof(val); i++)
	{
		buf[i] = (val >> 8 * i) & 0xFF;
	}

	for (int i = 0; i < sizeof(val); i++)
	{
		printf("%x",buf[i]);
	}


}
