#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Verilen bir integer sayısını tersten yazdırır.
	Örneğin 145 i 541 şeklinde yazdıracaktır.
*/

int main()
{
	int x = 0;

	printf("Tam Sayi Giriniz:");
	scanf("%d", &x);

	while (x != 0)
	{
		putchar(x % 10 + '0'); // ASCII karşılığını yazdırdığı için '0' eklendi.
		x /= 10;
	}
 
}

