#define _CRT_SECURE_NO_WARNINGS 1
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

int buywater(int n)
{
	int count = 20;
	while (n > 1)
	{
		n = (n / 2) + (n % 2);
		count += n;
		
	}
	return count;




}
int main()
{
	int a = 20;
	int ret=buywater(20);
	printf("20元可以喝%d瓶汽水\n", ret);
	return 0;
}