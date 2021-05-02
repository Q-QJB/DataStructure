#include "SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while(cur!=NULL)
	{
		printf("%d->",cur->data);
		cur=cur->next;
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)//创建一个节点插入数据
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}

void SlistPushBack(SLTNode** pphead,SLTDataType x)//尾插
{
	SLTNode* newnode = BuySListNode(x);
	if(*pphead==NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		//找到尾节点指针
		while(tail->next != NULL)
		{
			tail = tail->next;
		}
		//尾节点，链接新节点
		tail->next = newnode;
	}
}

void SlistPushFront(SLTNode** pphead,SLTDataType x)//头插
{
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SlistPopFront(SLTNode** pphead)//头删
{
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SlistPopBack(SLTNode** pphead)//尾删
{
	if(*pphead == NULL)//空
	{
		return;
	}
	else if((*pphead)->next == NULL)//一个
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//多个
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		//SLTNode* tail1 = *pphead;
		//int n = 0;
		//int i = 0;

		//while(tail->next != NULL)
		//{
		//	tail = tail->next;
		//	n++;
		//}
		//for(i = 1;i<n;i++)
		//{
		//	tail1 = tail1->next;
		//}
		//tail1->next = NULL;
		//free(tail);
		while(tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
	
}

SLTNode* SListFind(SLTNode* phead,SLTDataType x)//查找
{
	SLTNode* cur = phead;
	while(cur)
	{
		if(cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;

}

//在pos的前面插入x
void SlistInsert(SLTNode** pphead,SLTNode* pos,SLTDataType x)
{
	if(pos == *pphead)
	{
		SlistPushFront(pphead,x);
	}
	else
	{
		SLTNode* newnode = BuySListNode(x);
		SLTNode* prev = *pphead;
		while(prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}
//删除pos位置的值
void SlistErase(SLTNode** pphead,SLTNode* pos)
{
	if(pos == *pphead)
	{
		SlistPopFront(&* pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while(prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next=pos->next;
		free(pos);
	}
}