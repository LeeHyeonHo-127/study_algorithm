#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>

using namespace std;

int arrN[500001];

int lowerBound(int value, int low, int high)
{
	
	while (low < high)
	{
		int mid = (low + high) / 2;
		//cout << "value = " << value << " mid = " << mid << " arrN[mid] = " << arrN[mid] << " low = " << low << " high = " << high << endl;
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
		//cout << "value = " << value << " mid = " << mid << " arrN[mid] = " << arrN[mid] << " low = " << low << " high = " << high << endl;
		if (value >= arrN[mid])
			low = mid+1;
		else if(value < arrN[mid])
			high = mid;
	}
	return high;
}


int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	int arrM[500001];
	int answer;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arrN[i];

	cin >> M;
	for (int i = 0; i < M; i++)
		cin >> arrM[i];

	sort(arrN, arrN + N);
	for (int i = 0; i < M; i++)
	{
		answer = upperBound(arrM[i], 0, N) - lowerBound(arrM[i], 0, N);
		cout << answer << " ";
	}
}