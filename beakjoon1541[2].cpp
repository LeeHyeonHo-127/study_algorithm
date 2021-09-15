#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

// num_change �Լ����� pow�Լ��� ����� �� �Ͼ�� �� ��ȯ���� ��� �����÷ο찡 �߻��Ͽ� ������ ������ ��� �����÷ο찡 �߻� �ȵǰ� �Ͽ���.
// �ƹ��� ������ ���� �´µ� ���ؿ��� Ʋ�ȴٰ� �Ѵ�. ������ ������ �ʴ� ������ ���� �˰��� ���� �ε���.
// �Է°��� ������ �־ Ʋ�� ��ʸ� ã�� ���� �ڴ�.

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
			//printf("temp[%d]�� �� ���� = %c \n ���� length = %d \n ", length,input[i], length);
		}
	}

	printf("%d", hap);
	

	


}	