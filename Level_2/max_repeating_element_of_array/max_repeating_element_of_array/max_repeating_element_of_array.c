#include <stdio.h>

/*
    Dizide en çok tekrar eden elemanı bulan program
*/

void getMaxCountValinArray(const int* pa, int size, int* maxVal, int* maxValCount)
{
    int counter = 0;
    *maxValCount = 0;
    int i, j;

    for (i = 0; i < size; i++)
    {
        counter = 1;
        for (j = i + 1; j < size; j++)
        {
            if (pa[j] == pa[i])
                ++counter;
            if (counter > *maxValCount)
            {
                *maxValCount = counter;
                *maxVal = pa[j];
            }
        }
    }

}

int main()
{
    int a[] = { 5,3,4,1,2,1,9,3,4,2,3,8,3,10 };
    int maxVal, maxCount;
    getMaxCountValinArray(a, 14, &maxVal, &maxCount);
    printf("Max Val:%d Count:%d", maxVal, maxCount);
}

