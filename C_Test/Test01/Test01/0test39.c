#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//
//	/*struct S {
//		int n;
//		short m;
//		int arr[];
//	};
//
//	struct S*p= (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);
//	if (p == NULL) {
//		return 1;
//	}
//	p->n = 5;
//	p->m = 6;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		scanf("%d", &(p->arr[i]));
//	}
//	printf("%d %d\n", p->n, p->m);
//	for (i = 0; i < 4; i++) {
//		printf("%d ", p->arr[i]);
//	}
//	
//
//	struct S*ptr = realloc(p, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr != NULL) {
//		p = ptr;
//	}
//	else {
//		return 1;
//	}*/
//
//	/*free(p);
//	p = NULL;
//	return 0;*/
//
//	struct S {
//		int n;
//		float s;
//		int* arr;
//	};
//	
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	if (p == NULL) {
//		return 1;
//	}
//	p->n = 100;
//	p->s = 5.0;
//
//	int* ptr = (int*)malloc(sizeof(int) * 4);
//	if (ptr == NULL) {
//		return 1;
//	}
//	if (ptr == NULL) {
//		return 1;
//	}
//	else {
//		p->arr = ptr;
//	}
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		scanf("%d", p->arr + i);
//	}
//	printf("%d %lf\n", p->n, p->s);
//	for (i = 0; i < 4; i++) {
//		printf("%d ", *(p->arr + i));
//	}
//
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//
//	return 0;
//}
