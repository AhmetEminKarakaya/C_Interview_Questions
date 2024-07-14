#include <stdio.h>

/*
    Perfect number bulan program
    6 = 3,2,1 --> 3+2+1 = 6
*/

int isPerfectNumber(int number)
{
    int sum = 0;

    for (int i = 1; i <= number / 2; i++)
        if (number % i == 0)
              sum += i;

    return !(sum == number);
}

int main()
{
    for (int i=1; i < 100; i++)
        printf("Sayi:%d - %d\n", i, isPerfectNumber(i));
    
}

