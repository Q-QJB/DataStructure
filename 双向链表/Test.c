#include "List.h"

void TestList1()
{
	ListNode* plist = ListInit();//��ʼ��
	ListPushBack(plist,1);//β��
	ListPushBack(plist,2);
	ListPushBack(plist,3);
	ListPushBack(plist,4);
    ListPrint(plist);

	ListPushfront(plist,0);//ͷ��
	ListPrint(plist);

	ListPopFront(plist);//ͷɾ
	ListPrint(plist);

	ListPopBack(plist);//βɾ
	ListPrint(plist);

	ListDestory(plist);//����
	ListPrint(plist);
}

void TestList2()
{
	ListNode* plist = ListInit();//��ʼ��
	ListNode* pos;//����
	ListPushBack(plist,1);//β��
	ListPushBack(plist,2);
	ListPushBack(plist,3);
	ListPushBack(plist,4);
    ListPrint(plist);

	pos = ListFind(plist,3);//����
	if(pos)
	{
		pos->date*=10;
		printf("�ҵ���,���ҽڵ��ֵx10\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
	ListPrint(plist);

	ListInsert(pos,300);//��posǰ����300
	ListPrint(plist);

	ListErase(pos);//ɾ��posλ��ֵ
	ListPrint(plist);
}

int main()
{
	TestList1();

	return 0;
}