#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<memory.h>
#include<stdlib.h>

int count = -1;
int r, c;



void Rec(int N, int a, int b)
{
	int blank;
	if (N > 1)
	{
		blank = pow(2, N - 1);
		if (r < a + blank && c < b + blank)//1사분면
		{
			//printf("1사분면 진입\n");
			Rec(N-1,a, b);
		}
		else if (r < a + blank && c >= b + blank)//2사분면
		{
			//printf("2사분면 진입\n");

			count += blank * blank;
			Rec(N - 1, a, b + blank);
		}
		else if (r >= a + blank && c < b + blank)//3사분면
		{
			//printf("3사분면 진입\n");

			count += blank * blank * 2;
			Rec(N - 1, a+blank, b);
		}
		else if (r >= a + blank && c >= b + blank)//4사분면
		{
			//printf("4사분면 진입\n");

			count += blank * blank * 3;
			Rec(N - 1, a + blank, b+blank);
		}
		
	}
	else if (N == 1)
	{
		if (a == r && b == c)
		{
			count++;
		}
		else if (a == r && b < c)
		{
			count += 2;
		}
		else if (a < r && b == c)
			count += 3;
		else if (a < r && b < c)
			count += 4;
	}
}

int main()
{
	int i,j,N, blank;

	scanf("%d %d %d", &N, &r, &c);
	blank = pow(2, N);
	Rec(N, 0, 0);


	
	printf("%d", count);
	
}