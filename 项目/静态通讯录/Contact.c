#include "Contact.h"


static int FindByName(const Contact* pc, const char arr[])//通过名字查找
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

void ContactInit(Contact* pc)//初始化通讯录
{
	assert(pc);
	pc->size = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

void ContactPrint(const Contact* pc)//打印
{
	assert(pc);
	printf("姓名\t性别\t电话\t地址\t年龄\n");
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

void ContactAdd(Contact* pc)//增加联系人信息
{
	assert(pc && pc->size <= MAX_CAPACITY);
	printf("请输入姓名：\n");
	scanf("%s", pc->date[pc->size].name);
	printf("请输入性别：\n");
	scanf("%s", pc->date[pc->size].sex);
	printf("请输入电话：\n");
	scanf("%s", pc->date[pc->size].tele);
	printf("请输入地址：\n");
	scanf("%s", pc->date[pc->size].addr);
	printf("请输入年龄：\n");
	scanf("%d", &(pc->date[pc->size].age));
	pc->size++;
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
			pc->date[pos].name,
			pc->date[pos].sex,
			pc->date[pos].tele,
			pc->date[pos].addr,
			pc->date[pos].age);
	}
	else
		printf("通讯录查无此人！\n");
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
		pc->date[i] = pc->date[i + 1];
	}
	pc->size--;
	printf("删除成功！\n");
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
		scanf("%s", pc->date[pos].name);
		printf("请输入更改后的性别：\n");
		scanf("%s", pc->date[pos].sex);
		printf("请输入更改后的电话：\n");
		scanf("%s", pc->date[pos].tele);
		printf("请输入更改后的地址：\n");
		scanf("%s", pc->date[pos].addr);
		printf("请输入更改后的年龄：\n");
		scanf("%d", &(pc->date[pos].age));
	}
}

int name_cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void ContactSortByName(Contact* pc)//排序
{
	assert(pc && pc->size != 0);
	qsort(pc->date, pc->size, sizeof(PeoInfo), name_cmp);
	printf("排序完成\n");
}

void ContactEmpty(Contact* pc)//清空通讯录
{
	assert(pc);
	ContactInit(pc);
	printf("通讯录已清空\n");
}