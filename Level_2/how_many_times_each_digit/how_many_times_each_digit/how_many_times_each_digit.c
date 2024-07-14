#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Girilen bir sayıda her bir rakamdan kaç tane olduğunu bulan program
*/

int main()
{
    int num;
    int digit;
    int numbers[10] = { 0 };

    printf("Enter any number:");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        numbers[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
        printf("Digit %d = %d\n", i, numbers[i]);
    
}


