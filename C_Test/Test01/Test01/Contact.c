#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"


void InitContact(struct Contact* pc) {
	
	assert(pc);

	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));
	pc->sz = 0;

}

void AddContact(struct Contact* pc) {

	assert(pc);

	if (pc->sz == MAX) {
		printf("ͨѶ¼�Ѿ�����,�޷��������");
		return;
	}

	//�����˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰����:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("�ɹ������ϵ��\n");


}

void ShowContact(const struct Contact* pc) {

	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++) {
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(const struct Contact* pc, char name[]) {
	int i = 0;
	for (i = 0; i < pc->sz; i++) {
		if (strcmp(pc->data[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* pc) {

	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);

	//����һ��ָ�������Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1) {
		printf("Ҫɾ�����˲�����\n");
	}
	else {
		//ɾ��
		int j = 0;
		for (j = ret; j <pc->sz- 1; j++) {
			pc->data[j] = pc -> data[j + 1];
		}
		pc ->sz--;
		printf("�ɹ�ɾ��ָ����ϵ��");
	}

}


void SearchContact(const struct Contact* pc) {
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);

	//����һ��ָ�������Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1) {
		printf("Ҫɾ�����˲�����\n");
	}
	else {
		//�ҵ���
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
}

void ModifyContact(const struct Contact* pc) {
	printf("������Ҫ�޸��˵�����:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1) {
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else {
		printf("����������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("������绰����:>");
		scanf("%s", pc->data[ret].tele);
		printf("����������:>");
		scanf("%d", &(pc->data[ret].age));
		printf("������סַ:>");
		scanf("%s", pc->data[ret].addr);
		printf("�ɹ��޸���ϵ��\n");
	}

}

int CmpByAge(const void* e1, const void* e2) {
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

//int CmpByAge(const void* e1, const void* e2) {
//	return strcmp(((struct PeoInfo*)e1)->name , ((struct PeoInfo*)e2)->name);
//}

void SortContact(const struct Contact* pc) {
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
}