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

void ContactInit(Contact* pc);//��ʼ��ͨѶ¼
void ContactPrint(const Contact* pc);//��ӡ
void ContactAdd(Contact* pc);//������ϵ����Ϣ
void ContactDel(Contact* pc);//ɾ����ϵ����Ϣ
void ContactFind(const Contact* pc);//������Ϣ
void ContactModify(Contact* pc);//�޸���Ϣ
void ContactSortByName(Contact* pc);//����
void ContactEmpty(Contact* pc);//���ͨѶ¼