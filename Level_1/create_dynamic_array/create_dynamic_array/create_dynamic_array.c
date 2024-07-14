#include <stdio.h>
#include <stdlib.h>

/*
	Kullanıcın istediği boyutta ve istediği ilk değer ile dinamik olarak dizi oluşturan program
*/

#define ARRAY_SIZE	7

int* createArray(int size, int value)
{
	int* p;
	int* pd = (int*)malloc(size * sizeof(int));

	if (pd == NULL)
	{
		printf("Bellek Ayrilamadi...\n");
		return NULL;
	}

	for (p = pd; p < pd + size; p++)
	{
		*p = value;
	}
	return pd;
}


int main()
{
	int* pd = createArray(ARRAY_SIZE, 4);

	if (pd == NULL)
		printf("Bellek Ayrilamadi\n");

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d  ", *(pd + i));
	}

}


