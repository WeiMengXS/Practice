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

SlistNode* Slistbyroom(SlistType x); //…Í«Îø’º‰	

void Slistpushback(SlistNode** plist, SlistType x);//Œ≤≤Â
void SlistpushFront(SlistNode** plist, SlistType x);//Õ∑≤Â
void Slistprint(SlistNode** plist);//¥Ú”°
void Slistpopback(SlistNode** plist);//Œ≤…æ
void SlistpopFront(SlistNode** plist);//Õ∑…æ


