#define _CRT_SECURE_NO_WARNINGS 1
void PerfectNumber()
{
	int p[80];  //����ֽ������
	int i, num, count, s, c = 0;
	int MaxNum = 10000;

	for (num = 2; num < MaxNum; num++)
	{
		count = 0;
		s = num;
		for (i = 1; i < num / 2 + 1; i++)      //ѭ������ÿ����
		{
			if (num % i == 0)          //�ܱ�i����
			{
				p[count++] = i;      //�������ӣ��ü�����count����1
				s -= i;               //��ȥһ������
			}
		}
		if (0 == s)
		{
			printf("%4d��һ�������������ǣ�", num);
			printf("%d = %d", num, p[0]);  //�������
			for (i = 1; i < count; i++)
				printf("+%d", p[i]);
			printf("\n");
			c++;
		}
	}
	printf("\n���ҵ�%d��������\n", c);
}
