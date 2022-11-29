#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define DEFAULT_SZ 3
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 2
#define INC_SZ 1
//���͵�����

//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼

//��̬�汾
//typedef struct Contact
//{
//	PeoInfo data[100];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼�е�ʵ������
//}Contact;

//��̬�汾
typedef struct Contact
{
	PeoInfo* data;//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼�е�ʵ������
	int capacity;//��ǰͨѶ¼������
}Contact;

//��ʼ��ͨѶ¼
int InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ʾͨѶ¼�е���Ϣ
void ShowContact(const Contact* pc);

//ɾ��ͨѶ¼�е���Ϣ
void DelContact(Contact* pc);

//��ѯͨѶ¼�е���Ϣ
void SearchContact(Contact* pc);

//�޸�ͨѶ¼�е���Ϣ
void ModifyContact(Contact* pc);

//����ͨѶ¼�е���Ϣ
void SortContact(Contact* pc);

//����ͨѶ¼
void DestroyContact(Contact* con);