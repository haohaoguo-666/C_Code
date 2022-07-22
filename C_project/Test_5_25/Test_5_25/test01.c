#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	unsigned int i = 0;
	i = strlen("abc") - strlen("abcdef");
	printf("%u", i);
	
	return 0;
}

