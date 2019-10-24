#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[] = {3,1,3,4,2,4,5,5};
	int len = sizeof(a) / sizeof(a[0]);
	int count = 0;
	int i, j = 0;
	for (i = 0; i < len; i++)
	{
		count = 0;
		for (j=0; j < len; j++)
		{
			if (a[i] == a[j])
			{
				count++;
			}
			
		}
		if (count == 1)
		{
			printf("%d", a[i]);
		}
	
	}
	return 0;
}