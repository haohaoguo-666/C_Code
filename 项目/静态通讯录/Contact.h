#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_CAPACITY 100
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;

typedef struct Contact
{
	PeoInfo date[MAX_CAPACITY];
	int size;
}Contact;

void ContactInit(Contact* pc);//初始化通讯录
void ContactPrint(const Contact* pc);//打印
void ContactAdd(Contact* pc);//增加联系人信息
void ContactDel(Contact* pc);//删除联系人信息
void ContactFind(const Contact* pc);//查找信息
void ContactModify(Contact* pc);//修改信息
void ContactSortByName(Contact* pc);//排序
void ContactEmpty(Contact* pc);//清空通讯录