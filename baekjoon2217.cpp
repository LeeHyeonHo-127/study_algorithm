#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int weight = -1;
	int blank,N,j;
	int rope[100000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &rope[i]);

	for (int i = 1; i < N; i++)
	{
		int key = rope[i];
		for (j = i-1; j >= 0 && rope[j] < key; j--)
		{
			
			rope[j + 1] = rope[j];
		}
		rope[j + 1] = key;

	}

	
	for (int i = 0; i < N; i++)
	{
		if (rope[i] * (i + 1) > weight)
		{
			weight = rope[i] * (i + 1);
		}
	}

	printf("%d", weight);
}