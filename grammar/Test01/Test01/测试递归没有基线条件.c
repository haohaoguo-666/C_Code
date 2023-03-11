#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int sum(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

int sum(int m, int n)
{
    if (m <= n)
        return m + sum(m + 1, n);
    /*else
        return 0;*/
}
