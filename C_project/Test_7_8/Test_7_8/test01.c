#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t num) 
{
	assert(dest && src);
	void* ret = dest;
	while (num--) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		//(char*)dest++在有些编译器上有问题，因为强制类型转变产生临时变量  
	}
	 
	return ret;
}

/*int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	my_memcpy(arr2,arr1,20);
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}*/ 
void* my_memmove(void* dest, const void* src, size_t num)
{
	//有时候从前往后处理，有时候需要从后往前处理
	assert(src && dest);
	void* ret = dest;
	if (dest < src) {
		//前->后
		while(num--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else {
		//后——>前
		while (num--) {
			*((char*)dest+num) = *((char*)src+num);

		}
	}
	return ret;

}
//int main() {
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	////my_memcpy(arr1, arr1 + 2, 20);
//	//my_memmove(arr1, arr1 + 2, 20);
//	//int i = 0;
//	//for (i = 0; i < 5; i++) {
//	//	printf("%d ", arr1[i]);
//	//}
//	//return 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

int main() {
	
	/*char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);*/
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}