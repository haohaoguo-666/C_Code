#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct S {

	char name[10];
	int age;
	float score;

};

//int main() {
//
//	struct S s = { "yyf" , 20 , 93.3f };
//	struct S tmp = { 0 };
//
//	char arr[100] = { 0 };
//
//	sprintf(arr, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", arr);//���ַ�������ʽ��ӡ
//
//	sscanf(arr,"%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);//�Խṹ�����ʽ��ӡ
//
//	return 0;
//}