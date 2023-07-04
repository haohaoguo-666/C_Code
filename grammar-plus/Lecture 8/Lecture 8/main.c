#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

#define NUM 64

//struct stu {
//	char name[NUM/2];
//	int age;
//	char sex;
//	char addr[NUM];
//};// 定义结构体，本质是制作类型
//int main()
//{
//	struct stu x;
//	strcpy(x.name, "张三");
//	x.age = 18;
//	struct stu* p = &x;
//	printf("%s\n", p->name);
//	pirntf("%d\n", (*p).age);
//	return 0;
//}

//struct data {
//	int num;
//
//	int arr[0];
//};
//
//int main()
//{
//	struct data* p = malloc(sizeof(struct data) + sizeof(int) * 10);
//	p->num = 10;
//	for (int i = 0; i < p->num; i++)
//	{
//		p->arr[i] = i;
//	}
//
//	free(p);
//}

//union un {
//	int a;
//	char b;
//};
//
//int main()
//{
//	union un x;
//	/*printf("%p\n", &x);
//	printf("%p\n", &(x.a));
//	printf("%p\n", &(x.b));*/
//	x.a = 1;
//	x.b = 8;
//	printf("%d\n", x.a);
//	printf("%d\n", x.b);
//}

//union un {
//	int i;
//	char a[4];
//}*p, u;
//
//int main()
//{
//	p = &u;
//	p->a[0] = 0x39;
//	p->a[1] = 0x38;
//	p->a[2] = 0x37;
//	p->a[3] = 0x36;
//
//	printf("%s\n", p->i);
//
//
//}

enum color {
	RED,
	YELLOW,
	BLACK,
	GREEN,
	BLUE
};

int main()
{
	enum color c = RED;
	
	printf("%d\n", RED);
	printf("%d\n", BLACK);
	printf("%d\n", BLUE);

	printf("%d\n", sizeof(enum color));
	printf("%d\n", sizeof(c));

}