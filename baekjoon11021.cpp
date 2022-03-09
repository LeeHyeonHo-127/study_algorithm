	#define _CRT_SECURE_NO_WARNINGS
	#include<iostream>

	using namespace std;

	int main()
	{
		int count;
		int a, b,hap;
		int n;

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			cin >> b;
			hap = a + b;
			cout << "Case #" << i+1 << ": " << hap << endl;
		}
	}