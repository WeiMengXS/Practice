#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* cp = fopen("text.txt", "w");
	fputs("���Ǳ���", cp);

	return 0;
}
