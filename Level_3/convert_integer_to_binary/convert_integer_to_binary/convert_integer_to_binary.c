#include <stdio.h>


void printBits(unsigned int val)
{
	unsigned int mask = 1 << 31;

	int i = 0;

	for (i = 1; i <= 32; i++)
	{
		putchar(val & mask ? '1' : '0');
		val <<= 1;

		if (i % 4 == 0)
			putchar(' ');
	}

}

int main()
{
	printBits(7);
}


