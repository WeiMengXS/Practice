#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[3000];
	int n;
	scanf("%d", &n);
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i]-1;
	}
	
	printf("%d", sum);

	return 0;
}