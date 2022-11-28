#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

int check_capacity(struct Contact* pc);

//静态版本
//void InitContact(struct Contact* pc) {
//	
//	assert(pc);
//
//	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));
//	pc->sz = 0;
//
//}

void LoadContact(struct Contact* pc) {
	//打开文件
	FILE* pfr = fopen("data.txt", "rb");
	if (pfr == NULL) {
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfr)) {
		//考虑增加容量
		check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++; 
	}
	
	//关闭文件
	fclose(pfr);
	pfr = NULL;
}

void InitContact(struct Contact* pc) {
	assert(pc);
	pc->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (pc->data == NULL) {
		perror("InitContact()");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	//加载文件中的信息到通讯录中
	LoadContact(pc);
}

int check_capacity(struct Contact* pc) {

	if (pc->sz == pc->capacity) {
		//增加容量
		struct PeoInfo* ptr = realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (ptr != NULL) {
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
			return 1;
		}
		else {
			perror("AddContact()");
			return 0;
		}
	}
	else {
		return 1;
	}

}

void AddContact(struct Contact* pc) {

	assert(pc);

	if (check_capacity(pc) == 0) {

		return;

	}

	//增加人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话号码:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("成功添加联系人\n");


}

void ShowContact(const struct Contact* pc) {

	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
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
	printf("请输入要删除人的名字:>");
	scanf("%s", name);

	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1) {
		printf("要删除的人不存在\n");
	}
	else {
		//删除
		int j = 0;
		for (j = ret; j <pc->sz- 1; j++) {
			pc->data[j] = pc -> data[j + 1];
		}
		pc ->sz--;
		printf("成功删除指定联系人");
	}

}


void SearchContact(const struct Contact* pc) {
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);

	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1) {
		printf("要删除的人不存在\n");
	}
	else {
		//找到了
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
}

void ModifyContact(const struct Contact* pc) {
	printf("请输入要修改人的名字:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1) {
		printf("要修改的人不存在\n");
	}
	else {
		printf("请输入名字:>");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入电话号码:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入住址:>");
		scanf("%s", pc->data[ret].addr);
		printf("成功修改联系人\n");
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

void DestroyContact(struct Contact* pc) {
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void SaveContact(struct Contact* pc) {
	//打开文件
	FILE *pfw  = fopen("data.txt", "wb");
	if (pfw == NULL) {
		perror("SaveContact::fopen");
		return ;
	}
	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++) {
		fwrite(pc->data+i,sizeof(struct PeoInfo),1,pfw);
	}

	//关闭文件
	fclose(pfw);
	pfw = NULL;
}