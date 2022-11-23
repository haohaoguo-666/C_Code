#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct s {
	int a;
	int arr[];
};

int main() {
	
	//柔性数组的使用

	struct s* ps = (struct s*)malloc(sizeof(struct s) + 40);
	ps->a = 100;
	int i = 0;
	for (i = 0; i < 10; i++) {
		ps->arr[i] = i;
		
	}
	for (i = 0; i < 10; i++) {
		
		printf("%d\n", ps->arr[i]);

	}
	
	struct s* ptr = (struct s*)realloc(ps, sizeof(struct s) + 80);
	if (ptr != NULL) {
		ps = ptr;
		ptr = NULL;
	}

	free(ps);
	ps = NULL;
	
	return 0;

}