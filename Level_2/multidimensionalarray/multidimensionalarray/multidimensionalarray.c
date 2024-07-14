#include <stdio.h>
#include <stdlib.h>

int* gdptr;

void setMatrix(int pa[][5], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < 5; j++)
			pa[i][j] = rand() % 100;
}


void getMatrix(int(*pa)[5], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%2d ", pa[i][j]);
		printf("\n");
	}
}

int* getTip(int(*pa)[5], int size)
{
	int sum;
	gdptr = malloc(size * sizeof(size));

	for (int i = 0; i < size; i++)
	{
		sum = 0;
		for (int j = 0; j < 5; j++)
			sum += pa[i][j];

		*(gdptr + i) = sum;
	}
	return gdptr;
}


int main()
{
	int a[3][5];
	setMatrix(a, 3);
	getMatrix(a, 3);

	printf("\n");

	int* ptr = getTip(a, 3);

	for (int i = 0; i < 3; i++)
		printf("%d ", *(ptr + i));

	free(gdptr);

}

