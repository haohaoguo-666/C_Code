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