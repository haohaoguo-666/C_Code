#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


//实现strlen
//int my_strlen(const char* p1)
//{
//	assert(p1 != NULL);
//	int count = 0;
//	while (*p1++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "sagag";
//	
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}
//
////实现strcpy
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	while (*arr1++ = *arr2++ ) 
//	{
//
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[10] = "adfadfasd";
//	char arr2[10] = "zvcxvzv";
//
//	
//	printf("交换前：arr1:%s arrr2:%s\n", arr1, arr2);
//		my_strcpy(arr1, arr2);
//	printf("交换后：arr1:%s arrr2:%s\n", arr1, arr2);
//}

//调整奇数偶数顺序
void stremp(int* p1, int* p2)
{
	int stmp = 0;
	stmp = *p1;
	*p1 = *p2;
	*p2 = stmp;
	/**p1 = *p2 ^ *p1;
	*p2 = *p2 ^ *p1;
	*p1 = *p2 ^ *p1;*/
}
void my_printf(int* p1,int length)
{
	int i = 0;
	while (i < length) {
		printf("%d ", *(p1 + i));
		i++;
	}
}
void change(int* p1,int length)
{
	int left = 0;
	int right = length-1;
	while (left <= right)
	{
		if ( (*(p1 + left) % 2 == 0) && ( *(p1 + right) % 2 == 1))
		{
			stremp(p1 + left, p1 + right);
			right--;
			left++;
		}
		else if (*(p1 + left) % 2 == 1 && *(p1 + right) % 2 == 1) {
			left++;
		}
		else if(*(p1 + left) % 2 == 0 && *(p1 + right) % 2 == 0) {
			right--;
		}
		else {
			right--;
			left++;
		}
	}
}
int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("交换前arr:");
	my_printf(arr,length);
	change(arr,length);
	printf("交换后arr:");
	my_printf(arr,length);


}