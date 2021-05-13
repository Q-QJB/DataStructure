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

ListNode* ListInit();//初始化头结点
void ListDestory(ListNode* phead);//销毁
void ListPrint(ListNode* phead);//打印

void ListPushBack(ListNode* phead,LTDataType x);//尾插
void ListPushfront(ListNode* phead,LTDataType x);//头插
void ListPopFront(ListNode* phead);//头删
void ListPopBack(ListNode* phead);//尾删

ListNode* ListFind(ListNode* phead,LTDataType x);//查找
void ListInsert(ListNode* pos,LTDataType x);//pos位置之前插入x
void ListErase(ListNode* pos);//删除pos位置值
