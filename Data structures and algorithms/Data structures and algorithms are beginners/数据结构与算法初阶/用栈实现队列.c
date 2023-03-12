#define _CRT_SECURE_NO_WARNINGS 1
typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;

//��ʼ��
void StackInit(ST* ps);

//����ջ
void StackDestory(ST* ps);

//ѹջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);

//�п�
bool StackEmpty(ST* ps);

//ջ��
int StackSize(ST* ps);

//��ӡ
void StackPrint(ST* ps);

//����ջ��Ԫ��
STDataType StackTop(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);
	ps->capacity = 4;
	ps->a = (STDataType*)malloc(sizeof(STDataType) * (ps->capacity));
	assert(ps->a);
	ps->top = 0;//ջ��Ԫ�ص���һλ���±� top = 0/ ջ��Ԫ�� top = -1
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

	//����
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

typedef struct {
	ST St1;//�������
	ST St2;//��תSt1��Ԫ��
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&obj->St1);
	StackInit(&obj->St2);
	return obj;
}

void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->St1, x);
}

int myQueuePop(MyQueue* obj) {

	int x = 0;
	//������
	if (StackEmpty(&obj->St2))
	{
		while (!StackEmpty(&obj->St1))
		{
			x = StackTop(&obj->St1);
			StackPop(&obj->St1);
			StackPush(&obj->St2, x);
		}
	}

	int y = StackTop(&obj->St2);
	StackPop(&obj->St2);
	return y;

}

int myQueuePeek(MyQueue* obj) {
	int x = 0;
	//������
	if (StackEmpty(&obj->St2))
	{
		while (!StackEmpty(&obj->St1))
		{
			x = StackTop(&obj->St1);
			StackPop(&obj->St1);
			StackPush(&obj->St2, x);
		}
	}
	int y = StackTop(&obj->St2);
	//StackPop(&obj->St2);
	return y;
}

bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->St1) && StackEmpty(&obj->St2);
}

void myQueueFree(MyQueue* obj) {
	StackDestory(&obj->St1);
	StackDestory(&obj->St2);
	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/