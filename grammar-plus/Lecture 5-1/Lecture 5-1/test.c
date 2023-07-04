#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <windows.h>
#include <assert.h>

//int main()
//{
//	#define N 10
//
//	int* p = (int*)malloc(sizeof(int) * N); //动态开辟空间
//	if (NULL == p)
//	{
//		perror("malloc\n");
//		exit(1);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		*(p + i) = 10 * i;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("p[i] = %d\n", p[i]);
//	}
//
//	free(p); // 开辟完后，要程序员自主释放
//
//	system("pause");
//
//	return 0;
//}



//int g_val1 = 10;
//int g_val2;
//int main()
//{
//	printf("code addr: %p\n", main); // 代码区
//	const char* str = "hello bit!";
//	printf("read only: %p\n", str); // 字符常量区
//	printf("init g_val: %p\n", &g_val1); // 已初始化全局数据区
//	printf("uninit g_val: %p\n", &g_val2);// 未初始化全局数据区
//
//	int x = 10;
//	static int y = 10;
//	char* p = (char*)malloc(10 * sizeof(char));
//	char* p1 = (char*)malloc(10 * sizeof(char));
//	char* p2 = (char*)malloc(10 * sizeof(char));
//
//	printf("heap addr: %p\n", p); // 堆区
//	printf("heap addr: %p\n", p1); // 堆区
//	printf("heap addr: %p\n", p2); // 堆区
//
//	printf("stack addr: %p\n", &str); // 栈区
//	printf("stack addr: %p\n", &p); // 栈区
//	printf("stack addr: %p\n", &p1); // 栈区
//	printf("stack addr: %p\n", &p2); // 栈区
//	printf("局部变量x: %p\n", &x); //局部变量
//	printf("全局变量y: %p\n", &y); //全局变量
//
//	free(p);
//	free(p1);
//	free(p2);
//	return 0;
//
//}

//struct student
//{
//	char* name;
//	int score;
//}stu, *pstu;
//
//int main()
//{
//	strcpy(stu.name, "Jimy");
//	stu.score = 90;
//	return 0;
//}
//
//int main()
//{
//	pstu = (struct student*)malloc(sizeof(struct student));
//	strcpy(pstu->name, "Jimy");
//	pstu->score = 99;
//	free(pstu);
//	return 0;
//}
//
//int main()
//{
//	pstu = (struct student*)malloc(sizeof(struct student*));
//	strcpy(pstu->name, "Jimy");
//	pstu->score = 99;
//	free(pstu);
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = (char*)malloc(sizeof(char) * strlen(p1));
//	strcpy(p2, p1);
//}


//int i = 0;
//
//char* p = NULL;
//
//int a[10] = { 0 };
//
//memset(a, 0, sizeof(a));

//int main()
//{
//	int i = 0;
//
//	int a[10] = { 0 };
//
//	for (int i = 0; i <= 10; i++)
//	{ 
//		a[i] = 0;
//	}
//}

//int main()
//{
//	char* p = (char*)malloc(sizeof(char) * 10);
//
//	free(p);
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//	assert(p);
//	int i = 0;
//	for (; i < 5; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//
//	p[0] = 10;
//
//	system("pause");
//	return 0;
//}


#define N 10

typedef struct Node {
	int val;
	struct Node* next;
}Node_t;

Node_t* initnode(int val)
{
	Node_t* p = (Node_t*)malloc(sizeof(Node_t));
	assert(p);
	p->val = val;
	p->next = NULL;
	return p;
}

void InsertNode(Node_t* head, int val)
{
	assert(head);
	Node_t* p = initnode(val);
	Node_t* swp = head->next;
	head->next = p;
	p->next = swp;
}

void ShowList(Node_t* head)
{
	assert(head);
	Node_t* p = head->next;
	while (p)
	{
		printf("%d->", p->val);
		p = p->next;
	}
	printf("NULL\n");
}

void deleteNode(Node_t* head)
{
	Node_t* p = head->next;
	head->next = head->next->next;
	free(p);
}

int main()
{
	
	Node_t* head = initnode(0);
	for (int i = 1; i <= N; i++)
	{
		InsertNode(head, i);
		ShowList(head);
		Sleep(1000);
	}

	for (int i = 1; i <= N; i++)
	{
		deleteNode(head);
		ShowList(head);
		Sleep(1000);
	}
	free(head);
	return 0;
}
