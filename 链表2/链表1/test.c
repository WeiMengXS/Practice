#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"
void SlistTest1()

{
	SlistNode* X=NULL;
	Slistpushback(&X,1);
	Slistprint(&X);
	Slistpushback(&X, 2);
	Slistprint(&X);

	Slistpushback(&X, 3);
	Slistprint(&X);

	Slistpushback(&X, 4);
	Slistprint(&X);

	SlistpushFront(&X, 0);
	Slistpopback(&X);
	Slistprint(&X);
	SlistpopFront(&X);
	Slistprint(&X);



}
int main()
{
	SlistTest1();

	return 0;
}