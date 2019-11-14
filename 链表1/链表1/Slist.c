#define _CRT_SECURE_NO_WARNINGS 1

#include "Slist.h"
SlistNode* Slistbyroom(SlistType x)
{
	SlistNode* node = malloc(sizeof(SlistNode));
	node->Date = x;
	node->next = NULL;	
	return node;

}
void Slistpushback(SlistNode** plist, SlistType x)
{
	SlistNode* newnode=Slistbyroom(x);
	if (*plist->next==NULL)
	{
		*plist = newnode;
	}
	else
	{
		SlistNode* str = *plist;
		while (str->next == NULL)
		{
			str->next = newnode;
		}
	}
	
}