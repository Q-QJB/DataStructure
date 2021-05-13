#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType date;
}ListNode;

ListNode* ListInit();//��ʼ��ͷ���
void ListDestory(ListNode* phead);//����
void ListPrint(ListNode* phead);//��ӡ

void ListPushBack(ListNode* phead,LTDataType x);//β��
void ListPushfront(ListNode* phead,LTDataType x);//ͷ��
void ListPopFront(ListNode* phead);//ͷɾ
void ListPopBack(ListNode* phead);//βɾ

ListNode* ListFind(ListNode* phead,LTDataType x);//����
void ListInsert(ListNode* pos,LTDataType x);//posλ��֮ǰ����x
void ListErase(ListNode* pos);//ɾ��posλ��ֵ
