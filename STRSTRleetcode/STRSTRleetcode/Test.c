#define _CRT_SECURE_NO_WARNINGS 1
int strStr(char * haystack, char * needle){

	char* tail = haystack;
	char* prev = needle;
	int i = 0;
	while (*tail)
	{
		char*next = tail;
		while (*tail == *prev&&*tail)
		{
			tail++;
			prev++;
		}
		if (*prev == '\0')
		{
			return i;
		}
		tail = next;
		prev = needle;
		tail++;
		i++;
	}
	if (*haystack || *needle)
		return -1;
	else
		return 0;
}