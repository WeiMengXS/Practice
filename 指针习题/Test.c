#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a = 0, b = 0, c = 0;
	int n[6];
	
	scanf("%d%d%d",&a,&b,&c);
	n[0] = a + b + c;	
	n[1] = a*b*c;
	n[2] = (a + b)*c;
	n[3] = a*(b + c);
	n[4] = a*b + c;
	n[5] = a + (b*c);
	int tmp = n[0];
	for (int i = 0; i < 6; i++)
	{
		if (tmp < n[i])
		{
			tmp = n[i];
		}
	}

	printf("%d", tmp);
		
	


	return 0;
}