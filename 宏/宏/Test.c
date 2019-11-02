
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
	printf("hello", " bit\n");//我们发现字符串是有自动连接的特点的。
	printf("%s", p);	PRINT("%d", i + 3);//产生了什么效果
}
//宏的优点: 增强代码的可维护性
fine __DEBUG__
/*int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i<10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__
		printf("%d\n", arr[i]);/ /为了观察数组是否赋值成功。
#endif //__DEBUG__
	}
	
		return 0;
}