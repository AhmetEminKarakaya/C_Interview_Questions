#include <stdio.h>
#include <ctype.h>

/*
	Bir kelime veya cümledeki sesli harf sayısını bulan program
*/

int numberofvowel()
{
	int ch;
	int vowelcounter = 0;

	while ((ch = getchar()) != '\n')
	{
		switch (tolower(ch)) 
		{
		case 'a':
		case 'e':
		case 'o':
		case 'u':
		case 'i':
			vowelcounter++;
			break;
		default:
			break;
		}
	}
	return vowelcounter;
}

/*******************************************************************************************/

int numberofvowel2(const char* str)
{
	int vowelcounter = 0;
	char vowels[] = { 'a','e','i','o','u' };

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[i] == vowels[j])
			{
				vowelcounter++;
			}
		}
	}
	return vowelcounter;
}

int main()
{
	int res = 0;
	res = numberofvowel();
	printf("%d\n", res);

	res = numberofvowel2("ahmet emin");
	printf("%d\n", res);
}


