#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char a[21];
	scanf("%s", a);
	int l = 0;
	for (; a[l] != '\0';l++);
	printf("%d", 26 * (l + 1) - l);
	return 0;
}