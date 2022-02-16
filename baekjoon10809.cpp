#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char word[10000];
	int count = 0;

	scanf("%s", &word);
	while (1)
	{
		if (word[count] < 68)
		{
			printf("%c", (word[count] + 23));
		}
		else
		{
			printf("%c", (word[count] - 3));
		}
		count++;
		if (word[count] == '\0')
			break;
	}
}