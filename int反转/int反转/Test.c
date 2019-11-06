#include <stdio.h>
int reverseInt(int n)
{
	int r = 0;
	while (n)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", reverseInt(n));
	return 0;
}