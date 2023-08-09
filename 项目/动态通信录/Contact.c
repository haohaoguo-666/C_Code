#include "Contact.h"

void ContactCapacityIncrease(Contact* pc)//�ж��Ƿ�����
{
	assert(pc);
	if (pc->size == pc->capacity)
	{
		//��Ҫ����
		int newcapacity = pc->capacity == 0 ? INITIAL : INITIAL + pc->capacity;
		PeoInfo* tmp = (PeoInfo*)realloc(pc->arr, newcapacity * sizeof(PeoInfo));
		if (tmp == NULL)
		{
			printf("%s\n", strerror(errno));
			exit(-1);
		}
		pc->arr = tmp;
		pc->capacity = newcapacity;
		printf("���ݳɹ���\n");
	}
}

void ContactInit(Contact* pc)//��ʼ��ͨѶ¼
{
	assert(pc);
	pc->size = 0;
	pc->capacity = 0;
	pc->arr = NULL;
	//�����ļ�����Ϣ��ͨѶ¼
	FILE* pf = fopen("Contact.txt", "rb");
	if (pf == NULL)
	{
		perror("ContactInit:");
		exit(-1);
	}
	ContactCapacityIncrease(pc);
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(pc->arr[0]), 1, pf) == 1)
	{
		ContactCapacityIncrease(pc);
		pc->arr[pc->size] = tmp;
		pc->size++;
	}
	fclose(pf);
	pf = NULL;
}


void ContactPrint(const Contact* pc)//��ӡ
{
	assert(pc);
	printf("����\t�Ա�\t�绰\t��ַ\t����\n");
	for (int i = 0; i < pc->size; i++)
	{
		printf("%s\t%s\t%s\t%s\t%d\n",
			pc->arr[i].name,
			pc->arr[i].sex,
			pc->arr[i].tele,
			pc->arr[i].addr,
			pc->arr[i].age);
	}
}


void ContactAdd(Contact* pc)//������ϵ����Ϣ
{
	ContactCapacityIncrease(pc);
	printf("������������\n");
	scanf("%s", pc->arr[pc->size].name);
	printf("�������Ա�\n");
	scanf("%s", pc->arr[pc->size].sex);
	printf("������绰��\n");
	scanf("%s", pc->arr[pc->size].tele);
	printf("�������ַ��\n");
	scanf("%s", pc->arr[pc->size].addr);
	printf("���������䣺\n");
	scanf("%d", &(pc->arr[pc->size].age));
	pc->size++;
}

static int FindByName(const Contact* pc, const char arr[])//ͨ�����ֲ���
{
	assert(pc && arr);
	for (int i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->arr[i].name, arr) == 0)
		{
			return i;
		}
	}
	return -1;
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
		pc->arr[i] = pc->arr[i + 1];
	}
	pc->size--;
	printf("ɾ���ɹ���\n");
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
			pc->arr[pos].name,
			pc->arr[pos].sex,
			pc->arr[pos].tele,
			pc->arr[pos].addr,
			pc->arr[pos].age);
	}
	else
		printf("ͨѶ¼���޴��ˣ�\n");
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
		scanf("%s", pc->arr[pos].name);
		printf("��������ĺ���Ա�\n");
		scanf("%s", pc->arr[pos].sex);
		printf("��������ĺ�ĵ绰��\n");
		scanf("%s", pc->arr[pos].tele);
		printf("��������ĺ�ĵ�ַ��\n");
		scanf("%s", pc->arr[pos].addr);
		printf("��������ĺ�����䣺\n");
		scanf("%d", &(pc->arr[pos].age));
	}
}

int name_cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void ContactSortByName(Contact* pc)//����
{
	assert(pc && pc->size != 0);
	qsort(pc->arr, pc->size, sizeof(PeoInfo), name_cmp);
	printf("�������\n");
}

void ContactDestroy(Contact* pc)//���ͨѶ¼
{
	assert(pc);
	free(pc->arr);
	pc->arr = NULL;
	pc->size = 0;
	pc->capacity = 0;
	printf("ͨѶ¼�����\n");
}

void ContactSave(const Contact* pc)//����ͨѶ¼Ϊ�ļ�
{
	assert(pc);
	FILE* pf = fopen("Contact.txt", "wb");
	if (pf == NULL)
	{
		perror("ContactSave:");
		exit(-1);
	}
	for (int i = 0; i < pc->size; i++)
	{
		fwrite(pc->arr + i, sizeof(pc->arr[0]), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}