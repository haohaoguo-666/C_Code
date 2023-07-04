#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int c = 999999999999999999;
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	a = 10;
//	int b = a;
//	
//
//	return 0;
//}

int main()
{
	int a = 0xDD;
	int b = ++a; //有b接收，那么a的先使用是将a的值(内容),放到b中
	int c = 0xEE;
	c++; //没有接收方，那么"先使用"，如何理解？
	system("pause");
	return 0;
}

//int a = 0xDD;
//00CA13DE mov dword ptr[a], 0DDh //dword ptr [a]: 就是内存中的a，定义a变量
//int b = a++; //有b接收，那么a的先使用是将a的值(内容),放到b中
//00CA13E5 mov eax, dword ptr[a] //将内存中的a，放入eax寄存器
//00CA13E8 mov dword ptr[b], eax //将eax寄存器中的内容，放入b。完成"先使用"
//00CA13EB mov ecx, dword ptr[a] //将内存中的a,放入ecx寄存器
//00CA13EE add ecx, 1 //对ecx的内容(就是a的值0xDD)，进行自增
//00CA13F1 mov dword ptr[a], ecx //将计算结果，写回a变量.完成"再自增"
//int c = 0xEE;
//00CA13F4 mov dword ptr[c], 0EEh //定义c变量
//c++; //没有接收方，那么"先使用"，如何理解？
//00CA13FB mov eax, dword ptr[c] //将C变量的内容(内存中)，读入eax寄存器
//00CA13FE add eax, 1 //完成自增
//00CA1401 mov dword ptr[c], eax //将结果写回c变量。完成"自增"
//结论：a++完整的含义是先使用，在自增。如果没有变量接收，那么直接自增(或者所谓使用，就是读取进寄存器，然后没有然后)。
//备注：不同的编译器可能处理过程不同，不过我们有一个基本研究过程，要比单纯理论学习更严谨。目前就这样理解。