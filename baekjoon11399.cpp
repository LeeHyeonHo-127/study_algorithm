#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N;
	int arr[1000];
	int blank;
	int j;
	int hap = 0;
	int result = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < N; i++)
	{
		blank = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > blank)
			{
				arr[j + 1] = arr[j];
			}
			else
				break;
		}
		arr[j + 1] = blank;
	}

	for (int i = 0; i < N; i++)
	{
		//printf("%d ", arr[i]);
		hap = hap + arr[i];
		result += hap;
		
	}
	printf("%d", result);

}