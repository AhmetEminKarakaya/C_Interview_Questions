#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
	strtok fonksiyonu ile birden fazla delimetter kullanabiliriz.
*/

int main()
{

	char text[] = "C,C++,Vhdl,Matlab.02/03/2024 Cumartesi Ankara";
	char* str;

	str = strtok(text, ",./");

	while (str != NULL)
	{
		printf("%s\n", str);
		str = strtok(NULL, ",./");
	}  
}


