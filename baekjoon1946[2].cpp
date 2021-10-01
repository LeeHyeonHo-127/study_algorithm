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
	scanf("%d", &C); //Å×½ºÆ® ÄÉÀÌ½º ¼ö
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N); //Áö¿øÀÚ ¼ö
=======
	scanf("%d", &C); //í…ŒìŠ¤íŠ¸ ì¼€ì´ìŠ¤ ìˆ˜
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N); //ì§€ì›ìž ìˆ˜
>>>>>>> ad825c7a0e83fe26d7e5752bb0b440697183baa9
		memset(score_1, 0, sizeof(int) * 100000);
		memset(score_2, 0, sizeof(int) * 100000);
		memset(temp, 0, sizeof(int) * 100000);
		count = 0;
<<<<<<< HEAD
		for (int j = 0; j < N; j++) //°¢ Áö¿øÀÚ µî¼ö ÀÔ·Â ¹Þ±â
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1À» ±âÁØÀ¸·Î ¿À¸§Â÷¼ø Á¤·Ä.
=======
		for (int j = 0; j < N; j++) //ê° ì§€ì›ìž ë“±ìˆ˜ ìž…ë ¥ ë°›ê¸°
		{
			scanf("%d %d", &score_1[j] ,&score_2[j]);
		}
		for (int y = 1; y < N; y++) // score_1ì„ ê¸°ì¤€ìœ¼ë¡œ ì˜¤ë¦„ì°¨ìˆœ ì •ë ¬.
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
		for (int k = N - 1; k >= 0; k--) // Ã¹ ¹øÂ° °Ë»ç. score_1À» ±âÁØÀ¸·Î Á¤·ÄµÈ ¹è¿­Áß score_2°¡ ´Ù¸¥ Âü°¡ÀÚ º¸´Ù ¸øÇÑ °æ¿ì¸¦ ¼Ô¾Æ³½´Ù.
=======
		for (int k = N - 1; k >= 0; k--) // ì²« ë²ˆì§¸ ê²€ì‚¬. score_1ì„ ê¸°ì¤€ìœ¼ë¡œ ì •ë ¬ëœ ë°°ì—´ì¤‘ score_2ê°€ ë‹¤ë¥¸ ì°¸ê°€ìž ë³´ë‹¤ ëª»í•œ ê²½ìš°ë¥¼ ì†Žì•„ë‚¸ë‹¤.
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
		for (int y = 1; y < N; y++) // score_2À» ±âÁØÀ¸·Î ¿À¸§Â÷¼ø Á¤·Ä.
=======
		for (int y = 1; y < N; y++) // score_2ì„ ê¸°ì¤€ìœ¼ë¡œ ì˜¤ë¦„ì°¨ìˆœ ì •ë ¬.
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
		for (int k = N - 1; k >= 0; k--)// µÎ ¹øÂ° °Ë»ç. score2¸¦ ±âÁØÀ¸·Î Á¤·ÄµÇ¾î ÀÖ´Â ¹è¿­Áß score_1ÀÌ ´Ù¸¥ Âü°¡ÀÚ º¸´Ù ¸øÇÑ °æ¿ì¸¦ ¼Ô¾Æ³½´Ù.
=======
		for (int k = N - 1; k >= 0; k--)// ë‘ ë²ˆì§¸ ê²€ì‚¬. score2ë¥¼ ê¸°ì¤€ìœ¼ë¡œ ì •ë ¬ë˜ì–´ ìžˆëŠ” ë°°ì—´ì¤‘ score_1ì´ ë‹¤ë¥¸ ì°¸ê°€ìž ë³´ë‹¤ ëª»í•œ ê²½ìš°ë¥¼ ì†Žì•„ë‚¸ë‹¤.
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
