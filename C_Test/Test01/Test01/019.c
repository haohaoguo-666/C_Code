//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int compare(const void* p, const void* q) {
//	return *(int*)p - *(int*)q;
//}
//void Swap( char* p,  char* q, int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char temp = *p;
//		*p = *q;
//		*q = temp;
//		p++;
//		q++;
//	}
//	
// }
//void myqsort(void* arr, int length, int width, int (*compar)(const void* a, const void* b)) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < length - 1; i++) {
//		for (j = 0; j < length - i - 1; j++) {
//			if (compar((char*)arr + width * j, (char*)arr + width * (j + 1))) {
//				Swap((char*)arr + width * j, (char*)arr + width * (j + 1),width);
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 12,76,41,1,67 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	myqsort(arr, length, sizeof(arr[0]), compare);
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//}