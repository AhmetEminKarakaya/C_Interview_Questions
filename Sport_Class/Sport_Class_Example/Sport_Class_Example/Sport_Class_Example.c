#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define asize(a)		(sizeof(a)/sizeof(a[0]))

typedef struct
{
	int start;
	int end;
}Gym;

Gym times[] = {
	{420,480}, {480,600}, {555,620},{660,735},
	{741, 825}, {795,945},{1170,1320},{1260,1380}
};

void printGym(const Gym gym)
{
	char buf[150];

	sprintf(buf, "Nearest Time Sport Class...\tStart Time: %d:%d%cm\t End Time: %d:%d%cm",
		gym.start / 60 > 12 ? gym.start / 60 - 12 : gym.start / 60,
		gym.start % 60,
		gym.start > 719 ? 'p' : 'a',
		gym.end / 60 >= 12 ? gym.end / 60 - 12 : gym.end / 60,
		gym.end % 60,
		gym.end > 719 ? 'p' : 'a'
		);

	puts(buf);
}

int main()
{
	int hour, min;
	int totalmin;
	
	printf("Enter 24 hour times:");
	scanf("%d:%d", &hour, &min);
	totalmin = hour * 60 + min;
	
	int i = 0;
	for (i = 0; i < asize(times); i++)
	{
		if (totalmin <= times[i].start + (times[i].end - times[i].start) / 2)
		{
			printGym(times[i]);
			break;
		}
	}

	if (i == asize(times))
	{
		printGym(times[0]);
	}
}


