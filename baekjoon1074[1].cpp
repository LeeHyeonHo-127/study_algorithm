#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<memory.h>
#include<stdlib.h>

int count = -1;
int r, c;



void Rec(int N, int a, int b, int ***Arr)
{
	int blank;
	if (N > 1)
	{
		blank = pow(2, N - 1);
		if (r < a + blank && c < b + blank)//1사분면
		{
			//printf("1사분면 진입\n");
			Rec(N-1,a, b,Arr);
		}
		else if (r < a + blank && c >= b + blank)//2사분면
		{
			//printf("2사분면 진입\n");

			count += blank * blank;
			Rec(N - 1, a, b + blank, Arr);
		}
		else if (r >= a + blank && c < b + blank)//3사분면
		{
			//printf("3사분면 진입\n");

			count += blank * blank * 2;
			Rec(N - 1, a+blank, b, Arr);
		}
		else if (r >= a + blank && c >= b + blank)//4사분면
		{
			//printf("4사분면 진입\n");

			count += blank * blank * 3;
			Rec(N - 1, a + blank, b+blank, Arr);
		}
		
	}
	else if (N == 1)
	{
		(*Arr)[a][b] = ++count;
		(*Arr)[a][b+1] = ++count;
		(*Arr)[a+1][b] = ++count;
		(*Arr)[a+1][b+1] = ++count;
	}
}

int main()
{
	int i,j,N, blank;
	int** Arr;
	scanf("%d %d %d", &N, &r, &c);
	blank = pow(2, N);

	Arr = (int**)malloc(sizeof(int) * blank);
	for (int i = 0; i < blank; i++)
	{
		Arr[i] = (int*)malloc(sizeof(int) * blank);
	}
	Rec(N, 0, 0, &Arr);


	//printf("\n");
	/*for (i = 0 ;i < blank; i++)
	{
		for (j = 0; j < blank; j++)
		{
			printf("%2d ", Arr[i][j]);
		}
		printf("\n");
	}*/
	printf("%d", Arr[r][c]);
	
}