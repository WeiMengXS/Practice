#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char*dest, const char* str)
{
	assert(dest&&str);
	while (*dest++);
	--dest;
	while (*dest++ = *str++);
	return dest;
}

int main()
{

	char p[120];
	char m[120];
	scanf("%s%s",p, m);
	my_strcat(p, m);
	printf("%s",p);
	return 0;
}