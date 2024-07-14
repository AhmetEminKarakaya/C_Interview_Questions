#include <stdio.h>

#define findsize(a)    (sizeof(a) / sizeof(a[0]) )

#define isleapyear(y)  ((y % 4 == 0) && ((y % 400 == 0) || (y % 100 != 0)))

int main()
{
    int b[] = {1,2,3,4,5,6};

    printf("%d\n", findsize(b));
    printf("%d\n", isleapyear(2020));
}
