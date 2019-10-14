#define _CRT_SECURE_NO_WARNINGS 1



int main()
{

	int a = 0; int b[] = { 5,4, 3, 2, 1 };
	scanf("%d",&a);
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		count = count + (a / b[i]);
			a = a%b[i];

	}

	printf("%d", count);
	return 0;
}