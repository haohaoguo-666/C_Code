#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
// 文本代码->可执行程序（二进制文件）->双击启动该程序
// 生成可执行程序并运行
// 1.在win中，双击的本质运行程序，将程序加载到内存中
// 2.任何程序在被运行之前都必须被加载到内存当中
//		a.程序没有被加载的时候，在硬盘中
//		b.为什么要加载在内存：读取速度快！（冯诺依曼硬件体系结构）
//int main()
//{
//	printf("hello world!\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int x = 10;
//	char c = 'a'; // 初始化:开辟内存空间
//	double d = 3.14;
//	c = 'd';// 赋值：内存空间已经开辟了
//}

//int g_val = 100;
//int main()
//{
//	g_val = 200;
//	printf("%d", g_val);//就近原则
//	return 0;
//}

//demo
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//		printf("i=%d\n", i);
//		if (1)
//		{
//			auto int j = 0; //自动变量
//			printf("before: j=%d\n", j);
//			j += 1;
//			printf("after : j=%d\n", j);
//		}
//	}
//	system("pause");
//	return 0;
//}


//demo
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	register int a = 0;
//	printf("&a = %p\n", &a);
//	//编译器报错：错误 1 error C2103: 寄存器变量上的“&”
//	//注意，这里不是所有的编译器都报错，目前我们的vs2013是报错的。
//	//鉴于同学们刚开始学，不给大家增加负担，我们后面再慢慢引入另一个编译器。
//	system("pause");
//	return 0;
//}