#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int twofiind(int *a,int n,int len)
{
	int begin = 0; int end = len;
	while (begin < end){
		size_t mid = (begin + end) / 2;
		if (a[mid] == n)
		{
			return  a[mid];
		}
		else if (n>a[mid])
		{
			begin = mid;

		}
		else
		{
			end = mid;
		}
	}
	return -1;
}
int main()
{

	int n;
	int a[] = { 1, 2, 3, 4, 5, 7, 8 };
	size_t begin = 0, end = (sizeof(a) / sizeof(a[1])) - 1;

	printf("%d\n", twofiind(&a, 4,end));
	printf("%d\n", twofiind(&a, 1, end));
	printf("%d\n", twofiind(&a,5, end));
	printf("%d\n", twofiind(&a, 7, end));


	
	return 0;
}