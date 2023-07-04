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
//	int* p = (int*)malloc(sizeof(int) * N); //��̬���ٿռ�
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
//	free(p); // �������Ҫ����Ա�����ͷ�
//
//	system("pause");
//
//	return 0;
//}



//int g_val1 = 10;
//int g_val2;
//int main()
//{
//	printf("code addr: %p\n", main); // ������
//	const char* str = "hello bit!";
//	printf("read only: %p\n", str); // �ַ�������
//	printf("init g_val: %p\n", &g_val1); // �ѳ�ʼ��ȫ��������
//	printf("uninit g_val: %p\n", &g_val2);// δ��ʼ��ȫ��������
//
//	int x = 10;
//	static int y = 10;
//	char* p = (char*)malloc(10 * sizeof(char));
//	char* p1 = (char*)malloc(10 * sizeof(char));
//	char* p2 = (char*)malloc(10 * sizeof(char));
//
//	printf("heap addr: %p\n", p); // ����
//	printf("heap addr: %p\n", p1); // ����
//	printf("heap addr: %p\n", p2); // ����
//
//	printf("stack addr: %p\n", &str); // ջ��
//	printf("stack addr: %p\n", &p); // ջ��
//	printf("stack addr: %p\n", &p1); // ջ��
//	printf("stack addr: %p\n", &p2); // ջ��
//	printf("�ֲ�����x: %p\n", &x); //�ֲ�����
//	printf("ȫ�ֱ���y: %p\n", &y); //ȫ�ֱ���
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
