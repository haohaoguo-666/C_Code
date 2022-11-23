#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* dest, const char* src) {
	assert(dest && src);
	while (*dest == *src){
		if (*dest == '\0') {
			return 0;
		}
		dest++;
		src++;
	}
	return *dest - *src;

}
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdeg";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 0) {
//		printf("%s", "==");
//	}
//	else if (ret < 0) {
//		printf("%s", "<");
//	}
//	else {
//		printf("%s", ">");
//	}
//
//	return 0;
//}
char* my_strstr(const char* dest, const char* src) {
	
	assert(dest && src);
	char* s1 = dest;
	char* s2 = src;
	char* p = dest;
	while (*p) {
		char* f = s2;
		while (*p == *f && *p != '\0' && *f != '\0') {
			p++;
			f++;
			if (*f == '\0') {
				return p;
			}
		}
		if(*f)
		p++;
	}
	return NULL;
}
//int main() {
//	char arr1[10] = "abcdefgh";
//	char arr2[20] = "bcd";
//	if (my_strstr(arr1, arr2)) {
//		printf("%s", "找到了");
//	}else{
//		printf("%s", "没找到");
//	}
//
//}
//void* my_memcpy(void* src, void* dest, int num) {
//	assert(src && dest);
//	void* ret = src;
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main() {
//	int arr1[7] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr1, arr2, 28);
//
//}