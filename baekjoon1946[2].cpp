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
<<<<<<< HEAD
	scanf("%d", &C); //�׽�Ʈ ���̽� ��
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N); //������ ��
=======
	scanf("%d", &C); //테스트 케이스 수
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N); //지원자 수
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
		memset(score_1, 0, sizeof(int) * 100000);
		memset(score_2, 0, sizeof(int) * 100000);
		memset(temp, 0, sizeof(int) * 100000);
		count = 0;
<<<<<<< HEAD
		for (int j = 0; j < N; j++) //�� ������ ��� �Է� �ޱ�
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1�� �������� �������� ����.
=======
		for (int j = 0; j < N; j++) //각 지원자 등수 입력 받기
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1을 기준으로 오름차순 정렬.
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
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

<<<<<<< HEAD
		for (int k = N - 1; k >= 0; k--) // ù ��° �˻�. score_1�� �������� ���ĵ� �迭�� score_2�� �ٸ� ������ ���� ���� ��츦 �ԾƳ���.
=======
		for (int k = N - 1; k >= 0; k--) // 첫 번째 검사. score_1을 기준으로 정렬된 배열중 score_2가 다른 참가자 보다 못한 경우를 솎아낸다.
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
		{
			blank = score_2[k];
			for (int t = k - 1; t >= 0; t--)
			{
				if (score_2[t] < blank)
				{
					temp[k] = -1;
				}
			}
		}

<<<<<<< HEAD
		for (int y = 1; y < N; y++) // score_2�� �������� �������� ����.
=======
		for (int y = 1; y < N; y++) // score_2을 기준으로 오름차순 정렬.
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
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
<<<<<<< HEAD
		for (int k = N - 1; k >= 0; k--)// �� ��° �˻�. score2�� �������� ���ĵǾ� �ִ� �迭�� score_1�� �ٸ� ������ ���� ���� ��츦 �ԾƳ���.
=======
		for (int k = N - 1; k >= 0; k--)// 두 번째 검사. score2를 기준으로 정렬되어 있는 배열중 score_1이 다른 참가자 보다 못한 경우를 솎아낸다.
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
		{
			blank = score_1[k];
			for (int t = k - 1; t >= 0; t--)
			{
				if (score_1[t] < blank)
					temp[k] = -1;
			}
		}
		for (int p = 0; p < N; p++)
		{
			if (temp[p] == 0)
				count++;
		}
		answer[C] = count;
	}
	for (int i = 0; i < C; i++)
		printf("%d\n", answer[i]);
<<<<<<< HEAD
}
=======
}
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
