#define _CRT_SECURE_NO_WARNINGS 1
/*杨氏矩阵 
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);

数组：
1 2 3
2 3 4
3 4 5


1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9
*/
#include<stdio.h>
int seek(int a[][3], int n)
{
	int i = 0;
	int j = 2;
	while ((i<=2) && (j <= 2))
	{
		if (a[i][j] < n)
			i++;
		else if (a[i][j] == n)
			return 1;
		else 
			j--;
		
	}
	return 0;
}
int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int num=0;
	scanf("%d",&num);
	int ret = seek(a, num);
	if (ret)
	{
		printf("yes");
	}
	else
	{
		printf("dont have");
	}
	return 0;
}