#define _CRT_SECURE_NO_WARNINGS 1
//
//��a��b��c����0��9֮������֣�abc��bcc��������λ�������У�abc + bcc = 532������������������a��b��c��ֵ
int main()
{

	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 9; c++)
			{
				if (((a * 100) + (b * 10) + (c)+(b * 100) + (c * 10) + (c)) == 532)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
	
	return 0;
}