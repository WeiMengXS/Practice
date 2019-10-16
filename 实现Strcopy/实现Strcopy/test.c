#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>

char* my_strcopy(char* dst, const char*stc)
{
	assert(stc);
	assert(dst);
	
	while (*dst = *stc)
	{
		dst++;
		stc++;
	}
	

}


int main()
{
	char* str = "hellow world";
	char* p[13];
	my_strcopy(p, str);
	printf("%s\n", p);
	return 0;
}