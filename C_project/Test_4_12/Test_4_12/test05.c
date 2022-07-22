#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 100;
	for (i; i <= 200; i++)
	{
		int j = 2;
		for (j; j<=sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;
			}
			if (j = sqrt(i))
			{
				printf("%d ", i);
			}

		}
	}
	return 0;
}