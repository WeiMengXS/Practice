#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//ÅÐ¶ÏiÊÇ·ñÎªËØÊý
		int j = 0;
		for (j = 2; j<i / 2; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j >= i / 2)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
