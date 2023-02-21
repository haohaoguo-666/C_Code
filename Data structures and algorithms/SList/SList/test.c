#define _CRT_SECURE_NO_WARNINGS 1 
#include "SList.h"

void TestSList1() {
	/*SLTNode* n1 = BuySLTNode(1);
	SLTNode* n2 = BuySLTNode(2);
	SLTNode* n3 = BuySLTNode(3);
	SLTNode* n4 = BuySLTNode(4);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;*/
	SLTNode* plist = CreateSList(5);
	SLTPushBack(&plist, 100);
	//����ָ������Ϊ����ҪҪ�ı�ͷ�ڵ�
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	
	
	//һ��ָ��ֻ�Ǳ���ָ��
	SLTNode* ptr = SLTFind(plist, 3);
	if (ptr) {
		printf("�ҵ���\n");
		SLTInsertAfter(ptr, 7);
		SLTInsert(&plist, ptr, 7);
		SLTEraseAfter(ptr);
		SLTErase(&plist, ptr);
		ptr = NULL;
	}
	else {
		printf("�Ҳ���\n  ");
	}
	SLTDestory(&plist);
	SLTPrint(plist);

}

int main() {
	TestSList1();
}