#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b)
{
	return a > b ? a : b;
}
int main() {
	int a = 0;
	long b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", max(a, b));
	
}