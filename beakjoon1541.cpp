#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int num_change(int length, char temp[])
{
	int num=0;
	for (int i = length-1; i >= 0; i--)
	{
		
		num += ((temp[length-i-1]-48) * pow(10, i));
		
	}
	
	return num;
}



int main()
{
	char input[50];
	char temp[10];
	int length = 0;
	int hap=0;
	int num;
	int MINUS =0;
	scanf("%s", &input);
	
	for (int i = 0; i < 50; i++)
	{
		if (input[i] == '+')
		{
			num = num_change(length, temp);
			length = 0;
			memset(temp, 0, sizeof(char) * 10);

			if (MINUS == 1)
			{
				//printf("hap(%d) - num(%d)", hap, num);
				hap -= num;
				//printf("= %d\n", hap);
			}
			else
			{
				//printf("hap(%d) + num(%d)\n", hap, num);
				hap += num;
				//printf("= %d\n", hap);

			}
		}
		else if (input[i] == '-')
		{
			num = num_change(length, temp);
			length = 0;
			memset(temp, 0, sizeof(char) * 10);

			if (MINUS == 1)
			{
				//printf("hap(%d) - num(%d)", hap, num);
				hap -= num;
				//printf("= %d\n", hap);
			}
			else
			{
				//printf("hap(%d) + num(%d)\n", hap, num);
				hap += num;
				//printf("= %d\n", hap);

				MINUS = 1;
			}
		}
		else if (input[i] == '\0')
		{
			num = num_change(length, temp);
			length = 0;
			memset(temp, 0, sizeof(char) * 10);
			if (MINUS == 1)
			{
				//printf("hap(%d) - num(%d)", hap, num);
				hap -= num;
				//printf("= %d\n", hap);
			}
			else
			{
				//printf("hap(%d) + num(%d)\n", hap, num);
				hap += num;
				//printf("= %d\n", hap);
			}
			break;
		}
		else
		{
			temp[length] = input[i];
			length++;
			//printf("temp[]에 들어간 숫자 = %c \n 현재 length = %d \n ", input[i], length-1);
		}
	}

	printf("%d", hap);
	

	


}	