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
	//二级指针是因为可能要要改变头节点
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	
	
	//一级指针只是遍历指针
	SLTNode* ptr = SLTFind(plist, 3);
	if (ptr) {
		printf("找到了\n");
		SLTInsertAfter(ptr, 7);
		SLTInsert(&plist, ptr, 7);
		SLTEraseAfter(ptr);
		SLTErase(&plist, ptr);
		ptr = NULL;
	}
	else {
		printf("找不到\n  ");
	}
	SLTDestory(&plist);
	SLTPrint(plist);

}

int main() {
	TestSList1();
}