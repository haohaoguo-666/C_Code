#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	//int mid = (left + right) / 2;          left+right����������ͱ�ʾ��Χ
//	int mid = (right - left) / 2 + left;//�Ľ�
//	while (right >= left) {
//		if (k > arr[mid]) {
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (k < arr[mid]) {
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else {
//			printf("�ҵ�����%d,�ڵ�%d��Ԫ����", k, mid);
//			break;
//		}
//	}
//	if (right < left) {
//		printf("û�ҵ�������");
//	}
//
//}
// 
//int main()
//{
//	char arr1[] ="Welcome to my world";
//	char arr2[] ="###################";
//	int i = 0;
//	int left = 0;
//	//int length = strlen(arr1);
//	int length = sizeof(arr1)/sizeof(arr1[0]); 
//  //�����ַ�����Ԫ���Լ�'\n'
//  
//	int right = length-1;
//	for (i = 0; i < length; i++){
//		printf("%c", arr1[i]);
//	}
//	printf("\n");
//	while (left <= right) {
//		if (left <= right) {
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			left++;
//			right--;
//			for (i = 0; i < length; i++) {
//				printf("%c", arr2[i]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//
//}
 
//int main() {
//    char array[] = "999";
//    int len = sizeof(array) / sizeof(array[1]);
//    printf("%d\n", len);
//    return 0;
//}
// 
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "#####";
//	int length = strlen(arr1);
//	int left = 0;
//	int right = length - 1;
//	printf("%s\n", arr1);
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}
//int main()
//{
//	char password[] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("����������>");
//		scanf("%s",password);
//		if (strcmp(password, "abc") == 0) {
//			printf("������ȷ");
//			break;
//		}
//		else {
//			printf( "�������\n" );
//		}
//		
//	}
//	if (3 == i) {
//		printf("����������Σ��޷�����������");
//	}
//	
//	return 0;
//
//}

//��������Ϸ
//void menu() {
//
//		printf("##################\n");
//		printf("######1.guess#####\n");
//		printf("######0.exit######\n");
//		printf("##################\n");
//
//}
//
//void game() {
//
//	int math = rand() % 100 + 1;
//	int guess = 0;
//	
//	do {
//		scanf("%d", &guess);
//		if (guess > math) {
//			printf("���ֲ´���\n");
//		}
//		else if (guess < math) {
//			printf("���ֲ�С��\n");
//		}
//		else {
//			printf("��ϲ��¶���\n");
//			break;
//		}
//
//	} while (1);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do{
//		menu();
//		srand((unsigned int)time(NULL));
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			printf("�������\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//}
//int main()
//{
//	system("shutdown -s -t 60");
//	again:printf("ϵͳ���Ͼ�Ҫ�ر��ˣ�������������ȡ����ιػ�\n");
//	char input[] = { 0 };
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int* p1 = &a;
//	int* p2 = &b;
//	scanf("%d %d", &a, &b);
//	samp(p1, p2);
//	printf("a=%d,b=%d", a, b);
//}
//void samp(int* px, int* py) {
//	int z = *px;
//	*px = *py;
//	*py = z;
//}

void multiply(int a){
	printf("%d * %d = %d", a, a, a * a);
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	multiply(input);
	return 0;
}