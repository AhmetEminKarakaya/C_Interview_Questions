#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand((unsigned int)time(NULL));
    int n;

    printf("Enter any number:");
    scanf("%d", &n);

    int* pd = (int*)malloc(n * sizeof(int));

    
    if (!pd)
    {
        printf("Not enough memory!");
        exit(EXIT_FAILURE);
    }
    
    for (size_t i = 0; i < n; i++)
    {
        pd[i] = rand() % 10;
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", pd[i]);
    }
    printf("\n");

    printf("\nBefore realloc adress : %p", pd);

    int n_plus;
    printf("\nHow many add:");
    scanf("%d", &n_plus);

    pd = realloc(pd, (n + n_plus) * sizeof(int));

    if (pd == NULL)
    {
        printf("Not enough memory!");
        exit(EXIT_FAILURE);
    }

    memset(pd + n, 0, sizeof(int) * n_plus);

    for (size_t i = 0; i < n + n_plus; i++)
    {
        printf("%d ", pd[i]);
    }

    printf("\nAfter realloc adress : %p", pd);
}

