#define _CRT_SECURE_NO_WARNINGS 1
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

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
	printf("20Ԫ���Ժ�%dƿ��ˮ\n", ret);
	return 0;
}