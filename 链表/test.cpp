#include "SList.h"


void TestSList1()
{
	SLTNode* plist = NULL;
	SlistPushBack(&plist,1);
	SlistPushBack(&plist,2);
	SlistPushBack(&plist,3);
	SlistPushBack(&plist,4);
	SlistPushFront(&plist,0);
	SListPrint(plist);

	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SListPrint(plist);

	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SListPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SlistPushBack(&plist,1);
	SlistPushBack(&plist,2);
	SlistPushBack(&plist,3);
	SlistPushBack(&plist,4);
	SListPrint(plist);

	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SListPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SlistPushBack(&plist,1);
	SlistPushBack(&plist,2);
	SlistPushBack(&plist,3);
	SlistPushBack(&plist,4);
	SListPrint(plist);

	//想在3的前面插入一个30
	SLTNode* pos = NULL;
	pos = SListFind(plist,1);
	if(pos)
	{
		SlistInsert(&plist,pos,10);
	}
	SListPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SlistPushBack(&plist,1);
	SlistPushBack(&plist,2);
	SlistPushBack(&plist,3);
	SlistPushBack(&plist,4);
	SListPrint(plist);
	SLTNode* pos = NULL;
	pos = SListFind(plist,4);
	if(pos)
	{
		SlistErase(&plist,pos);
	}
	SListPrint(plist);
}

int main()
{
	TestSList4();
	return 0;
}