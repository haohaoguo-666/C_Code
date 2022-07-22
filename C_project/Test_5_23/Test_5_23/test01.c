#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//猜名次
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//                        {
//                            if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//                            {
//                                if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//                                {
//                                    if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//                                    {
//                                        if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//                                        {//对五个值均不相同的判断
//                                            if (((a != b) && (a != c) && (a != d) && (a != e))
//                                                && ((b != c) && (b != d) && (b != e))
//                                                && ((c != d) && (c != e))
//                                                && ((d != e)))
//                                            {
//                                                printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//                                            }
//
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}

//猜凶手
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	//0表示是凶手
//	for (A = 0; A <= 1; A++)
//	{
//		for (B = 0; B <= 1; B++)
//		{
//			for (C = 0; C <= 1; C++)
//			{
//				for (D = 0; D <= 1; D++)
//				{
//					if ((A == 1 && C == 0 && D == 0 && (A + B + C + D == 3))||(A== 1 && C == 0 && D==1 && (A + B + C + D == 3)) ||
//						(A == 1 && C == 1 && D == 0 && D==1 && (A + B + C + D == 3)) || (A == 0 && C == 0 && D == 0 && D == 1&& (A + B + C + D == 3)))
//					{
//						printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//						if (A == 0) {
//								printf("A是凶手");
//							}
//							else if (B == 0){
//								printf("B是凶手");
//							}
//							else if (C == 0){
//								printf("C是凶手");
//							}
//							else {
//								printf("D是凶手");
//							}
//						break;
//					}
//					
//
//				}
//			}
//		}
//	}
//	
//	
//	return 0;
//}

//杨辉三角
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int arr[100][100] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (j == 0) {
				arr[i][0] = 1;
				printf("%d\t", arr[0][0]);
			}
			else if (j == i) {
				arr[i][j] = 1;
				printf("%d\t", arr[i][j]);
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j-1];
				printf("%d\t", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
