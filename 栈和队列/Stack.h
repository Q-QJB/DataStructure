#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);

//栈顶插入删除数据
//入栈
void StackPush(ST* ps,STDataType x);
//出栈
void StackPop(ST* ps);
//取数据
STDataType StackTop(ST* ps);
//长度
int StackSize(ST* ps);
//判断是否为空
int StackEmpty(ST* ps);