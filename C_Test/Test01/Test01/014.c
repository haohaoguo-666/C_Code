////��ϰʹ�ÿ⺯����qsort����������͵�����
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
//	char * st = (char *)base; //void *������Ӽ�����char *�Ӽ��������ֽ���תΪ1��������ơ�
//	char tmp[16]; //���ǵ�long double���ͣ���ʱ�ռ�����16�ֽڱȽϱ���
// 
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) //ð�ݳ���ѭ��ͷ
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) //�Ƚϵ�ʱ����תע���size
//			{
//				memcpy(tmp, st + j * size, size); //����������memcpy��ɾͲ�������⡣
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
//    printf("����֮ǰ���б�\n");
//    for (n = 0; n < 5; n++) {
//        printf("%d ", values[n]);
//    }
//
//    myqsort(values, 5, sizeof(int), cmpfunc);
//
//    printf("\n����֮����б�\n");
//    for (n = 0; n < 5; n++) {
//        printf("%d ", values[n]);
//    }
//
//    return(0);
//}
