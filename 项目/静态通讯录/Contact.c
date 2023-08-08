#include "Contact.h"


static int FindByName(const Contact* pc, const char arr[])//ͨ�����ֲ���
{
	assert(pc && arr);
	for (int i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->date[i].name, arr) == 0)
		{
			return i;
		}
	}
	return -1;
}

void ContactInit(Contact* pc)//��ʼ��ͨѶ¼
{
	assert(pc);
	pc->size = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

void ContactPrint(const Contact* pc)//��ӡ
{
	assert(pc);
	printf("����\t�Ա�\t�绰\t��ַ\t����\n");
	for (int i = 0; i < pc->size; i++)
	{
		printf("%s\t%s\t%s\t%s\t%d\n",
			pc->date[i].name,
			pc->date[i].sex,
			pc->date[i].tele,
			pc->date[i].addr,
			pc->date[i].age);
	}
}

void ContactAdd(Contact* pc)//������ϵ����Ϣ
{
	assert(pc && pc->size <= MAX_CAPACITY);
	printf("������������\n");
	scanf("%s", pc->date[pc->size].name);
	printf("�������Ա�\n");
	scanf("%s", pc->date[pc->size].sex);
	printf("������绰��\n");
	scanf("%s", pc->date[pc->size].tele);
	printf("�������ַ��\n");
	scanf("%s", pc->date[pc->size].addr);
	printf("���������䣺\n");
	scanf("%d", &(pc->date[pc->size].age));
	pc->size++;
}

void ContactFind(const Contact* pc)//������Ϣ
{
	assert(pc);
	printf("��������������:");
	char arr[20] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos != -1)
	{
		printf("���ҵ�������Ϣ��\n");
		printf("����\t�Ա�\t�绰\t��ַ\t����\n");
		printf("%s\t%s\t%s\t%s\t%d\n",
			pc->date[pos].name,
			pc->date[pos].sex,
			pc->date[pos].tele,
			pc->date[pos].addr,
			pc->date[pos].age);
	}
	else
		printf("ͨѶ¼���޴��ˣ�\n");
}

void ContactDel(Contact* pc)//ɾ����ϵ����Ϣ
{
	assert(pc);
	printf("��������������:");
	char arr[20] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);//��¼size��λ��
	if (pos == -1)
	{
		printf("ͨѶ¼û�и���Ϣ\n");
		return;
	}
	for (int i = pos; i < pc->size - 1; i++)//�ƶ�Ԫ��
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->size--;
	printf("ɾ���ɹ���\n");
}

void ContactModify(Contact* pc)//�޸���Ϣ
{
	assert(pc);
	printf("��������������:");
	char arr[20] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("�Ҳ���\n");
		return;
	}
	else
	{
		printf("��������ĺ��������\n");
		scanf("%s", pc->date[pos].name);
		printf("��������ĺ���Ա�\n");
		scanf("%s", pc->date[pos].sex);
		printf("��������ĺ�ĵ绰��\n");
		scanf("%s", pc->date[pos].tele);
		printf("��������ĺ�ĵ�ַ��\n");
		scanf("%s", pc->date[pos].addr);
		printf("��������ĺ�����䣺\n");
		scanf("%d", &(pc->date[pos].age));
	}
}

int name_cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void ContactSortByName(Contact* pc)//����
{
	assert(pc && pc->size != 0);
	qsort(pc->date, pc->size, sizeof(PeoInfo), name_cmp);
	printf("�������\n");
}

void ContactEmpty(Contact* pc)//���ͨѶ¼
{
	assert(pc);
	ContactInit(pc);
	printf("ͨѶ¼�����\n");
}