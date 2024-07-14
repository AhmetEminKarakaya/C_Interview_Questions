#include <stdio.h>
#include <limits.h>

/*
	500 basamklı bir sayının 9'a bölünüp bölünmediği bulan program
*/


int main()
{
	int sum = 0;
	int c;

	printf("Please enter any number\n");

	while ((c = getchar()) != '\n')
	{
		sum += c - '0';
	}

	if (sum % 9)
		printf("indivisible by 9...");

	else
		printf("divisible by 9...");

}


