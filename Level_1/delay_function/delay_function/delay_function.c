#include <stdio.h>
#include <time.h>

/*
	Gerçek bir delay fonksiyonu
*/

void delay(int seconds)
{

	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < seconds)
		;
}

int main()
{
	printf("Hello\n");
	delay(5);
	printf("Hello Again\n");
}


