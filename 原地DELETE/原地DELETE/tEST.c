#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int* delete_(int*a, int len,int n)

{
	int* str = a;
	int* des = a;
	int count=0;
	while (len--)
	{
		if (*str != n)
		{
			*des = *str;
			des++;
			str++;
		}
		else
		{
			str++;
			count++;
		}
	}

	return des;

}
int main()
{

	int a[] = { 1, 2, 3, 4, 3, 5, 6, 3, 7, 8 };
	
	int ret=delete_(a, 10,3);
	printf("%d", ret);
	return 0;

}