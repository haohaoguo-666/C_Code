//#define _CRT_SECURE_NO_WARNINGS 1
//#define number 40
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main() {
//
//	//int* p = (int*)malloc(number * sizeof(int));
//	int* p = (int*)calloc(40, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;//�ڴ�й¶
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < number; i++) {
//		*(p+i) = i;
//		printf("%d ", *(p + i));
//	}
//
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}