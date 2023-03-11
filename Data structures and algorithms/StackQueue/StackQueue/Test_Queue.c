#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void TestQueue()
{
	Queue q;
	QueueInit(&q);

	QueueDestroy(&q);
}

int main()
{
	TestQueue();
}