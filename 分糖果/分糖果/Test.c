#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(int argc, char **argv) {

	int n;
	float sum1, sum2;
	for (n = 11;; n++) {
		sum1 = (n + 9) / 10.0;
		sum2 = (9 * n + 171) / 100.0;
		if (sum1 != (int)sum1)
			continue;
		if (sum2 != (int)sum2)
			continue;
		if (sum1 == sum2)
			break;
	}
	printf("����%d��ѧ��\n���ǹ��ֳ���%d��", (int)(n / sum1), n);
	printf("\n");

	return 0;
}
