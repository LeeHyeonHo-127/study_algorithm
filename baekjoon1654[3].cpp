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
	int high, low,mid;
	int temp = 0;
	int longest = 0;
	cin >> k;
	cin >> n;

	for (int i = 0; i < k; i++)
		cin >> arrK[i];

	sort(arrK, arrK + k);
	high = arrK[k - 1];
	low = 0;

	while (low <= high)
	{
		mid = (high + low) / 2;
		temp = 0;
		for (int i = 0; i < k; i++)
		{
			temp += arrK[i] / mid;
		}
		cout << "low = " << low << " high = " << high << " mid = " << mid << " temp = " << temp << endl;
		if (temp < n)
			high = mid ;
		else if(temp >= n)
		{
			low = mid + 1;
			if (longest < mid)
				longest = mid;
			
		}
		else if (temp == n)
		{
			if (longest < mid)
				longest = mid;
			low++;
		}
		/*else if (temp == n)
		{
			low = mid + 1;
			if (longest < mid)
				longest = mid;
		}*/
		
	}

	cout << longest;


}