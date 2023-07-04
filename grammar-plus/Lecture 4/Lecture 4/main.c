//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <Windows.h>

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	printf("%u\n", i + j);
//
//	//数据在做计算时，本质是二进制序列在做计算
//	//类型决定了如何去解释内存中的二进制序列
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	} 
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int flag = 1;
//	// 1.先执行（）中的表达式or函数，得到真假结果
//	// 2.条件判断功能
//	// 3.进行分支功能
//	if (flag == 1)
//	{
//		printf("hello world");
//	}
//}

//测试代码1
//#include <stdio.h>
//#include <stdbool.h> //没有这个头文件会报错，使用新特性一定要加上
//#include <windows.h>
//int main()
//{
//	bool ret = false;
//	ret = true;
//	printf("%d\n", sizeof(ret)); //vs2013 和 Linux中都是1
//	system("pause");
//	return 0;
//}

////查看源码
///* stdbool.h standard header */
////stdbool.h
//#ifndef _STDBOOL
//#define _STDBOOL
//#define __bool_true_false_are_defined 1
//#ifndef __cplusplus
//比特就业课but！！
//#define bool _Bool //c99中是一个关键字哦，后续可以使用bool
//#define false 0 //假
//#define true 1 //真
//#endif /* __cplusplus */
//#endif /* _STDBOOL */
///*
//* Copyright (c) 1992-2010 by P.J. Plauger. ALL RIGHTS RESERVED.
//* Consult your license regarding permissions and restrictions.
//V5.30:0009 */

//测试代码2
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	//在vs中，光标选中BOOL，单击右键，可以看到转到定义，就能看到BOOL是什么
//	BOOL ret = FALSE;
//	ret = TRUE;
//	printf("%d\n", sizeof(ret)); //输出结果是4，因为在源代码中，是这么定义的：typedef int BOOL;
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <windows.h>
//int main()
//{
//	int pass = 0; // 0表示假,C90，我们习惯用int表示bool
//				  // bool pass = false; //C99
//	if (pass == 0) { //理论上可行，但此时的pass是应该被当做bool看待的，==用来进行整数比较，不推荐
//		//TODO
//	} 
//	
//	if(pass == false) { //不推荐，尽管在C99中也可行
//		//TODO
//	} 
//	
//	if(pass) { //推荐
//		//TODO
//	} 
//		//理论上可行，但此时的pass是应该被当做bool看待的， == 用来进行整数比较，不推荐
//		//另外，非0为真，但是非0有多个，这里也不一定是完全正确的
//	if (pass != 1) {
//		//TODO
//	} 
//		
//	if(pass != true) { //不推荐，尽管在C99中也可行
//		//TODO
//	}
//		
//	if(!pass) { //推荐
//		//TODO
//	} 
//		
//	system("pause");
//	return 0;
//}

////浮点数在内存中存储，并不想我们想的，是完整存储的，在十进制转化成为二进制，是有可能有精度损失的。
////注意这里的损失，不是一味的减少了，还有可能增多。浮点数本身存储的时候，在计算不尽的时候，会“四舍五入”
////demo1
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	double x = 3.6;
//	printf("%.50f\n", x);
//	system("pause");
//	return 0;
//}

//demo2
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if ((x - 0.9) == y) {
//		printf("you can see me!\n");
//	} 
//	else{
//		printf("oops\n");
//	} 
//	system("pause");
//	return 0;
//} 
////结论：因为精度损失问题，两个浮点数，绝对不能使用 == 进行相等比较

//代码调整后
//#include <stdio.h>
//#include <math.h> //必须包含math.h,要不然无法使用fabs
//#include <float.h> //必须包含，要不然无法使用系统精度
//#include <windows.h>
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if (fabs((x - 0.9) - y) < DBL_EPSILON) { //原始数据是浮点数，我们就用DBL_EPSILON
//		printf("you can see me!\n");
//	} 
//	else{
//		printf("oops\n");
//	} 
//	system("pause");
//	return 0;
//} 
////两个精度定义
//#define DBL_EPSILON 2.2204460492503131e-016 /* smallest such that 1.0+DBL_EPSILON != 1.0
//*/
//#define FLT_EPSILON 1.192092896e-07F /* smallest such that 1.0+FLT_EPSILON != 1.0
//*/
//XXX_EPSILON是最小误差, 是：XXX_EPSILON + n不等于n的最小的正数。
//EPSILON这个单词翻译过来是'ε'的意思，数学上，就是极小的正数

//最终代码
//#include <stdio.h>
//#include <math.h>
//#include <float.h>
//#include <windows.h>
//int main()
//{
//	double x = 0.00000000000000000000001;
//	//if (fabs(x-0.0) < DBL_EPSILON){ //写法1
//	//if (fabs(x) < DBL_EPSILON){ //写法2
//	if (x > -DBL_EPSILON && x < DBL_EPSILON) { //书中写法
//		printf("you can see me!\n");
//	} 
//	else{
//		printf("oops\n");
//	} 
//	system("pause");
//	return 0;
//} 
//	//x > -DBL_EPSILON && x < DBL_EPSILON: 为何不是 >= && <= 呢？
//	//个人看法：XXX_EPSILON是最小误差,是：XXX_EPSILON+n不等于n的最小的正数。
//	//XXX_EPSILON+n不等于n的最小的正数: 有很多数字+n都可以不等于n，但是XXX_EPSILON是最小的，but，XXX_EPSILON依旧是引起不等的一员。
//	//换句话说：fabs(x) <= DBL_EPSILON(确认x是否是0的逻辑)，如果=，就说明x本身，已经能够引起其他和他+-的数据本身的变化了，这个不符合0的概念

//int main()
//{
//	//类型不同，数字是一样的：0
//	printf("%d\n", 0);
//	printf("%d\n", NULL);
//	printf("%d\n", '\0');
//}

////测试代码换一下
//int main()
//{
//	int x = 0;
//	int y = 1;
//	if (10 == x)
//		if (11 == y)
//			printf("hello bit\n");
//		else
//			printf("hello world!\n");
//	system("pause");
//	return 0;
//}

////推荐写法
//int main()
//{
//	int x = 0;
//	int y = 1;
//	if (10 == x)
//	{
//		if (11 == y)
//		{
//			printf("hello bit\n");
//		}
//	} 
//	else
//	{
//		printf("hello world!\n");
//	} 
//	system("pause");
//	return 0;
//}

int main()
{
	int flag = 0;
	if (flag);
		printf("hello world");
}