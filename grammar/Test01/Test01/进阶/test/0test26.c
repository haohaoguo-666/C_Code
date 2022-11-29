#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	const char* start = str;
	const char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

char* mystrcpy(char* dest, const char* src) {
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest++ = *src++) {
		;
	}
	return ret;
}

char* mystrcat(char* dest, const char* src) {
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest != '\0') {
		dest++;
	}
	while (*dest++ = *src++) {
		;
	}
	return ret;
}

int strcmp(const char* str1, const char* str2) {
	assert(str1);
	assert(str2);
	while (*str1 == *str2) {
		if (*str1 == '\0') {
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

char* strstr(const char* str1, const char* str2){
	assert(str1 && str2);
	while (*str1 != '\0') {
		if (*str1 == *str2) {
			char* ret1 = str1;
			char* ret2 = str2;
			while (*str1++ == *str2++) {
				if (*str2 == '\0') {
					return ret1;
				} 
			}
			str2 = ret2;
			str1 =++ret1;
		}
		else {
			str1++;
		}
	}
	return NULL;
}

//int main() {
//	char arr[20] = "yyf@qq.com";
//	const* p = "@.";
//	for (char* str = strtok(arr, p); str != NULL; str = strtok(NULL, p)) {
//		printf("%s\n", str);
//	}
//
//	
//}

//int main() {
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//
//}
void* my_memcpy(void* dest, const void* src, size_t num) {
	int i = 0;
	assert(dest && src);
	void* ret = dest;
	for (i = 0; i < num; i++) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//int main() {
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 2);
//	return 0;
//}