#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1


int main()
{
	int a = 0, b = 0, c = 0; int num = 0;
	scanf("%d%d%d", &a, &b, &c);
	int day1[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

	for (int i = 0; i <b - 1; i++)
	{
		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		{
			day1[1] = 29;
		}
		num += day1[i];
	}
	num += c;
	printf("%d", num);
	return 0;
}