#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char digit[1000000];
	int hap;
	int count = 0;
	int length;
	double num;

	scanf("%s", digit);
	
	hap = 0;
	

	while (1)
	{
		num = digit[count] - 48;
		if (num == 1 || num == 0)
			count++;
		else
			break;
	}

	length = --count;
	//printf("length = %d\n", length);
	count = 0;

	while (1)
	{
		num = digit[length] - 48;
		if (num == 1)
		{
			//printf("%d %lf\n", count, num);
			hap += pow(2.0, count);
			//printf("%d %d\n\n",count, hap);
			length--;
			count++;
		}
		else if (num == 0)
		{
			count++;
			length--;
		}
		else
			break;
	}
	printf("%d", hap);

}