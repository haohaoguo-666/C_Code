#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void leftRound(char* src, int time);
int main() {
	
	char str[5] = "ABCD";
	int time;
	scanf("%d", &time);
	leftRound(str, time);
	printf("%s", str);
}
void leftRound(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len; //断开位置的下标
	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp

	strcpy(tmp, src + pos); //先将后面的全部拷过来
	strncat(tmp, src, pos); //然后将前面几个接上
	strcpy(src, tmp); //最后拷回去
}
//int main()
//{
//	int arr1[] = { 2,3,5,7 };
//	int arr2[] = { 3,5,6,7 };
//	
//	int* parr[] = { arr1,arr2 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}
//int findnum(int(*p)[4], int time,int x,int y) {
//	int i = 0;
//	int j = y-1;
//	while (i < y && j >= 0) {
//		if (*(*(p + i) + j) > time) {
//			j--;
//		}
//		else if(*(*(p + i)+j) < time) {
//			i++;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int a[][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7} };
//	int time;
//	int x = 4;
//	int y = 4;
//	scanf("%d", &time);
//	if (findnum(a, time, x, y)) {
//		printf("该数字存在");
//	}
//	else {
//		printf("该数字不存在");
//	}
//
//}