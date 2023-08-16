#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h";

void StackInit(ST* ps)
{
	assert(ps);
	ps->capacity = 4;
	ps->a = (STDataType*)malloc(sizeof(STDataType)*(ps->capacity));
	assert(ps->a);
	ps->top = 0;//栈顶元素的下一位置下标 top = 0/ 栈顶元素 top = -1
}

void StackDestory(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;

}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	//扩容
	if (ps->top == ps->capacity)
	{
		ps->a = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity * 2);
		ps->capacity *= 2;
		assert(ps->a);
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	
	return ps->top == 0;
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

void StackPrint(ST* ps)
{
	assert(ps);
	int end = 0;
	while (end < ps->top)
	{
		printf("%d ", ps->a[end]);
		end++;
	}
	printf("\n");
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
