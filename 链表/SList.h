#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};
typedef struct SListNode SLTNode;

void SListPrint(SLTNode* phead);

void SlistPushBack(SLTNode** pphead,SLTDataType x);
void SlistPushFront(SLTNode** pphead,SLTDataType x);
void SlistPopFront(SLTNode** pphead);
void SlistPopBack(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead,SLTDataType x);
//在pos的前面插入x
void SlistInsert(SLTNode** pphead,SLTNode* pos,SLTDataType x);
//删除pos位置的值
void SlistErase(SLTNode** pphead,SLTNode* pos);
