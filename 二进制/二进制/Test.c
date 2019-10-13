#define _CRT_SECURE_NO_WARNINGS 1
int num(int n)
{
	int count = 0;
	int i = 0;
	for (; i < 32; i++)
	{
		if (n & 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}



int main()
{
	int n = 5;

	printf("%d\n", num(5));
	printf("%d\n", num(8));
	printf("%d\n", num(4));
}