#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////demo 1
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	//本质是向0取整
//	int i = -2.9;
//	int j = 2.9;
//	printf("%d\n", i); //结果是：-2
//	printf("%d\n", j); //结果是：2
//	system("pause");
//	return 0;
//}

////demo 2
//#include <stdio.h>
//#include <math.h> //因为使用了floor函数，需要添加该头文件
//#include <windows.h>
//int main()
//{
//	//本质是向-∞取整，注意输出格式要不然看不到结果
//	printf("%.1f\n", floor(-2.9)); //-3
//	printf("%.1f\n", floor(-2.1)); //-3
//	printf("%.1f\n", floor(2.9)); //2
//	printf("%.1f\n", floor(2.1)); //2
//	system("pause");
//	return 0;
//}

//demo 3
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//int main()
//{
//	//本质是向+∞取整，注意输出格式要不然看不到结果
//	printf("%.1f\n", ceil(-2.9)); //-2
//	printf("%.1f\n", ceil(-2.1)); //-2
//	printf("%.1f\n", ceil(2.9)); //3
//	printf("%.1f\n", ceil(2.1)); //3
//	system("pause");
//	return 0;
//}

//demo4
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//int main()
//{
//	//本质是四舍五入
//	printf("%.1f\n", round(2.1));
//	printf("%.1f\n", round(2.9));
//	printf("%.1f\n", round(-2.1));
//	printf("%.1f\n", round(-2.9));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const char* format = "%.1f \t%.1f \t%.1f \t%.1f \t%.1f\n";
//	printf("value\tround\tfloor\tceil\ttrunc\n");
//	printf("-----\t-----\t-----\t----\t-----\n");
//	printf(format, 2.3, round(2.3), floor(2.3), ceil(2.3), trunc(2.3));
//	printf(format, 3.8, round(3.8), floor(3.8), ceil(3.8), trunc(3.8));
//	printf(format, 5.5, round(5.5), floor(5.5), ceil(5.5), trunc(5.5));
//	printf(format, -2.3, round(-2.3), floor(-2.3), ceil(-2.3), trunc(-2.3));
//	printf(format, -3.8, round(-3.8), floor(-3.8), ceil(-3.8), trunc(-3.8));
//	printf(format, -5.5, round(-5.5), floor(-5.5), ceil(-5.5), trunc(-5.5));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int d = 3;
//	//printf("%d\n", a/d); //C语言中是-3，很好理解
//	printf("%d\n", a % d);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", -10 / 3); //结果：-3
//	printf("%d\n\n", -10 % 3); //结果：-1 为什么? -10=(-3)*3+(-1)
//	printf("%d\n", 10 / -3); //结果：-3
//	printf("%d\n\n", 10 % -3); //结果：1 为什么？10=(-3)*(-3)+1
//	system("pause");
//	return 0;
//}