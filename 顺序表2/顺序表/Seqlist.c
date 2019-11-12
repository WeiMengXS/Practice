
#include "Seqlist.h"

void SeqlistInit(Seqlist* ps)
{
	ps->_a = NULL;
	ps->size = 0;
	ps->capicity = 0;
}
void SeqListDestory(Seqlist* ps)
{


}
void SeqListCheck(Seqlist* ps)
{
	if (ps->capicity == ps->size)
	{
		size_t num = ps->capicity == 0 ? 4 : ps->capicity * 2;


		ps->_a = realloc(ps->_a, num * sizeof(Datetype));
		ps->capicity *= 2;
	}

}
void SeqListPushBack(Seqlist* ps, Datetype x)
{


	SeqListCheck(ps);
	ps->_a[ps->size++] = x;
	
}
void SeqListprint(Seqlist* ps)
{

	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->_a[i]);
		
	}
	printf("\n");

}
void SeqListPopBack(Seqlist* ps)
{

	ps->_a[ps->size--] = 0;
}

void Seqlistchange(Seqlist* ps, Datetype x , Datetype y)
{
	int ret = ps->size - 1;
	while (ret)
	{
		if (ps->_a[ret] == x)
		{
			ps->_a[ret] = y;

		}
		else
		{
			ret--;
		}
	}

	return 0;

}
void SeqListPopRront(Seqlist* ps)
{
	for (size_t i = 0; i < ps->size-1; i++)
		ps->_a[i] = ps->_a[i + 1];
	ps->size--;


}
void SeqListFind(Seqlist* ps, Datetype x)
{
	//for (size_t i = 0; i < ps->size - 1; i++)
	//{
	//	if (x == ps->_a[i])
	//	{
	//		printf("第%d是这个数\n",ps->_a[i]-1);
	//	}

	//}
	//		
	//		
	//			printf("没有这个数\n");
	//		}
	int tmp = ps->size - 1;
	while (tmp)
	{

		if (x == ps->_a[tmp])
		{
					printf("第%d是这个数\n",tmp-1);
					return tmp ;
				}

		tmp--;
	}
	printf("没有这个数\n");
	return 0;
}

void SeqListPushFront(Seqlist* ps, Datetype x)
{

	assert(ps);
	SeqListCheck(ps);
	Datetype end = ps->size - 1;
	for (; end >= 0; end--){
		ps->_a[end + 1] = ps->_a[end];


	}

	ps->_a[0] = x;

	ps->size++;

}




