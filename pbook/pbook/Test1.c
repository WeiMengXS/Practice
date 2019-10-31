#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* cp = fopen("text.txt", "w");
	fputs("我是比特", cp);

	return 0;
}
