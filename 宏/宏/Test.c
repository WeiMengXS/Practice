
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
#define Swap(a,b)((a)=(a)+(b);(b)=(a)-(b);(a)=(a)-(b))

int i = 10;
#define PRINT(FORMAT, VALUE)\
	printf("the value of " #VALUE "is "FORMAT "\n", VALUE);


int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	//printf("x=%d y=%d z=%d\n", x, y, z);
	//Swap(1,2);
	char* p = "hello ""bit\n";
	printf("hello", " bit\n");//���Ƿ����ַ��������Զ����ӵ��ص�ġ�
	printf("%s", p);	PRINT("%d", i + 3);//������ʲôЧ��
}
//����ŵ�: ��ǿ����Ŀ�ά����
fine __DEBUG__
/*int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i<10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__
		printf("%d\n", arr[i]);/ /Ϊ�˹۲������Ƿ�ֵ�ɹ���
#endif //__DEBUG__
	}
	
		return 0;
}