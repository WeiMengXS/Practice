#include "Seqlist.h"


void Seqlist1()
{
	Seqlist x;
	SeqlistInit(&x);
	SeqListPushBack(&x, 1);


	SeqListPushBack(&x, 2);
	SeqListPushBack(&x, 3);
	SeqListPushBack(&x, 7);
	SeqListPushBack(&x, 8);
	SeqListPushBack(&x, 9);

	SeqListprint(&x);
	SeqListPopBack(&x);
	SeqListprint(&x);

	SeqListPushFront(&x, 4);
		SeqListprint(&x);
		SeqListPopRront(&x);
		SeqListprint(&x);
		SeqListFind(&x, 4);
		SeqListFind(&x, 2);



}
int main()
{

	Seqlist1();

	return 0;

}
