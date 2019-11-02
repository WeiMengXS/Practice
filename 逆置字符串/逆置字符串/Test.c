#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

char* my_swap(char* str,int len)
{

	char* stars = str; char* end = str + len;
	--end;
	char tmp;
	while (end > stars)
	{
		tmp = *end;
		*end = *stars;
		*stars = tmp;
		stars++;
		end--;
	}
	return str;
}
int main()
{
	char str[100];
	gets(str);
	int len = strlen(str);

	my_swap(str,len);
	
	
	return 0;
}
