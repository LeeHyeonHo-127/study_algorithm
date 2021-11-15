#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int count = 0;

int main()
{
	int N = 0;
	int K = 0;
	int arr[20];
	scanf("%d %d", &N, &K);
	int arrCount = N - 1;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	/*for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}*/


	while (1)
	{
		

		if (arr[arrCount] <= K)
		{
			K -= arr[arrCount];
			count++;

			//printf("¿‹±› = %d\n", K);
			//printf("arr[%d] = %d", arrCount, arr[arrCount]);
		}
		else if (arrCount > 0)
		{
			arrCount--;
		}
		else
		{
			//printf("¿‹±› = %d", K);
			break;
		}
			
		
		
		
	}

	printf("%d", count);


}