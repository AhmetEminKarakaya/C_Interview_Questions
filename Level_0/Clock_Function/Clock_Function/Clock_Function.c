#include <stdio.h>
#include <time.h>
#include <math.h>

/*
    clock fonksiyonu bir kodun ne kadar süre harcadığını görmek istediğimiz zaman kullanırız.
    Saymaya main başından başlar.
*/

int main()
{
    int a = 10; 
    int b = 20;

    double x;
    printf("Hesaplaniyor...");
    clock_t start = clock();
    for (int i = 1; i < 200'000'000; i++)
        x = sqrt(pow(i, 6));
    clock_t end = clock();
    
    clock_t res = end - start;
    printf("%f seconds\n", (double)res / CLOCKS_PER_SEC);

}

