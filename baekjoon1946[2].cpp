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
	scanf("%d", &C); //테스트 케이스 수
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N); //지원자 수
=======
	scanf("%d", &C); //?뀒?뒪?듃 耳??씠?뒪 ?닔
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N); //吏??썝?옄 ?닔
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
		memset(score_1, 0, sizeof(int) * 100000);
		memset(score_2, 0, sizeof(int) * 100000);
		memset(temp, 0, sizeof(int) * 100000);
		count = 0;
<<<<<<< HEAD
		for (int j = 0; j < N; j++) //각 지원자 등수 입력 받기
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1을 기준으로 오름차순 정렬.
=======
		for (int j = 0; j < N; j++) //媛? 吏??썝?옄 ?벑?닔 ?엯?젰 諛쏄린
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1?쓣 湲곗???쑝濡? ?삤由꾩감?닚 ?젙?젹.
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
		for (int k = N - 1; k >= 0; k--) // 첫 번째 검사. score_1을 기준으로 정렬된 배열중 score_2가 다른 참가자 보다 못한 경우를 솎아낸다.
=======
		for (int k = N - 1; k >= 0; k--) // 泥? 踰덉㎏ 寃??궗. score_1?쓣 湲곗???쑝濡? ?젙?젹?맂 諛곗뿴以? score_2媛? ?떎瑜? 李멸???옄 蹂대떎 紐삵븳 寃쎌슦瑜? ?냾?븘?궦?떎.
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
		for (int y = 1; y < N; y++) // score_2을 기준으로 오름차순 정렬.
=======
		for (int y = 1; y < N; y++) // score_2?쓣 湲곗???쑝濡? ?삤由꾩감?닚 ?젙?젹.
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
		for (int k = N - 1; k >= 0; k--)// 두 번째 검사. score2를 기준으로 정렬되어 있는 배열중 score_1이 다른 참가자 보다 못한 경우를 솎아낸다.
=======
		for (int k = N - 1; k >= 0; k--)// ?몢 踰덉㎏ 寃??궗. score2瑜? 湲곗???쑝濡? ?젙?젹?릺?뼱 ?엳?뒗 諛곗뿴以? score_1?씠 ?떎瑜? 李멸???옄 蹂대떎 紐삵븳 寃쎌슦瑜? ?냾?븘?궦?떎.
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
