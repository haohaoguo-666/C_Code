//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdbool.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//
//typedef char STDataType;
//
//typedef struct Stack
//{
//	STDataType* a;
//	int capacity;
//	int top;
//}ST;
//
////≥ı ºªØ
//void StackInit(ST* ps);
//
////œ˙ªŸ’ª
//void StackDestory(ST* ps);
//
////—π’ª
//void StackPush(ST* ps, STDataType x);
//
////≥ˆ’ª
//void StackPop(ST* ps);
//
////ø’’ª
//bool StackEmpty(ST* ps);
//
////’ª≥§
//int StackSize(ST* ps);
//
////¥Ú”°
//void StackPrint(ST* ps);
//
////∑µªÿ’ª∂•‘™Àÿ
//STDataType StackTop(ST* ps);
//
//
//
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->capacity = 4;
//	ps->a = (STDataType*)malloc(sizeof(STDataType) * (ps->capacity));
//	assert(ps->a);
//	ps->top = 0;//’ª∂•‘™Àÿµƒœ¬“ªŒª÷√œ¬±Í top = 0/ ’ª∂•‘™Àÿ top = -1
//}
//
//void StackDestory(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//
//}
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	//¿©»›
//	if (ps->top == ps->capacity)
//	{
//		ps->a = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity * 2);
//		ps->capacity *= 2;
//		assert(ps->a);
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	ps->top--;
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//void StackPrint(ST* ps)
//{
//	assert(ps);
//	int end = 0;
//	while (end < ps->top)
//	{
//		printf("%d ", ps->a[end]);
//		end++;
//	}
//	printf("\n");
//}
//
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	return ps->a[ps->top - 1];
//}
//
//bool isValid(char* s) {
//	ST st;
//	StackInit(&st);
//	while (*s)
//	{
//		if (*s == '(' || *s == '{' || *s == '[')
//		{
//			StackPush(&st, *s);
//			s++;
//		}
//		else
//		{
//			if
//			{
//				(StackEmpty(&st))return false;
//				StackDestory(&st);
//			}
//
//			char top = StackTop(&st);
//			StackPop(&st);
//			if ((*s == ']' && top != '[') || (*s == '}' && top != '{') || (*s == ')' && top != '('))
//			{//≤ª∆•≈‰
//				StackDestory(&st);
//				return false;
//			}
//			else
//			{//∆•≈‰
//				s++;
//			}
//		}
//
//	}
//	bool ret = StackEmpty(&st);
//	StackDestory(&st);
//	return ret;
//}