#define _CRT_SECURE_NO_WARNINGS 1
int lastnumber(char* str)
{
	char* p = str;
	char* tmp;
	int count=0;
	while (*p)
	{

		if (*p == ' ')
			tmp = p;
		p++;
	}
	tmp++;
	while (*tmp!='\0')
	{
		count++;
		tmp++;
	}
	return count;



}


int main()
{
	char str[20];
	gets(str);
	printf("%s\n", str);
	int len=lastnumber(str);
	printf("%d\n", len);

	return 0;
}