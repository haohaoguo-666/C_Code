#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	FILE* pfile = fopen("test.txt", "r");
//	if (NULL == pfile) {
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	int i = 0;
//	for (i = 0; i < 26; i++) {
//		fputc((char)('a' + i), pfile);
//	}
//
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pfile)) != EOF) {
//		printf("%c ", ch);
//	}
//
//
//	//关闭文件
//
//	fclose(pfile);
//	pfile = NULL;
//
//}

//int main() {
//	FILE* pfile = fopen("test.txt", "r");
//	if (NULL == pfile) {
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//
//		/*fputs("hello world", pfile); 
//		fputs("myname is yyf", pfile);*/
//
//
//
//	//读文件
//	char arr[20];
//	fgets(arr,10,pfile);
//	printf("%s", arr);
//
//
//	//关闭文件
//
//	fclose(pfile);
//	pfile = NULL;
//
//}

struct S{

	char name[20];
	int age;
	float score;

};

//int main() {
//
//	struct S s = { "yyf",20,97.6f };
//	FILE* pfile = fopen("test.txt", "w");
//	if (NULL == pfile) {
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fprintf(pfile,"%s %d %f", s.name, s.age, s.score);
//
//
//	fclose(pfile);
//	pfile = NULL;
//
//}

//int main() {
//
//	struct S s = { 0 };
//	FILE* pfile = fopen("test.txt", "r");
//	if (NULL == pfile) {
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fscanf(pfile, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	fclose(pfile);
//	pfile = NULL;
//
//}

//scanf(...)
//fscanf(stdin,...)

//printf(...)
//fprintf(stdout,...)
//int main() {
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}

//int main() {
//
//	struct S s = { "yyf",20,97.6f };
//	FILE* pfile = fopen("test.txt", "wb");
//	if (NULL == pfile) {
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fwrite(&s,sizeof(s),1,pfile);
//
//
//	fclose(pfile);
//	pfile = NULL;
//
//}

//int main() {
//
//	struct S s = {0};
//	FILE* pfile = fopen("test.txt", "rb");
//	if (NULL == pfile) {
//		perror("fopen"); 
//		return 1;
//	}
//
//	//读文件
//	fread(&s, sizeof(s), 1, pfile);
//	printf("%s %d %lf", s.name, s.age, s.score);
//
//	fclose(pfile);
//	pfile = NULL;
//
//}