#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <algorithm>

using namespace std;

int arrN[100000];
int binarySearch(int value, int low, int high)
{
	int mid;

	while (low <= high)
	{
		mid = (high + low) / 2;
		if (arrN[mid] == value)
			return 1;

		if (value > arrN[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return 0;
}

int main()
{
	
	int arrM[100000];
	int N;
	int M;
	int temp;
	int answer;
	int key;
	int j;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arrN[i]);

	sort(arrN, arrN + N);

	scanf("%d", &M);
	for (int i = 0; i < M; i++)
		scanf("%d", &arrM[i]);

	for (int i = 0; i < M; i++)
	{
		answer = binarySearch(arrM[i], 0, N - 1);
		printf("%d\n", answer);
	}
	

}