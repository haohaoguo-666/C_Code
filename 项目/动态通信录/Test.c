#include "contact.h"
void menu()
{
	printf("###########################\n");
	printf("#####1、add    2、del######\n");
	printf("#####3、find   4、modify###\n");
	printf("#####5、print  6、sort#####\n");
	printf("#####7、empty  8、exit#####\n");
	printf("###########################\n");
}
enum option
{
	ADD = 1,
	DEL,
	FIND,
	MODIFY,
	PRINT,
	SORT,
	EMPTY,
	EXIT
};
int main()
{
	int input = 0;
	Contact c;//创建一个通讯录
	ContactInit(&c);//初始化通讯录
	while (1)
	{
		menu();
		printf("请输入选项：\n");
		scanf("%d", &input);
		if (input == ADD)
			ContactAdd(&c);//增加联系人信息
		else if (input == DEL)
			ContactDel(&c);//删除联系人信息
		else if (input == FIND)
			ContactFind(&c);//查找联系人信息
		else if (input == MODIFY)
			ContactModify(&c);//修改联系人信息
		else if (input == PRINT)
			ContactPrint(&c);//打印
		else if (input == SORT)
			ContactSortByName(&c);//排序
		else if (input == EMPTY)
			ContactDestroy(&c);//清空通讯录
		else if (input == EXIT)
		{
			ContactSave(&c);//保存通讯录为文件
			printf("通讯录已保存至文件！\n");
			ContactDestroy(&c);//清空通讯录
			break;//退出
		}
		else
			printf("输入错误！请重新输入！\n");
	}
	return 0;
}