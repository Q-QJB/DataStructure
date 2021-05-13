#include "List.h"

void TestList1()
{
	ListNode* plist = ListInit();//初始化
	ListPushBack(plist,1);//尾插
	ListPushBack(plist,2);
	ListPushBack(plist,3);
	ListPushBack(plist,4);
    ListPrint(plist);

	ListPushfront(plist,0);//头插
	ListPrint(plist);

	ListPopFront(plist);//头删
	ListPrint(plist);

	ListPopBack(plist);//尾删
	ListPrint(plist);

	ListDestory(plist);//销毁
	ListPrint(plist);
}

void TestList2()
{
	ListNode* plist = ListInit();//初始化
	ListNode* pos;//查找
	ListPushBack(plist,1);//尾插
	ListPushBack(plist,2);
	ListPushBack(plist,3);
	ListPushBack(plist,4);
    ListPrint(plist);

	pos = ListFind(plist,3);//查找
	if(pos)
	{
		pos->date*=10;
		printf("找到了,并且节点的值x10\n");
	}
	else
	{
		printf("没找到\n");
	}
	ListPrint(plist);

	ListInsert(pos,300);//在pos前插入300
	ListPrint(plist);

	ListErase(pos);//删除pos位置值
	ListPrint(plist);
}

int main()
{
	TestList1();

	return 0;
}