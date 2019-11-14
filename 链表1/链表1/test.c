#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"
void SlistTest1()

{
	SlistNode* x;
	Slistpushback(&x,1);
	Slistpushback(&x, 2);
	Slistpushback(&x, 3);
	Slistpushback(&x, 4);


}
int main()
{
	SlistTest1();

	return 0;
}