#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////
////����
////�ص�����
////
//
//void calc(int (*pf)(int , int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("������2��������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int i = 0;
//	int (*arr[4]) (int, int) = { Add,Sub,Mul,Div };
//	for (i = 0; i < 4; i++) {
//		int ret	= arr[i](x, y);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//int compare(void* e1, void* e2) {
//	return *(int*)e2 - *(int*)e1;
//}
//
//int main() {
//	int arr[] = { 34,12,53,23,544,2131 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, size, sizeof(arr[0]), compare);
//	int i = 0;
//	{
//		for (i = 0; i < size; i++) {
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//	
//}
void Swap(char* e1,char* e2,int width) {
	int i = 1;
	for (i = 1; i <= width; i++) {
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;

	}
		
}
int intcompare(const void* e1, const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}
void bubble(void* base, int size, int width, int(*intcompare)(const void* e1, const void* e2)) {
	int i = 0;
	for (i = 0; i < size - 1; i++) {
		int flag = 1;
		int j = 0;
		for (j = 0; j < size - 1 - i; j++) {
			if (intcompare((char*)base + j * width, (char*)base + (j + 1) * width)> 0){
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main() {
	int arr[] = { 83,322,353,22,1114,534,23 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, size, sizeof(arr[0]), intcompare);
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

}




//int Round(char* src, char* src2);
//int main(){
//
//	char str[5] = "ABCD";
//	char str2[5] = "VCDA";
//	
//	printf("%d", Round(str, str2));
//	return 0;
//}
//int Round(char* src,char*src2)
//{
//	int len = strlen(src);
//	int i = 0;
//	
//	for (i = 0; i < len-1; i++) {
//	int pos = i % len; //�Ͽ�λ�õ��±�
//	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
//
//	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
//	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
//		if (strcmp(tmp,src2)==0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}