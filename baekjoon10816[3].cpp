#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>

using namespace std;

int arrN[100000];

int lowerBound(int value, int low, int high)
{
	
	while (low < high)
	{
		int mid = (low + high) / 2;
		if (value <= arrN[mid])
		{
			high = mid;
		}
		else
			low = mid + 1;
	}
	return high;
}

int upperBound(int value, int low, int high)
{
	
	while (low < high)
	{
		int mid = (low + high) / 2;
		cout << "value = " << value << " mid = " << mid << " arrN[mid] = " << arrN[mid] << " low = " << low << " high = " << high << endl;
		if (value >= mid)
			low = mid+1;
		else
			high = mid-1;
	}
	return high;
}


int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	int arrM[100000];
	int answer;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arrN[i];

	cin >> M;
	for (int i = 0; i < M; i++)
		cin >> arrM[i];

	for (int i = 0; i < M; i++)
	{
		answer = upperBound(arrM[i], 0, N);
		cout << "upperBound = " << answer << endl << endl;
	}
}