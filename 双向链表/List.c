#include "List.h"

//����һ���¿ռ������
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->date = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

//��ʼ��ͷ���
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//��������
void ListDestory(ListNode* phead)
{
	ListNode* cur = phead->next;
	assert(phead);

	while(cur!=phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur=next;
	}
	free(phead);
	phead=NULL;
}

//��ӡ˫������
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while(cur!=phead)
	{
		printf("%d ",cur->date);
		cur = cur->next;
	}
	printf("\n");
}

//β������
void ListPushBack(ListNode* phead,LTDataType x)
{
	//ListNode* tail = phead->prev;
	//ListNode* newnode = BuyListNode(x);

	assert(phead);

	//phead->prev = newnode;
	//newnode->prev = tail;
	//tail->next = newnode;
	//newnode->next = phead;

	ListInsert(phead,x);
}

//ͷ������
void ListPushfront(ListNode* phead,LTDataType x)
{
	//ListNode* first = phead->next;
	//ListNode* newnode = BuyListNode(x);
	
	assert(phead);

	//phead->next = newnode;
	//newnode->prev = phead;
	//newnode->next = first;
	//first->prev = newnode;

	ListInsert(phead->next,x);
}

//ͷɾ����
void ListPopFront(ListNode* phead)
{
	//ListNode* first = phead->next;

	assert(phead);
	assert(phead->next  != phead);

	//phead->next = first->next;
	//first->next->prev = phead;
	//free(first);
	//first = NULL;

	ListErase(phead->next);
}

//βɾ����
void ListPopBack(ListNode* phead)
{
	//ListNode* tail = phead->prev;

	assert(phead);
	assert(phead != NULL);

	//tail->prev->next = phead;
	//phead->prev = tail->prev;
	//free(tail);
	//tail = NULL;

	ListErase(phead->prev);
}

//��������
ListNode* ListFind(ListNode* phead,LTDataType x)
{
	ListNode* cur = phead->next;
	assert(phead);

	while(cur!=phead)
	{
		if(cur->date == x)
		{
			return cur;
		}
		cur = cur->next;
	}

	return NULL;
}

//posλ��֮ǰ����x
void ListInsert(ListNode* pos,LTDataType x)
{
	ListNode* newnode = BuyListNode(x);
	assert(pos);

	newnode->prev = pos->prev;
	pos->prev->next  = newnode;
	newnode->next = pos;
	pos->prev = newnode;
}

//ɾ��posλ��ֵ
void ListErase(ListNode* pos)
{
	ListNode* ahead = pos->prev;
	ListNode* behead = pos->next;
	assert(pos);

	ahead->next = behead;
	behead->prev = ahead;

	free(pos);
	pos = NULL;
}