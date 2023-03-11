#include "SeqList.h"

void SLPrint(SL* ps)
{
	assert(ps);//断言

	for (int i = 0; i < ps->size; i++)
		printf("%d ", ps->a[i]);
	printf("\n");
}

void SLInit(SL* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


void SLCheckCapacity(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)//扩容
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;//如果容量是0则增加到4，否则乘2
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);//退出程序
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SLDestroy(SL* ps)
{
	assert(ps);

	if (ps->a != NULL)
	{
		free(ps->a);//可以检查出越界
		ps->a = NULL;
		ps->size = ps->capacity = 0;
		
	}
}

//O(1)
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);

	
	SLCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
	//SLInsert(ps, p->size, x);
}

void SLPopBack(SL* ps)
{
	//温柔检查
	//if (ps->size == 0)return;
	
	//暴力检查
	assert(ps);
	assert(ps->size);

	ps->size--;
	//SLErase(ps, ps->size - 1)

}

//O(N)
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);

	SLCheckCapacity(ps);

	int end = ps->size - 1;
	while(end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
	//SLInsert(ps, 0, x); 复用
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);

	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
	//SLErase(ps, 0);
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(ps->size >= pos);
	assert(pos >= 0);
	SLCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(ps->size > pos);
	assert(pos >= 0);

	int begin = pos;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}


int SLFind(SL* ps, int x, int begin)
{
	assert(ps);
	 
	for (int i = begin; i < ps->size; i++)//从begin位置开始查询
	{
		if (ps->a[i] == x)
			return i;
	}

	return -1;
}