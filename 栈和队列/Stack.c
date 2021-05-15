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

//栈顶插入删除数据
//入栈
void StackPush(ST* ps,STDataType x)
{
	//满了增容
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

//出栈
void StackPop(ST* ps)
{
	assert(ps->top>0);
	ps->top--;
}

//取数据
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top>0);
	
	return ps->a[ps->top-1];
}

//长度
int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

//判断是否为空
int StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}