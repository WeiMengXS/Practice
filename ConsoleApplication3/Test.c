#define _CRT_SECURE_NO_WARNINGS 1
void BubbleSort(int *arr, int len)
{
	int i = 0;//ÌËÊý
	int flg = 0;
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;//´ÎÊý
		flg = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flg = 1;
			}
		}
		if (!flg)
		{
			break;
		}
	}
}
int main()
{
	int a[] = { 1, 5, 3, 4, 2 };
	BubbleSort(a, sizeof(a) / sizeof(a[0]));
	for (int n = 0; n < 5; n++)
	{
		printf("%d", a[n]);
	}


	return 0;
}

