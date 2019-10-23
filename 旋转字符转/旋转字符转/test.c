#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* strxz(char* str,int n,int len)
{
	char tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = str[0];
		for (int j = 0; j < len; j++)
		{
			str[j] = str[j + 1];
		}
		str[len] = tmp;
	}
	return str;
}
int main()
{
	char s[] = "ABCD";
	int k;
	scanf("%d", &k);
	int len = sizeof(s) / sizeof(s[0]) - 2;
	strxz(s, k, len);
	printf("%s",s);
	return 0;
}