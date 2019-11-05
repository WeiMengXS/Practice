#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int count;
	int num[] = { 1, 2, 1, 3, 4, 5, 6, 7, 5, 6 };
	int a[20];
	int tmp=0;
	int len = sizeof(num)/sizeof(num[0]);
	for (int i = 0; i < len; i++)
	{
		count =0;
		for (int j = 0; j < len; j++)
		{
			if (num[i] == num[j])
			{
				count++;
			}
		
			
			}
		if (count == 1)
		{
			a[tmp] = num[i];
			tmp++;

		}

	}

	for (int k = 0; k < tmp; k++)
	{
		printf("%d\n", a[k]);
	}


	return 0;
}