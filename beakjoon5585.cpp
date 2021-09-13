#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int spend_money, charge,count,temp;
	charge = 1000;
	count = 0;
	
	scanf("%d", &spend_money);

	charge -= spend_money;
	while (1)
	{
		if (charge >= 500)
		{
			count++;
			charge -= 500;
		}
		else if (charge >= 100)
		{
			while (charge >= 100)
			{
				count++;
				charge -= 100;
			}
		}
		else if (charge >= 50)
		{
			while (charge >= 50)
			{
				count++;
				charge -= 50;
			}
		}
		else if (charge >= 10)
		{
			while (charge >= 10)
			{
				count++;
				charge -= 10;
			}
		}
		else if (charge >= 5)
		{
			while (charge >= 5)
			{
				count++;
				charge -= 5;
			}
		}
		else if (charge >= 1)
		{
			while (charge >= 1)
			{
				count++;
				charge -= 1;
			}
		}
		else
			break;

		
	}

	printf("%d", count);



}