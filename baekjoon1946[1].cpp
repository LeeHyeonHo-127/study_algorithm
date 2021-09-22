#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int C,N,r;
	int score_2[100000];
	int score_1[100000];
	int temp[100000];
	int sort_blank1, sort_blank2,blank,sort_blank3;

	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N);
		memset(score_1, 0, sizeof(int) * 100000);
		memset(score_2, 0, sizeof(int) * 100000);
		memset(temp, 0, sizeof(int) * 100000);
		for (int j = 0; j < N; j++)
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1을 기준으로 오름차순 정렬.
		{
			sort_blank1 = score_1[y];
			sort_blank2 = score_2[y];
			for (r = y - 1; r >= 0; r--)
			{
				if (score_1[r] > sort_blank1)
				{
					score_1[r + 1] = score_1[r];
				}
				else
					break;
			}
			score_1[r + 1] = sort_blank1;
			score_2[r + 1] = sort_blank2;
		}

		for (int k = N - 1; k >= 0; k--) // 첫 번째 검사. score_1을 기준으로 정렬된 배열중 score_2가 다른 참가자 보다 못한 경우를 솎아낸다.
		{
			blank = score_2[k];
			for (int t = k - 1; t >= 0; t--)
			{
				if (score_2[t] < blank)
				{
					temp[t] = -1;
				}
			}
		}

		for (int y = 1; y < N; y++) // score_2을 기준으로 오름차순 정렬.
		{
			sort_blank1 = score_1[y];
			sort_blank2 = score_2[y];
			sort_blank3 = temp[y];
			for (r = y - 1; r >= 0; r--)
			{
				if (score_2[r] > sort_blank2)
				{
					score_1[r + 1] = score_1[r];
					score_2[r + 1] = score_2[r];
					temp[r + 1] = temp[r];
				}
				else
					break;
			}
			score_1[r + 1] = sort_blank1;
			score_2[r + 1] = sort_blank2;
			temp[r + 1] = sort_blank3;
		}
	}
}