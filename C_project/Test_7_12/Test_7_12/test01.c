#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//
//enum Day//����
//{
//	//ö�ٳ���
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//#define M 100
//
//int main()
//{
//	int m = M;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//
//	enum Day d = Fri;
//
//}



//struct St
//{	
//	int a;
//	char c;
//
//};
//
//union Un
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	u.a = 0x11223344;
//	u.c = 0x55;
//	printf("%x", u.a);
//
//	return 0;
//}

//�жϵ�ǰ������Ĵ�С�˴洢
//int check_sys() {
//	int a = 1;
//	return  *(char*)&a;
//}
//int check_sys() {
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//		int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}
//union Un
//{
//	char arr[5];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


#include <string.h>
#include <stdlib.h>

//
//�䳤����
//
//int n = 0;
//scanf("%d", &n);
//int arr[n];

//int main() {
//	int arr[10] = { 0 };
//	//��̬�ڴ����
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	while (1) {
//		malloc(1);
//	}
//	return 0;
//}

////����10�����͵Ŀռ�
//
//int main(){
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL) {
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ��
	//1,2,3,4,5,6,7,8,9,10
	int i = 0;
	for (i = 0; i < 10; i++) {
		*(p + i) = i + 1;
	}
	//����

	//p = realloc(p, 80);
	//��������ʧ��
	int* ptr = realloc(p, 8000);
	if (ptr != NULL) {
		p = ptr;
	}
	//ʹ��
	for (i = 0; i < 10; i++) {
		printf("%d", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}