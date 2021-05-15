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

//ջ������ɾ������
//��ջ
void StackPush(ST* ps,STDataType x);
//��ջ
void StackPop(ST* ps);
//ȡ����
STDataType StackTop(ST* ps);
//����
int StackSize(ST* ps);
//�ж��Ƿ�Ϊ��
int StackEmpty(ST* ps);