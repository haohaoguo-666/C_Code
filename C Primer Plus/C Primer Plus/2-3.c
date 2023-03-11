#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int transform(int age)
{
	return 365 * age;
}

int main()
{
	int age;
	scanf("%d", &age);
	printf("%d days", transform(age));
}