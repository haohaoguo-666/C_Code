#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>

//strlen的实现
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	//判断传入的指针是否为空指针
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归版本
size_t my_strlen(const char* str)
{
	assert(str);
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

//strcpy的实现
char* my_strcpy(char* destination, const char* sourse)
{
	assert(destination);
	assert(sourse);
	char* ret = destination;
	while (*destination++ = *sourse++)
	{
		;
	}

	return ret;
}

//strcat的实现
char* my_strcat(char* destination, const char* sourse)
{
	assert(destination);
	assert(sourse);
	char* ret = destination;
	while (*destination != '\0')
	{
		destination++;
	}
	while (*destination++ = *sourse++)
	{
		;
	}
	return ret;
}

//strcmp的实现
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return 1;
	else
		return -1;
}

//strncpy
//strncat
//strncmp


//strstr的实现
char* my_strstr(const char* str1, const char* str2)
{
	assert(*str1 != '\0');
	assert(*str2 != '\0');
	while (*str1 != '\0')
	{
		while (*str1 != *str2)
		{
			str1++;
		}

		int count = 0;
		char* p1 = str1;
		char* p2 = str2;

		for (int i = 0; i < strlen(str2); i++, p2++, p1++)
		{
			if (*p1 == *p2)
			{
				count++;
			}
		}
		if (count == strlen(str2))
		{
			return str1;
		}

		str1++;
	}
	return NULL;

}
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "bcd";
//	printf("%s\n", my_strstr(str1, str2));
//}

//strtok
//strterror

#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("code.txt", "r");//利用一个函数开一个文件，并用一个FILE类型的指针接受返回值，如果打开失败了，那么就会返回一个空指针。并且将错误码记录在一个变量类型为errno的数据类型中。
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//利用errno和strerror函数打印错误信息
//	}
//	fclose(pf);//利用函数和指针关闭文件
//	pf = NULL;//将指针重置为空指针
//
//	return 0;
//}
