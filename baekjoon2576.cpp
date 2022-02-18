#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main()
{
	int num[10];
	int n;
	int count = 0;
	int lowest = 1000;
	int hap = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 1)
		{
			hap += n;
			if (lowest > n)
			{
				lowest = n;
			}

		}
	}

	if (lowest == 1000)
	{
		printf("-1");
	}
		
	else 
	{
		printf("%d\n%d", hap, lowest);
	}

}