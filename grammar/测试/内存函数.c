#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//memcpy的实现
//当目标空间的地址小于源空间的地址的时候(str2 < str1)，我们从后复制。当目标空间的地址大于源空间的地址的时候(str2 > str1)，从前向后复制。
void* my_memcpy(void* str1, const void* str2, size_t num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	if (str2 < str1)
	{
		for (int i = num - 1; i >= 0; i--)
		{
			*((char*)str1 + i) = *((char*)str2 + i);
		}
		return str1;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			*((char*)str1 + i) = *((char*)str2 + i);
		}
		return str1;
	}
}

//memmove
//当目标空间的地址小于源空间的地址的时候(str2<str1)，我们从后复制。当目标空间的地址大于源空间的地址的时候(str2>str1)，从前向后复制。

//memcmp
//一个字节一个字节的比较，可以比较任何数据类型。

//memset
//这个函数就是将一个数组中，前num个字节，改成value。