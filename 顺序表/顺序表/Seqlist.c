
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
	//		printf("��%d�������\n",ps->_a[i]-1);
	//	}

	//}
	//		
	//		
	//			printf("û�������\n");
	//		}
	int tmp = ps->size - 1;
	while (tmp)
	{

		if (x == ps->_a[tmp])
		{
					printf("��%d�������\n",tmp-1);
					return 0;
				}

		tmp--;
	}
	printf("û�������\n");
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




