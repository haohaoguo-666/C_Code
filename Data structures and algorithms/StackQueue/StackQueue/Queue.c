#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		free(cur);
		cur = cur->next;
	}
	pq->head = NULL;
	pq->tail = NULL;

}