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
#define DEFAULT_SZ 3
#define INC_SZ 2
//��ʾһ���˵���Ϣ

struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

//ͨѶ¼
struct Contact
{
	struct PeoInfo *data;//ָ���˴�����ݵĿռ� 

	int sz;//�Ѿ��Ž�ȥ����Ϣ

	int capacity;//����
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* c);

//�����˵���Ϣ��ͨѶ¼
void AddContact(struct Contact* pc);

//��ʾͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��ͨѶ¼�е���Ϣ
void DelContact(struct Contact* pc);


//����ͨѶ¼�Ƿ��и�����
int FindByName(const struct Contact* pc, char name[]);

//����ָ����ϵ��
void SearchContact(const struct Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(const struct Contact*pc);

//����ͨѶ¼ - ����
void SortContact(const struct Contact*pc);

//����ͨѶ¼
void DestroyContact(const struct Contact* pc);