#define _CRT_SECURE_NO_WARNINGS 1
/*��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1��2��3.���
�ҳ�1000���ڵ�����������
1. �������������ճ���<�C��ҳ����14.
2.����Դ���룺
���ƴ��� �������� :
*/
#include ��stdio.h��
#include ��conio.h��
main()
{
	static int k[10];
	int i, j, n, s;
	for (j = 2; j<1000; j++)
	{
		n = -1;
		s = j;
		for (i = 1; i<j; i++)
		{
			if ((j%i) == 0)
			{
				n++;
				s = s - i;
				k[n] = i;
			}
		}
		if (s == 0)
		{
			printf(��%d is a wanshu��, j);
			for (i = 0; i<n; i++)
				printf(��%d, ��, k);
			printf(��%d\n��, k[n]);
		}
	}
	getch();
}