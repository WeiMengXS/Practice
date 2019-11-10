#define _CRT_SECURE_NO_WARNINGS 1

int* number(int* A, int len)

{
	int tmp;
	int i = 0;
	int s = len - 1;
	while (len--){
		for (i = 0; i < len - 1; i++);
		{
			if (A[i]>A[i + 1])
			{
				tmp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = tmp;
			}

		}
	}
	return A;
}
int main()
{
	int a[] = { 1, 2, 5, 6, 3, 7 };
	int len = sizeof(a) / sizeof(a[0]);
	number(a, len);

	return 0;
}