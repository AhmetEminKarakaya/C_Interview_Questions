#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
    strtok stringlerde parse işlemi yapar.

    Ahmet-Emin-Karakaya // - gördükçe ayıracak Ahmet Emin Karakaya şeklinde parse edecek

*/

int main()
{
    char str[] = "I'am engineer.I like embedded systems";
    char* p_str;
    p_str = strtok(str, " ");

    while (p_str != NULL)
    {
        puts(p_str);
        p_str = strtok(NULL, " ");
    }
}

