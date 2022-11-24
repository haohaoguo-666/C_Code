#pragma once
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
//表示一个人的信息

struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

//通讯录
struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};

//初始化通讯录
void InitContact(struct Contact* c);

//增加人的信息到通讯录
void AddContact(struct Contact* pc);

//显示通讯录中的信息
void ShowContact(const struct Contact* pc);

//删除通讯录中的信息
void DelContact(struct Contact* pc);


//查找通讯录是否有该名字
int FindByName(const struct Contact* pc, char name[]);

//查找指定联系人
void SearchContact(const struct Contact* pc);

//修改指定联系人
void ModifyContact(const struct Contact*pc);

//排序通讯录 - 年龄
void SortContact(const struct Contact*pc);