#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	FILE* pfile = fopen("test.txt", "r");
//	if (NULL == pfile) {
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	int i = 0;
//	for (i = 0; i < 26; i++) {
//		fputc((char)('a' + i), pfile);
//	}
//
//	//���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfile)) != EOF) {
//		printf("%c ", ch);
//	}
//
//
//	//�ر��ļ�
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
//	//д�ļ�
//
//		/*fputs("hello world", pfile); 
//		fputs("myname is yyf", pfile);*/
//
//
//
//	//���ļ�
//	char arr[20];
//	fgets(arr,10,pfile);
//	printf("%s", arr);
//
//
//	//�ر��ļ�
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
//	//д�ļ�
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
//	//д�ļ�
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
//	//д�ļ�
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
//	//���ļ�
//	fread(&s, sizeof(s), 1, pfile);
//	printf("%s %d %lf", s.name, s.age, s.score);
//
//	fclose(pfile);
//	pfile = NULL;
//
//}