#include "Contact.h"

void ContactCapacityIncrease(Contact* pc)//判断是否增容
{
	assert(pc);
	if (pc->size == pc->capacity)
	{
		//需要增容
		int newcapacity = pc->capacity == 0 ? INITIAL : INITIAL + pc->capacity;
		PeoInfo* tmp = (PeoInfo*)realloc(pc->arr, newcapacity * sizeof(PeoInfo));
		if (tmp == NULL)
		{
			printf("%s\n", strerror(errno));
			exit(-1);
		}
		pc->arr = tmp;
		pc->capacity = newcapacity;
		printf("增容成功！\n");
	}
}

void ContactInit(Contact* pc)//初始化通讯录
{
	assert(pc);
	pc->size = 0;
	pc->capacity = 0;
	pc->arr = NULL;
	//加载文件的信息到通讯录
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


void ContactPrint(const Contact* pc)//打印
{
	assert(pc);
	printf("姓名\t性别\t电话\t地址\t年龄\n");
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


void ContactAdd(Contact* pc)//增加联系人信息
{
	ContactCapacityIncrease(pc);
	printf("请输入姓名：\n");
	scanf("%s", pc->arr[pc->size].name);
	printf("请输入性别：\n");
	scanf("%s", pc->arr[pc->size].sex);
	printf("请输入电话：\n");
	scanf("%s", pc->arr[pc->size].tele);
	printf("请输入地址：\n");
	scanf("%s", pc->arr[pc->size].addr);
	printf("请输入年龄：\n");
	scanf("%d", &(pc->arr[pc->size].age));
	pc->size++;
}

static int FindByName(const Contact* pc, const char arr[])//通过名字查找
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

void ContactDel(Contact* pc)//删除联系人信息
{
	assert(pc);
	printf("请输入姓名查找:");
	char arr[20] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);//记录size的位置
	if (pos == -1)
	{
		printf("通讯录没有该信息\n");
		return;
	}
	for (int i = pos; i < pc->size - 1; i++)//移动元素
	{
		pc->arr[i] = pc->arr[i + 1];
	}
	pc->size--;
	printf("删除成功！\n");
}

void ContactFind(const Contact* pc)//查找信息
{
	assert(pc);
	printf("请输入姓名查找:");
	char arr[20] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos != -1)
	{
		printf("查找到如下信息：\n");
		printf("姓名\t性别\t电话\t地址\t年龄\n");
		printf("%s\t%s\t%s\t%s\t%d\n",
			pc->arr[pos].name,
			pc->arr[pos].sex,
			pc->arr[pos].tele,
			pc->arr[pos].addr,
			pc->arr[pos].age);
	}
	else
		printf("通讯录查无此人！\n");
}

void ContactModify(Contact* pc)//修改信息
{
	assert(pc);
	printf("请输入姓名查找:");
	char arr[20] = { 0 };
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("找不到\n");
		return;
	}
	else
	{
		printf("请输入更改后的姓名：\n");
		scanf("%s", pc->arr[pos].name);
		printf("请输入更改后的性别：\n");
		scanf("%s", pc->arr[pos].sex);
		printf("请输入更改后的电话：\n");
		scanf("%s", pc->arr[pos].tele);
		printf("请输入更改后的地址：\n");
		scanf("%s", pc->arr[pos].addr);
		printf("请输入更改后的年龄：\n");
		scanf("%d", &(pc->arr[pos].age));
	}
}

int name_cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void ContactSortByName(Contact* pc)//排序
{
	assert(pc && pc->size != 0);
	qsort(pc->arr, pc->size, sizeof(PeoInfo), name_cmp);
	printf("排序完成\n");
}

void ContactDestroy(Contact* pc)//清空通讯录
{
	assert(pc);
	free(pc->arr);
	pc->arr = NULL;
	pc->size = 0;
	pc->capacity = 0;
	printf("通讯录已清空\n");
}

void ContactSave(const Contact* pc)//保存通讯录为文件
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