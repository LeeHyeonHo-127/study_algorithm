#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a;
	cin >> b;
	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("==");
}