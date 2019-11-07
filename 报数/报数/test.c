#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int n = 0;
	char str[][7] = { "1", "11", "21", "1211", "111221" };
	scanf("%d", &n);
	printf("%s", str[n-1]);

	return 0;
}