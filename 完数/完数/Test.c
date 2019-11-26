#define _CRT_SECURE_NO_WARNINGS 1
void PerfectNumber()
{
	int p[80];  //保存分解的因子
	int i, num, count, s, c = 0;
	int MaxNum = 10000;

	for (num = 2; num < MaxNum; num++)
	{
		count = 0;
		s = num;
		for (i = 1; i < num / 2 + 1; i++)      //循环处理每个数
		{
			if (num % i == 0)          //能被i整除
			{
				p[count++] = i;      //保存因子，让计数器count增加1
				s -= i;               //减去一个因子
			}
		}
		if (0 == s)
		{
			printf("%4d是一个完数，因子是：", num);
			printf("%d = %d", num, p[0]);  //输出完数
			for (i = 1; i < count; i++)
				printf("+%d", p[i]);
			printf("\n");
			c++;
		}
	}
	printf("\n共找到%d个完数。\n", c);
}
