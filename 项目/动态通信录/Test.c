#include "contact.h"
void menu()
{
	printf("###########################\n");
	printf("#####1��add    2��del######\n");
	printf("#####3��find   4��modify###\n");
	printf("#####5��print  6��sort#####\n");
	printf("#####7��empty  8��exit#####\n");
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
	Contact c;//����һ��ͨѶ¼
	ContactInit(&c);//��ʼ��ͨѶ¼
	while (1)
	{
		menu();
		printf("������ѡ�\n");
		scanf("%d", &input);
		if (input == ADD)
			ContactAdd(&c);//������ϵ����Ϣ
		else if (input == DEL)
			ContactDel(&c);//ɾ����ϵ����Ϣ
		else if (input == FIND)
			ContactFind(&c);//������ϵ����Ϣ
		else if (input == MODIFY)
			ContactModify(&c);//�޸���ϵ����Ϣ
		else if (input == PRINT)
			ContactPrint(&c);//��ӡ
		else if (input == SORT)
			ContactSortByName(&c);//����
		else if (input == EMPTY)
			ContactDestroy(&c);//���ͨѶ¼
		else if (input == EXIT)
		{
			ContactSave(&c);//����ͨѶ¼Ϊ�ļ�
			printf("ͨѶ¼�ѱ������ļ���\n");
			ContactDestroy(&c);//���ͨѶ¼
			break;//�˳�
		}
		else
			printf("����������������룡\n");
	}
	return 0;
}