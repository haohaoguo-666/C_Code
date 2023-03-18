#define _CRT_SECURE_NO_WARNINGS 1
#include "Binary tree.h"
#include "Queue.h"

int main()
{
	BTNode* root;
	BTNode* n1 = BuyBTNode(1);
	BTNode* n2 = BuyBTNode(2);
	BTNode* n3 = BuyBTNode(3);
	BTNode* n4 = BuyBTNode(4);
	BTNode* n5 = BuyBTNode(5);
	BTNode* n6 = BuyBTNode(6);
	BTNode* n7 = BuyBTNode(7);

	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;
	n3->right = n7;

	/*PrevOrder(n1);
	printf("\n");
	InOrder(n1);
	printf("\n");
	PostOrder(n1);*/

	printf("%d", TreeSize(n1));
	printf("\n");
	printf("%d", TreeLeafSize(n1));
	printf("\n");
	printf("%d", TreeHeight(n1));
	printf("\n");
	printf("%d", TreeKlevelSize(n1, 4));
	printf("\n");
	printf("%d", TreeFind(n1, 4)->data);
	printf("\n");
	LevelOrder(n1);
	




	return 0;
}