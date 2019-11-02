#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	
//	scanf("%d%d", &a, &b);
//	if (a%b == 0)
//	{
//		printf("%d", a);
//	}
//	else if (b%a==0)
//		printf("%d", b);
//	else if (a&&b)
//	{
//		printf("\0");
//	}
//	else
//	{
//
//		for ( i = 0; i <= b; i++)
//		{
//			
//				if ((i*a) % b == 0)
//				{
//					printf("%d\n", i*a);
//				}
//			}
//		
//
//	}
//
//
//	return 0;
//}
#include<stdio.h>
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);


	printf("%d", a*b / gcd(a, b)); 

	return 0;
}

