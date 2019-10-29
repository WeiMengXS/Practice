#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>

char* my_strstr(const char*dest, const char*str)
{
	char* p1 = str;
	char* p2 = dest;
	char*cp = str;
	while (*cp)
	{
		p1 = cp;
		p2 = dest;
		while (*p1&&*p2&&*p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return cp;
		}

		cp++;
	}
	return NULL;
}
int main()
{
	char* p = "abbbcd";
	char* a = "bbc";
	char* c=my_strstr(a, p);
	printf("%s", c);
	return 0;
}