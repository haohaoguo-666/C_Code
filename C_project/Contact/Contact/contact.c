#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"


//静态版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//动态版本
int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ,  sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = DEFAULT_SZ;
	return 0;

}
//静态的版本
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX) {
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	printf("请输入名字：>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄：>");
//	scanf("%s", &(pc->data[pc->count].age));
//	printf("请输入性别：>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话：>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址：>");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("增加成功\n");
//
//
//
//
//}

void CheckCapacity(Contact* pc) {
	assert(pc);
	if (pc->count == pc->capacity) {
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL) {
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");

		}
	}
}

//动态版本
void AddContact(Contact* pc)
{
	assert(pc);
	CheckCapacity(pc);
	printf("请输入名字：>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄：>");
	scanf("%s", &(pc->data[pc->count].age));
	printf("请输入性别：>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话：>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址：>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");




}

void DestroyContact(Contact* pc) {
	
	assert(pc);
	free(pc->data);
	pc->data =NULL;

}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n",
		"名字",
		"年龄",
		"性别",
		"电话",
		"地址");

	for (i = 0; i < pc->count; i++) {
		printf("%20s\t%5d\t%5s\t%12s\t%30s\n",pc->data[i].name,
												pc->data[i].age,
												pc->data[i].sex,
												pc->data[i].tele,
												pc->data[i].addr);
	}
}
static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++) {
		if (0 == strcmp(pc->data[i].name, name)) {
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s",name);
	//删除
	//1.查找
	int pos = FindByName(pc,name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除 
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("删除成功\n");
} 

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	//2.找到了
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n",
		"名字",
		"年龄",
		"性别",
		"电话",
		"地址");
	printf("%20s\t%5d\t%5s\t%12s\t%30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);

}

void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	//2.修改
	printf("请输入修改名字：>");
	scanf("%s", pc->data[pos].name);
	printf("请输入修改年龄：>");
	scanf("%s", &(pc->data[pos].age));
	printf("请输入修改性别：>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入修改电话：>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入修改地址：>");
	scanf("%s", pc->data[pos].addr);


}

//按照名字来排序
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo),cmp_peo_by_name);
	printf("排序成功\n");

}
