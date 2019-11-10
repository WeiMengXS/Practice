#define _CRT_SECURE_NO_WARNINGS 1
int* sortArrayByParity(int* A, int ASize, int* returnSize){

	int str = 0;
	int end = ASize - 1;
	int tmp;
	while (str<end)
	{
		if (A[str] % 2 == 0)
		{
			str++;
			if (A[end] % 2 != 0)
			{
				end--;

			}
		}
		else if (A[end] % 2 == 0)
		{
			tmp = A[str];
			A[str] = A[end];
			A[end] = tmp;
			str++;
			end--;

		}


	}

	return A;

}
int main()
{
	int a[] = { 2,3,1,4 };
	int len = sizeof(a) / sizeof(a[0]);
	sortArrayByParity(a, len, 0);



}