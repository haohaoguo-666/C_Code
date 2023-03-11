#define _CRT_SECURE_NO_WARNINGS 1
//我们可以通过一个c语言自身设置的宏：offsetof来验证最终的结果。
//这个宏的作用就是输出结构体变量中每一个成员变量相对于起始位置0，的存储空间位置。
//但是在使用这个宏的时候，我们需要包含一个头文件：#include<stddef.h>

//设置默认对齐数需要用到#pragma pack( )。