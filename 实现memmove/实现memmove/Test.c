#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_mommove(void* dest, const void* src, int count)
{
	assert(dest&&src);
	char* ret = dest;
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	
	}
	else
	{
		while (count--)
		{
			*((char*)dest+count) = *((char*)src + count);
			
		}
	}
	return ret;
}



int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int p[10];
	my_mommove(a+2, a,16 );
	return 0;
}