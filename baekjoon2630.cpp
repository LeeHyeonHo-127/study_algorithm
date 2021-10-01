#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BLUE = 0;
int WHITE = 0;
int arr[128][128];

void Cut_Paper(int a, int b, int c, int d, int arr[][128])
{
	int blank = arr[a][a];
	int m1 = (a + b) / 2;
	int m2 = (c + d) / 2;
	int hap = 0;
	int k, t;

	
	
	if (a == b && c == d)
	{
		if (arr[c][a] == 1)
		{
			BLUE++;
			return;	
		}
		else
		{
			WHITE++;
			return;
		}
	}

	for (k = c; k <= d; k++)
	{
		for (t = a; t <= b; t++)
		{
			hap += arr[k][t];
		}	
	}

	if (hap == (d - c + 1) * (b - a + 1))
	{
		BLUE++;
		return;
	}
	else if (hap == 0)
	{
		WHITE++;
		return;
	}
	
	Cut_Paper(a, m1, c, m2, arr);
	Cut_Paper(a, m1, m2 + 1, d, arr);
	Cut_Paper(m1 + 1, b, c, m2, arr);
	Cut_Paper(m1 + 1, b, m2 + 1, d, arr);
}

int main()
{
	int N;
	scanf("%d", &N);
	N -= 1;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	Cut_Paper(0, N, 0, N, arr);

	printf("%d\n%d", WHITE, BLUE);
		
}