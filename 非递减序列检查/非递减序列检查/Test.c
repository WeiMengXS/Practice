#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a[1000], c;
	int i = 0, n = 0, t = 0;
	while (scanf("%d", &c) != EOF)
	{
		a[n] = c;
		n++;
	}
	for (i = 0; i<n - 1; i++)
	{
		if (a[i]>a[i + 1])
		{
			t++;
			if (a[i - 1] > a[i + 1])
				t = 4;
		}
	}
	if (t >= 2) printf("0");
	else printf("1");
}