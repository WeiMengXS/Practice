#define _CRT_SECURE_NO_WARNINGS 1
/*题目：求s = a + aa + aaa + aaaa + aa…a的值，其中a是一个数字。例如2 + 22 + 222 + 2222 + 22222(此时
	共有5个数相加)，几个数相加有键盘控制。
	1.程序分析：关键是计算出每一项的值。
	2.程序源代码：
	复制代码 代码如下 :
*/
#include <stdio.h>
#include <conio.h>
main()
{
	int a, n, count = 1;
	long int sn = 0, tn = 0;
	printf("please input a and n\n");
	scanf("%d, %d", &a, &n);
	printf("a = %d, n = %d\n", a, n);
	while (count <= n)
	{
		tn = tn + a;
		sn = sn + tn;
		a = a * 10;
		++count;
	}
	printf("a + aa + … = %ld\n", sn);
	getch();
}