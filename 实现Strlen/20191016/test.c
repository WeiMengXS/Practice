#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>

int my_strlen1(const char* str)
{
	int count = 0;
	assert(str);
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}


int my_strlen2(const char* str)
{
	assert(str);
	if (*str)
	{
		return 1 + my_strlen2(str+1);
	}
	else
	{
		return 0;
	}

}
int main()
{

	const char* str = "hellow wrold";
	printf("%d\n", my_strlen1(str));
	printf("%d\n", strlen(str));
	printf("%d", my_strlen2(str));

	return 0;
}