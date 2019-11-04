#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a=0, b=0;
	scanf("%d%d", &a, &b);
	int ret = a;
	for (int i=a; i >0;i--)
	{
		if (b%a == 0)
		{
			printf("%d", a);
			break;

		}
		else if (a%i == 0)
		{
			if (b%i == 0)
			{
				printf("%d", i);
				break;
			}
			
			
		}
	
	}

	return 0;

}

