#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char digit[1000000];
	int hap;
	int count = 0;
	double num;

	scanf("%s", digit);
	
	hap = digit[0]; // 48
	printf("%d", hap);
	while (1)
	{
		num = digit[count] - 48;
		if (num == 1)
		{
			printf("%d\n", num);
			hap = pow(2.0, count);
			count++;
		}
		else if (num == 0)
			count++;
		else
			break;
	}


}