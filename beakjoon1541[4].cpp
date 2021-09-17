#include<iostream>
#include <string>
#include <math.h>

using namespace std;
string input;

int num_change(int length, string temp)
{

	double blank = 0;
	double pow_blank;
	int arg;
	int num = 0;
	for (int i = 0; i <= length; i++)
	{
		blank = (double)length - (double)i;
		pow_blank = pow(10, blank);
		arg = (int)pow_blank;
		num += ((temp[i] - 48) * arg);
	}

	return num;
}



int main()
{

	string temp;
	int length = -1;
	int hap = 0;
	int num;
	int MINUS = 0;
	cin >> input;

	for (int i = 0; i < 100; i++)
	{
		if (input[i] == '+')
		{
			num = num_change(length, temp);
			length = -1;
			temp = "";

			if (MINUS == 1)
			{
				hap -= num;
			}
			else
			{
				hap += num;
			}
		}
		else if (input[i] == '-')
		{
			num = num_change(length, temp);
			length = -1;
			temp = "";

			if (MINUS == 1)
			{
				hap -= num;
			}
			else
			{
				hap += num;
				MINUS = 1;
			}
		}
		else if (input[i] == '\0')
		{
			num = num_change(length, temp);
			length = -1;
			temp = "";
			if (MINUS == 1)
			{
				hap -= num;
			}
			else
			{
				hap += num;
			}
			break;
		}
		else
		{
			length++;
			temp += input[i];
		}
	}

	cout << hap << endl;





}