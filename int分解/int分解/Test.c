#define _CRT_SECURE_NO_WARNINGS 1
/* zheng int is divided yinshu*/
main()
{
	int n, i;
	printf("\nplease input a number:\n");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n != i)
		{
			if (n%i == 0)
			{
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d", n);
}