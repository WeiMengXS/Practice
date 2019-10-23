
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int strneed(char* s, const char* dst)
{
	strncat(s, s, strlen(s));
	if (strstr(s, dst) != NULL)
	{
		return 1;
	}
	else
		return 0;

}
int main()
{
	char str[20] = "abcd";
	char dest[20] = "ACBD";
	int ret = strneed(str, dest);
	if (ret)
	{
		printf("cunzai");
	}
	else
		printf("bu cunzai");
	return 0;
}