#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <windows.h>
//eax��ͨ�üĴ�����������ʱ���ݣ������ڷ���ֵ
//ebx��ͨ�üĴ�����������ʱ����
//ebp��ջ�׼Ĵ���
//esp��ջ���Ĵ���
//eip��ָ��Ĵ��������浱ǰָ�����һ��ָ��ĵ�ַ
//
//mov������ת��ָ��
//push��������ջ��ͬʱespջ���Ĵ���ҲҪ�����ı�
//pop�����ݵ�����ָ��λ�ã�ͬʱespջ���Ĵ���ҲҪ�����ı�
//sub����������
//add���ӷ�����
//call���������ã�1.ѹ�뷵�ص�ַ 2. ת��Ŀ�꺯��
//jump��ͨ���޸�eip��ת��Ŀ�꺯�������е���
//ret���ָ����ص�ַ��ѹ��eip������pop eip����


//int MyAdd(int a, int b)
//{
//	int c = 0;
//	c = a + b;
//	return c;
//}
//int main()
//{
//	int x = 0xA;
//	int y = 0xB;
//	int z = 0;
//	z = MyAdd(x, y);
//
//	printf("z = %x\n", z);
//}

//int FindMax(int num, ...)
//{
//	va_list arg;
//	va_start(arg, num);
//	int max = va_arg(arg, int);
//	for (int i = 0; i < num - 1; i++)
//	{
//		int var = va_arg(arg, int);
//		if (var > max)
//		{
//			max = var;
//		}
//	}
//	va_end(arg);
//	return max;
//}
//
//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	char d = 'd';
//	char e = 'e';
//	int max = FindMax(5, a, b, c, d, e);
//	printf("%d", max);
//
//	return 0;
//}


//int main(int argc, char* argv[], char* envp[])
//{
//	if (argc < 2)
//	{
//		printf("���������\n");
//	}
//	if (strcmp(argv[1], "-a") == 0)
//	{
//		printf("hello world!\n");
//	}
//	else if (strcmp(argv[1], "-b") == 0)
//	{
//		printf("hello bit!\n");
//	}
//	else
//	{
//		printf("hello none\n");
//	}
//
//	return 0;
//}


//int main(int argc, char* argv[], char* envp[])
//{
//	for (int i = 0; envp[i]; i++)
//	{
//		printf("%s\n", envp[i]);
//	}
//	return 0;
//} 


//int MyStrlen(const char* s)
//{
//	if ('\0' == *s) {
//		return 0;
//	} 
//	return MyStrlen(++s) + 1;
//} 
//int main()
//{
//	const char* str = "abcdefg123456";
//	int len = MyStrlen(str);
//	printf("len: %d\n", len);
//	system("pause");
//	return 0;
//}

//int count = 0;
//int Fib(int n)
//{
//	if (1 == n || 2 == n) {
//		return 1;
//	}
//	if (n == 3) count++;
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 42;
//	double start = GetTickCount();
//	int x = Fib(n);
//	double end = GetTickCount();
//	printf("fib(%d): %d\n", n, x);
//	printf("%lfs count:%d��\n", (end - start) / 1000, count); //��λ�Ǻ���(ms),ת����Ϊs
//	system("pause");
//	return 0;
//}

//int Fib(int n)
//{
//	int* dp = (int*)malloc(sizeof(int) * (n + 1)); //��ʱ��������ֵ�ж���
//	//[0]����(��Ȼ��Ҳ�����ã������������Ǵ�1��1��ʼ��Ϊ�˺�������)
//	dp[1] = 1;
//	dp[2] = 1;
//	for (int i = 3; i <= n; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2];
//	} 
//	int ret = dp[n];
//	free(dp);
//	return ret;
//} 
//int main()
//{
//	int n = 42;
//	double start = GetTickCount();
//	int x = Fib(n);
//	double end = GetTickCount();
//	printf("fib(%d): %d\n", n, x);
//	printf("%lf ms\n", (end - start) / 1000);
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <windows.h>
int Fib(int n)
{
	int first = 1;
	int second = 1;
	int third = 1;
	while (n > 2) {
		third = second + first;
		first = second;
		second = third;
		n--;
	} 
	return third;
} 
int main()
{
	int n = 42;
	double start = GetTickCount();
	int x = Fib(n);
	double end = GetTickCount();
	printf("fib(%d): %d\n", n, x);
	printf("%lf ms\n", (end - start) / 1000);
	system("pause");
	return 0;
}