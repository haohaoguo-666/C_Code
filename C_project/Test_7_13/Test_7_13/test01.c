#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//
//	return 0;
//
//}
//int main() {
//
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*p = i;
//		p++;
//	}
//	
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main() {
//	int* p = (int*)malloc(40);
//
//	free(p);
//	p = NULL;
//
//	free(p);
//}

//void test() {
//	int* p = (int*)malloc(40);
//
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return 0;
//	free(p);
//	p = NULL;
//}
//int main() {
//
//	test();
//	return 0;
//}
//int* test() {
//	int a = 10;
//	int* p = &a;
//	return p;
//}
//
//int main() {
//	int* p = test();
//	printf("hehe\n");
//	printf("%d", *p);
//}
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main() {
	Test();
	return 0;
}