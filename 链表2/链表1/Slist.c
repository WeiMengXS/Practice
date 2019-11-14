#define _CRT_SECURE_NO_WARNINGS 1

#include "Slist.h"
SlistNode* Slistbyroom(SlistType x)
{
	SlistNode* node = malloc(sizeof(SlistNode));
	node->Date = x;
	node->next = NULL;	
	return node;

}
void Slistpopback(SlistNode** plist)
{
	SlistNode* tail = *plist;
	SlistNode* head = *plist;

	if (*plist == NULL)
	{
		free(*plist);
	}

	while (tail->next!=NULL)
	{
		head = tail;
		tail = tail->next;
	}
	
	free(tail);
	head->next = NULL;


}

void Slistprint(SlistNode** plist)//´òÓ¡
{
	SlistNode* til = *plist;
	while (til)
	{
		printf("%d->", til->Date);
		til = til->next;
	}
	printf("NULL\n");

}
void SlistpopFront(SlistNode** plist)//Í·É¾
{
	SlistNode* tail= *plist;
	SlistNode* head = *plist;



	if (*plist == NULL)
	{
		free(*plist);

	}
	else
	{
		tail = tail->next;
		*plist = tail;
		free(head);
		
	}

}


void SlistpushFront(SlistNode** plist, SlistType x)//Í·²å

{
	SlistNode* newnode = Slistbyroom(x);
	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else
	{

		SlistNode* str = *plist;
		*plist = newnode;
		newnode->next = str;
	}

}
void Slistpushback(SlistNode** plist, SlistType x)//Î²²å
{
	SlistNode* newnode=Slistbyroom(x);

	if (*plist==NULL)
	{
		*plist = newnode;
	}
	else
	{
		SlistNode* str = *plist;

		while (str->next != NULL)
		{
			str = str->next;
			
		}
		str->next = newnode;
	}
	
}