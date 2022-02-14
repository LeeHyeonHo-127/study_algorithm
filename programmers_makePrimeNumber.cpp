#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int primeCheck(int num)
{
	int count = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num%i == 0)
			count++;
	}
	if (count == 2)
		return 1;
	else
		return 0;
}
int solution(int nums[], int nums_len) {
	int answer;
	int num;
	int primeNum[50];
	int count = 0;
	int checkDuplication = 0;
	for (int i = 0; i < nums_len - 2; i++)
	{
		for (int j = i + 1; j < nums_len - 1; j++)
		{
			for (int k = j + 1; k < nums_len; k++)
			{
				num = nums[i] + nums[j] + nums[k];
				printf("%d + %d+ %d = %d \n", nums[i], nums[j], nums[k],num);

				if (primeCheck(num) == 1)
				{
					checkDuplication = 0;
					//printf("%d\n", num);
					if (count == 0)
					{
						primeNum[count] = num;
						count++;
					}
					else
					{
						for (int t = 0; t < count; t++)
						{
							if (primeNum[t] == num)
							{
								checkDuplication = 1;
								break;
							}
						}
						if (checkDuplication == 0)
						{
							primeNum[count] = num;
							count++;
						}
					
					}
				}
			}
		}
	}
	for (int i = 0; i < count; i++)
		printf("%d\n", primeNum[i]);
	answer = count;
	return answer;
}
int main()
{
	int nums[6] = { 991,992,993,4,5,6 };
	int answer = solution(nums, 6);
	printf("%d", answer);
	
}