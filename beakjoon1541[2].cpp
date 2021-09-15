#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

// num_change 함수에서 pow함수를 사용할 때 일어나는 형 변환으로 산술 오버플로우가 발생하여 지저분 하지만 산술 오버플로우가 발생 안되게 하였다.
// 아무리 돌려도 답은 맞는데 백준에서 틀렸다고 한다. 에러가 나오지 않는 것으로 봐서 알고리즘 문제 인듯함.
// 입력값을 여러개 넣어서 틀린 사례를 찾아 봐야 겠다.

int num_change(int length, char temp[])
{

	double blank=0;
	double pow_blank;
	int arg;
	int num=0;
	for (int i = 0; i <= length; i++)
	{
		blank = (double)length - (double)i;
		//printf("blank = length - i = %f\n\n", blank);
		pow_blank = pow(10, blank);
		//printf("pow_blank = pow(10,blank) = %f\n\n", pow_blank);
		arg = (int)pow_blank;
		//printf("arg = (int)pow_blank = %d\n\n", arg);
		//printf("%d + %d = ", num, (temp[i] - 48) * arg);
		num += ((temp[i] - 48) * arg);
		//printf("%d \n\n", num);

		
	}
	//printf("num = %d\n\n", num);
	
	return num;
}



int main()
{
	char input[100];
	char temp[10];
	int length = -1;
	int hap=0;
	int num;
	int MINUS =0;
	scanf("%s", &input);
	
	for (int i = 0; i < 50; i++)
	{
		if (input[i] == '+')
		{
			num = num_change(length, temp);
			length = -1;
			memset(temp, 0, sizeof(char) * 10);

			if (MINUS == 1)
			{
				//printf("hap(%d) - num(%d)", hap, num);
				hap -= num;
				//printf("= %d\n", hap);
			}
			else
			{
				//printf("hap(%d) + num(%d)\n", hap, num);
				hap += num;
				//printf("= %d\n", hap);

			}
		}
		else if (input[i] == '-')
		{
			num = num_change(length, temp);
			length = -1;
			memset(temp, 0, sizeof(char) * 10);

			if (MINUS == 1)
			{
				//printf("hap(%d) - num(%d)", hap, num);
				hap -= num;
				//printf("= %d\n", hap);
			}
			else
			{
				//printf("hap(%d) + num(%d)\n", hap, num);
				hap += num;
				//printf("= %d\n", hap);

				MINUS = 1;
			}
		}
		else if (input[i] == '\0')
		{
			num = num_change(length, temp);
			length = -1;
			memset(temp, 0, sizeof(char) * 10);
			if (MINUS == 1)
			{
				//printf("hap(%d) - num(%d)", hap, num);
				hap -= num;
				//printf("= %d\n", hap);
			}
			else
			{
				//printf("hap(%d) + num(%d)\n", hap, num);
				hap += num;
				//printf("= %d\n", hap);
			}
			break;
		}
		else
		{
			length++;
			temp[length] = input[i];
			//printf("temp[%d]에 들어간 숫자 = %c \n 현재 length = %d \n ", length,input[i], length);
		}
	}

	printf("%d", hap);
	

	


}	