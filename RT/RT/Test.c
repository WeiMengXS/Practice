#define _CRT_SECURE_NO_WARNINGS 1
/*��Ŀ����s = a + aa + aaa + aaaa + aa��a��ֵ������a��һ�����֡�����2 + 22 + 222 + 2222 + 22222(��ʱ
	����5�������)������������м��̿��ơ�
	1.����������ؼ��Ǽ����ÿһ���ֵ��
	2.����Դ���룺
	���ƴ��� �������� :
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
	printf("a + aa + �� = %ld\n", sn);
	getch();
}