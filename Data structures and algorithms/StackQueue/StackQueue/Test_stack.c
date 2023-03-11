#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

void TestStack()
{
	ST stack;
	StackInit(&stack);
	StackPush(&stack, 1);
	StackPush(&stack, 2);
	StackPush(&stack, 3);
	StackPush(&stack, 4);
	StackPush(&stack, 5);
	StackPush(&stack, 6);
	StackPush(&stack, 7);

	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);


	printf("%d",StackSize(&stack));


	StackPrint(&stack);

}

//int main() 
//{
//	TestStack();
//}