#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <algorithm>

using namespace std;

int arrN[100000];

int lowerBound(int value, int low, int high)
{
	int mid;
	int temp;
	int count = 0;

	while (low < high)
	{
		mid = (high + low) / 2;
		/*if (arrN[mid] == value)
		{
			low = mid + 1;
		}*/

		if (value > arrN[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
	}
	return high;
}
int upperBound(int value, int low, int high)
{
	int mid;
	int temp;
	int count = 0;

	while (low < high)
	{
		mid = (high + low) / 2;

		if (value < arrN[mid+1])
		{
			low = mid;
		}
		else
		{
			high = mid;
		}
	}
	return high;
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
		answer = lowerBound(arrM[i], 0, N - 1);
		printf("%d ", answer);
	}
	

}