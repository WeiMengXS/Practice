#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int my_num(int a[],int b[], int n)
{
	int i = 0;
	int len = n;
	int c = 0;
	for (; i < n ; i++)
	{
		if (a[i] % 2)
		{
			b[len - 1] = a[i];
			len--;
		}
		else
		{
			b[c]=a[i];
			c++;
		}
	}
	return 0;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	int b[7];
	int len = sizeof(a) / sizeof(a[0]);
	
	my_num(a,b, len);
	
	return 0;
}