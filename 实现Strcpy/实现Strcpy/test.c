#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<assert.h>

char* my_strcopy(char* dst, const char* str)

{
	assert(dst&&str);
	while (*str)
	{
		*dst++ = *str++;
	}
	*dst = '\0';
	return dst;

}
int main()
{
	char* p = "hellow world";
	char a[20];
	int n = strlen(p);
	my_strcopy(a, p);
	return 0;
}