	#define _CRT_SECURE_NO_WARNINGS
	#include<stdio.h>
	#include<string.h>

	int score_2[100000];
	int score_1[100000];
	int temp[100000] = { 0, };
	int answer[20];

	int main()
	{
		int C,N,r;

		int sort_blank1, sort_blank2,blank,sort_blank3;
		int count;
		scanf("%d", &C); //�׽�Ʈ ���̽� ��
		for (int iz = 0; iz < C; iz++)
		{
			scanf("%d", &N); //������ ��
			memset(score_1, 0, sizeof(int) * 100000);
			memset(score_2, 0, sizeof(int) * 100000);
			memset(temp, 0, sizeof(int) * 100000);
			count = 0;
			for (int j = 0; j < N; j++) //�� ������ ��� �Է� �ޱ�
			{
				scanf("%d %d", &score_1[j] ,&score_2[j]);
			}
			for (int y = 1; y < N; y++) // score_1�� �������� �������� ����.
			{
				sort_blank1 = score_1[y];
				sort_blank2 = score_2[y];
				for (r = y - 1; r >= 0; r--)
				{
					if (score_1[r] > sort_blank1)
					{
						score_1[r + 1] = score_1[r];
						score_2[r + 1] = score_2[r];
					}
					else
						break;
				}
				score_1[r + 1] = sort_blank1;
				score_2[r + 1] = sort_blank2;
			}

			//printf("score1�� �������� �������� ����\n");
			//for (int h = 0; h < N; h++)
				//printf("%d %d \n", score_1[h], score_2[h]);

			for (int k = N - 1; k >= 0; k--) // ù ��° �˻�. score_1�� �������� ���ĵ� �迭�� score_2�� �ٸ� ������ ���� ���� ��츦 �ԾƳ���.
			{
				blank = score_2[k];
				for (int t = k - 1; t >= 0; t--)
				{
					if (score_2[t] < blank)
					{
						//printf("score_1�� �������� ���ĵ� �迭�� score_2�������� �ԾƳ� ���̽� %d %d\n", score_1[k], score_2[k]);
						temp[k] = -1;
					}
				}
			}

			for (int y = 1; y < N; y++) // score_2�� �������� �������� ����.
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

			//printf("score2�� �������� �������� ����\n");
			//for (int h = 0; h < N; h++)
				//printf("%d %d \n", score_1[h], score_2[h]);

			for (int k = N - 1; k >= 0; k--)// �� ��° �˻�. score2�� �������� ���ĵǾ� �ִ� �迭�� score_1�� �ٸ� ������ ���� ���� ��츦 �ԾƳ���.
			{
				blank = score_1[k];
				for (int t = k - 1; t >= 0; t--)
				{
					if (score_1[t] < blank)
					{
						//printf("score_1�� �������� ���ĵ� �迭�� score_2�������� �ԾƳ� ���̽� %d %d\n", score_1[k], score_2[k]);
						temp[k] = -1;
					}
					
				}
			}

			//printf("����\n");
			for (int p = 0; p < N; p++)
			{
				//printf("%d %d %d\n", score_1[p], score_2[p], temp[p]);
				if (temp[p] == 0)
				{
					count++;
					//printf("if�� Ȯ��\n");
				}
				
			}
			answer[iz] = count;
		}
		for (int i = 0; i < C; i++)
			printf("%d\n", answer[i]);
	}