#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用函数递归

//void intput(int j)
//{
//	int a = j % 10;
//	int b = j / 10;
//	if (b == 0) {
//		printf("%d ", a);
//
//	}else{
//		intput(b);
//		printf("%d ", a);
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	intput(i);
//
//	return 0;
//}
//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int length = 0;
//	char arr[] = "abc";
//	char* str = arr;
//	while (*str != '\0') {
//		length++;
//		str++;
//	}
//	printf("%d", length);
//}
//int input(int n)
//{
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return n * input(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = input(n);
//	printf("%d", i);
//
//}
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	while (n >= 2) {
//		sum *= n;
//		n--;
//	}
//	printf("%d", sum);
//	return 0;
//}
//字符串逆序
//void reverse_string(char* string) {
//	int length = strlen(string);
//	char arr2[] = { 0 };
//	if (*string != '\0') {
//		 
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	input(arr);
//	int i = 0;
//	int length = strlen(arr);
//	for (i = 0; i < length; i++) {
//		printf("%c", arr[i]);
//	}
//}
//int input(int n) {
//	int a = n / 10;
//	int b = n % 10;
//	if (a == 0) {
//		return b;
//	}
//	else {
//		return b + input(a);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = input(n);
//	printf("%d",sum);
//
//}
//n 的 k 次方
//int input(int n,int k) {
//	if(k > 1) {
//		return n * input(n, k - 1);
//	}else{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	printf("%d", input(n,k));
//}
//斐波那契数
//int input(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else {
//		return input(n - 1) + input(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", input(n));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 3;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (i <= n) {
//		c = a + b;
//		a = b;
//		b = c;
//		i++;
//	}
//	printf("%d", c);
//}
//void print(char arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
////求字符串长度
//int my_strlen(char* str) {
//	int count = 0;
//	while (*(str) != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left <= right)
//		reverse_string(arr, left + 1, right - 1);
//}
//int main() {
//	char arr[] = "abcdefg";
//	int sz = my_strlen(arr);
//	reverse_string(arr, 0, sz - 1);
//	print(arr, sz);
//	return 0;
//}
//字符串逆序
//int my_strlen(char* str) {
//	int count = 0;
//	while(*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//		
//}
//void reverse(char* str) {
//	int length = my_strlen(str);
//	char temp = *str;
//	*str = *(str + length - 1);
//	*(str + length - 1) = '\0';
//	if (my_strlen(str+1) >= 2) {
//		reverse(str+1);
//	}	
//	*(str + length - 1) = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char arr[], int left, int right)
//{
//	char temp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = temp;
//	if (left+1 <= right-1) {
//		reverse(arr,left+1,right-1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	reverse(arr,left,right);
//	printf("%s", arr);
//}

//n的k次方
double Pow(int n, int k)
{
	if (k > 0) {
		return n * Pow(n, k - 1);
	}
	else if (k == 0) {
		return 1;
	}
	else {
		return 1 / Pow(n, -k);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double input = Pow(n, k);
	printf("%.9lf", input);
}