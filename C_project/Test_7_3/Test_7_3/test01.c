#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{	
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(char*));
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//size_t

size_t my_strlen(char* str) {
	size_t count = 0;
	assert(str);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
char* my_strcpy(char* dest, char* src) {
	assert(dest && src);
	char* ret = dest;
	
	while (*dest++ = *src++) {
		;
	}
	return ret;
}
char* my_strcat(char* dest, char* src) {
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0') {
		dest++;
	}
	while (*dest++ = *src++) {
		;
	}
	return ret;
}

int main() {
	char name[20] = "yyf";
	char sex[10] = "is a man";
	printf("%s\n", name);
	my_strcat(name, sex);
	printf("%s\n", name);

}