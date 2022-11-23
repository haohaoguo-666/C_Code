////练习使用库函数，qsort排序各种类型的数据
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int values[] = { 882, 56, 100, 2, 25 };
//
//int cmpfunc(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//void myqsort(void * base, size_t nitems, size_t size, int(*compar)(const void *, const void *))
//{
//	int i, j;
//	char * st = (char *)base; //void *不方便加减，用char *加减轻松且字节跳转为1，方便控制。
//	char tmp[16]; //考虑到long double类型，临时空间做成16字节比较保险
// 
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) //冒泡常用循环头
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) //比较的时候跳转注意乘size
//			{
//				memcpy(tmp, st + j * size, size); //交换操作用memcpy完成就不会出问题。
//				memcpy(st + j * size, st + (j + 1) * size, size);
//				memcpy(st + (j + 1) * size, tmp, size);
//			}
//		}
//	}
//}
//int main()
//{
//    int n;
//
//    printf("排序之前的列表：\n");
//    for (n = 0; n < 5; n++) {
//        printf("%d ", values[n]);
//    }
//
//    myqsort(values, 5, sizeof(int), cmpfunc);
//
//    printf("\n排序之后的列表：\n");
//    for (n = 0; n < 5; n++) {
//        printf("%d ", values[n]);
//    }
//
//    return(0);
//}
