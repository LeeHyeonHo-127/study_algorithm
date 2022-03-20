#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>

using namespace std;



int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	int arrT[1000001];
	long long high, low, mid;
	int hap = 0;
	int temp;
	int longest = 0;
	int highest = 0;
	cin >> N;
	cin >> M;

	for (int i = 0; i < N; i++)
		cin >> arrT[i];

	sort(arrT, arrT + N);
	high = arrT[N - 1];
	low = 1;
	mid = (high + low) / 2;

	while (low <= high) {
		//cout << "low = " << low << " high = " << high << " mid = " << mid << " longest = " << longest << " highest = " << highest << " hap = " << hap << endl;


		mid = (high + low) / 2;
		hap = 0;

		for (int i = 0; i < N; i++)
		{
			temp = arrT[i] - mid;
			if (temp <= 0)
				hap += 0;
			else
				hap += temp;
		}
		if (low == high)
		{
			if (longest < mid && hap >= M)
			{
				if(highest < hap)
					highest = hap;
				longest = mid;

			}
			low = 10;
			high = 0;
		}
		

		else if (hap >= M)
		{
			low = mid + 1;
			if(longest < mid)
			{
				longest = mid;
				if(highest < hap)
					highest = hap;
			}
		}
		else if (hap < M)
		{
			high = mid;

		}


	}

	cout << longest;


}