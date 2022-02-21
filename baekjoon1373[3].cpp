#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char digit[1000004];
	int hap = 0;
	int count = 0;
	int length;

	double num;

	scanf("%s", digit);

	while (1)
	{
		num = digit[count] - 48;
		if (num == 1 || num == 0)
			count++;
		else
			break;
	} //배열 길이 파악

	length = count;
	//printf("length = %d\n", length);
	count = 2;

	if (length % 3 == 2)
	{

		count = 1;
		for (int t = 0; t <= 1; t++)
		{
			if ((digit[t]-48) == 1)
			{
				hap += pow(2, count);
				//printf("%d\",hap);
				count--;
			}
			else
				count--;
		}
		printf("%o", hap);
		hap = 0;

		for (int i = 2; i < length; i += 3)
		{
			count = 2;
			for (int t = i; t <= i + 2; t++)
			{
				if ((digit[t] - 48) == 1)
				{
					hap += pow(2, count);
					//printf("%d\n", hap);
					count--;
				}
				else
					count--;
			}
			printf("%o", hap);
			hap = 0;
		}
	}
	else if (length % 3 == 1)
	{
		count = 0;
		for (int t = 0; t < 1; t++)
		{
			if ((digit[t]-48) == 1)
			{
				hap += pow(2, count);
				//printf("%d\",hap);
				count--;
			}
			else
				count--;
		}
		printf("%o", hap);
		hap = 0;

		for (int i = 1; i < length; i += 3)
		{
			count = 2;
			for (int t = i; t <= i + 2; t++)
			{
				if ((digit[t] - 48) == 1)
				{
					hap += pow(2, count);
					//printf("%d\n", hap);
					count--;
				}
				else
					count--;
			}
			printf("%o", hap);
			hap = 0;
		}
	}
	else
	{
		for (int i = 0; i < length; i += 3)
		{
			count = 2;
			for (int t = i; t <= i + 2; t++)
			{
				if ((digit[t] - 48) == 1)
				{
					hap += pow(2, count);
					//printf("%d\n", hap);
					count--;
				}
				else
					count--;
			}
			printf("%o", hap);
			hap = 0;
		}
	}
	

}