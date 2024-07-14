#include <stdio.h>

/*
	Dizinin en büyük 2. elemanını bulan program
*/

int secondValinArray(const int*pa,int size)
{
	int max = pa[0];
	int secondmax = pa[1];

	if (secondmax > max)
	{
		max = secondmax;
		secondmax = pa[0];
	}

	for (int i = 2; i < size; i++)
	{
		if (pa[i] > max)
		{
			secondmax = max;
			max = pa[i];
		}
		else if (pa[i] > secondmax)
		{
			secondmax = pa[i];
		}
	}
	return secondmax;
}

int main()
{
	int a[5] = { 5,8,17,18,2 };
	printf("SecondMax : %d", secondValinArray(a, 5));
}


