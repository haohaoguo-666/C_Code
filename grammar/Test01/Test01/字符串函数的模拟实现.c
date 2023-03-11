#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>

//strlen��ʵ��
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	//�жϴ����ָ���Ƿ�Ϊ��ָ��
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�汾
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

//strcpy��ʵ��
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

//strcat��ʵ��
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

//strcmp��ʵ��
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


//strstr��ʵ��
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
//	FILE* pf = fopen("code.txt", "r");//����һ��������һ���ļ�������һ��FILE���͵�ָ����ܷ���ֵ�������ʧ���ˣ���ô�ͻ᷵��һ����ָ�롣���ҽ��������¼��һ����������Ϊerrno�����������С�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//����errno��strerror������ӡ������Ϣ
//	}
//	fclose(pf);//���ú�����ָ��ر��ļ�
//	pf = NULL;//��ָ������Ϊ��ָ��
//
//	return 0;
//}
