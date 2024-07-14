#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SAME  0


int main()
{
	char user_name[] = "ahmet";
	char password[] = "123456zA";

	char str[] = "usr=ahmet&psw=123456zA&set";
	char* pa[5];
	char* temp;
	int i = 0;

	temp = strtok(str, "=&");

	while (temp != NULL)
	{
		pa[i] = malloc(strlen(temp));
		strcpy(pa[i], temp);
		temp = strtok(NULL, "=&");
		i++;
	}

	if (strcmp(user_name, pa[1]) == SAME && strcmp(password,pa[3]) == SAME)
	{
		printf("WELCOME");
	}
	else
	{
		printf("FAIL");
	}
}

