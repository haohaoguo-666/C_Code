//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stddef.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//	
//};
//
//int main()
//
//{
//	struct S1 s1;
//	struct S2 s2;
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n",offsetof(struct S1,i));
//	printf("%d\n",offsetof(struct S1,c2));
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//void print2(const struct S* ps) {
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//int main() {
//	struct S s = { {1,2,3},100 };
//	print1(s);//传值调用
//	print2(&s);//传址调用
//}
//struct A
//{
//	int a : 2;//分配2位
//	int b : 5;//分配5位
//	int c : 10;//分配10位
//	int d : 30;//分配30位
//};
//
//int main() {
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main() {
//	printf("%d\n", sizeof(struct S));
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main() {
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}
