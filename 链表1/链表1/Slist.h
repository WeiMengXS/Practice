#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SlistType;
typedef struct SlistNode
{

	SlistType Date;
	struct SlistNode* next;

}SlistNode;

SlistNode* Slistbyroom(SlistType x);
void Slistpushback(SlistNode** plist, SlistType x);