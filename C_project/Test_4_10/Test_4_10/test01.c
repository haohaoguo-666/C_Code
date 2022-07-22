#define _CRT_SECURE_NO_WARNINGS
#define P 3.1415926
#include <stdio.h>

int main()
{
	/*int a = 10;
	a = 20;

	return 0;*/

	double r = 0.0;
	scanf("%lf", &r);
	printf("%6.3lf", P * r * r);

	return 0;

}
