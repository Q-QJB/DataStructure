#include "Stack.h"

void StackInit(ST* ps)
{
	ps->a = (STDataType*)malloc(sizeof(STDataType)*4);
	if(ps->a == NULL)
		{
			printf("malloc fial\n");
			exit(-1);
		}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestory(ST* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

//ջ������ɾ������
//��ջ
void StackPush(ST* ps,STDataType x)
{
	//��������
	if(ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a,ps->capacity*2*sizeof(ST));
		if(tmp == NULL)
		{
			printf("realloc fial\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2; 
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}

//��ջ
void StackPop(ST* ps)
{
	assert(ps->top>0);
	ps->top--;
}

//ȡ����
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top>0);
	
	return ps->a[ps->top-1];
}

//����
int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

//�ж��Ƿ�Ϊ��
int StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}