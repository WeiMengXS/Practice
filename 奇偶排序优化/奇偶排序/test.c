#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int my_num(int a[], int n)
{
	int i = 0;
	int x = n-1;
	while (i < x)
	{
		int tmp = 0;
		if (a[i] % 2!=0)
		{
			if (a[x] % 2 != 0)
			{
				i++;
			}
			else
			{
				x--;
			}
		}
		else
		{
			if (a[x] % 2 != 0)
			{
				tmp = a[i];
				
				a[i] = a[x];
				a[x]  = tmp;
				i++;
				x--;
			
			}
			else
			{
				x--;
			}
		}

	}
	return a;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	
	int len = sizeof(a) / sizeof(a[0]);
	my_num(a, len);

	return 0;
}