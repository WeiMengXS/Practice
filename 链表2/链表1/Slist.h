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

SlistNode* Slistbyroom(SlistType x); //����ռ�	

void Slistpushback(SlistNode** plist, SlistType x);//β��
void SlistpushFront(SlistNode** plist, SlistType x);//ͷ��
void Slistprint(SlistNode** plist);//��ӡ
void Slistpopback(SlistNode** plist);//βɾ
void SlistpopFront(SlistNode** plist);//ͷɾ


