#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//memcpy��ʵ��
//��Ŀ��ռ�ĵ�ַС��Դ�ռ�ĵ�ַ��ʱ��(str2 < str1)�����ǴӺ��ơ���Ŀ��ռ�ĵ�ַ����Դ�ռ�ĵ�ַ��ʱ��(str2 > str1)����ǰ����ơ�
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
//��Ŀ��ռ�ĵ�ַС��Դ�ռ�ĵ�ַ��ʱ��(str2<str1)�����ǴӺ��ơ���Ŀ��ռ�ĵ�ַ����Դ�ռ�ĵ�ַ��ʱ��(str2>str1)����ǰ����ơ�

//memcmp
//һ���ֽ�һ���ֽڵıȽϣ����ԱȽ��κ��������͡�

//memset
//����������ǽ�һ�������У�ǰnum���ֽڣ��ĳ�value��