#define _CRT_SECURE_NO_WARNINGS 1

char* my_strcat(char* dst, const char* str)
{
	int count = 0;
	while (*dst++)
	{count++;
	
	}
	
	while (*dst = *str++)
	{
		dst++;
	}
	return dst;
}



int main()
{
	char s[20] = "hellow";
	char* a = "world";

	my_strcat(s, a);
	return 0;
}