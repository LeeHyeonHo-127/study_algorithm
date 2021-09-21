#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int count = 0;
	int T;
	int remain = 0;

	scanf("%d", &T);
	while (remain >= 300)
	{
		remain -= 300;
		count++;
	}
	while (remain >= 60)
	{
		remain -= 60;
		count++;
	}
	while (remain >= 10)
	{
		remain -= 10;
		count++;
	}
	if (remain >= 1)
	{
		printf("-1");
	}
	else
	{
		printf("%d", count);
	}
}