	#define _CRT_SECURE_NO_WARNINGS
	#include<iostream>
	#include <algorithm>

	using namespace std;



	int main()
	{
		std::ios::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);

		int k, n;
		int arrK[10001];
		long long high, low,mid;
		int temp = 0;
		int longest = 0;
		int check = 0;
		cin >> k;
		cin >> n;

		for (int i = 0; i < k; i++)
			cin >> arrK[i];

		sort(arrK, arrK + k);
		high = arrK[k - 1];
		low = 1;

	
		while (low <= high) {
			mid = (high + low) / 2;
			temp = 0;
			for (int i = 0; i < k; i++)
			{
				temp += arrK[i] / mid;
			}
			if (low == high)
			{
				if (longest < mid && temp >=n)
					longest = mid;
				low = 10;
				high = 0;
			}
			else if (temp < n)
			{
				high = mid;

			}

			else if (temp >= n)
			{
				low = mid + 1;
				if (longest < mid)
					longest = mid;
			}
		
			
		}

		cout << longest;


	}