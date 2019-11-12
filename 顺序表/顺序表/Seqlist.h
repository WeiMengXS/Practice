#pragma once
#define N 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int Datetype;

typedef struct
{
	Datetype* _a;
	size_t size;
	size_t capicity;
		



}Seqlist;

void SeqlistInit(Seqlist* ps);
void SeqListDestory(Seqlist* ps);
void SeqListCheck(Seqlist* ps);
void SeqListprint(Seqlist* ps);
void SeqListPushBack(Seqlist* ps, Datetype x);
void SeqListPopBack(Seqlist* ps);
void SeqListPushFront(Seqlist* ps, Datetype x);
void SeqListPopRront(Seqlist* ps);
void SeqListFind(Seqlist* ps, Datetype x);