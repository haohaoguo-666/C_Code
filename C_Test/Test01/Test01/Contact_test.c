//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Contact.h"
//
//void menu() {
//
//
//	printf("   1.add                 2.del\n");
//	printf("   3.search             4.modify\n");
//	printf("   5.show               6.sort\n");
//	printf("   0.exit\n");
//
//
//}
//
//enum choice {
//
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT,
//
//};
//
//int main() {
//	int input = 0;
//	//����ͨѶ¼
//	struct Contact con;
//	//��ʼ��ͨѶ¼
//	InitContact(&con);
//
//	//n����Ϣ
//	//������һ���ͷŵ��±�λn��λ����
//	do
//	{
//		
//		menu();
//
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input) {
//		case ADD:
//			AddContact(&con);
//			break;
//		case DEL:
//			DelContact(&con);
//			break;
//		case SEARCH:
//			SearchContact(&con);
//			break;
//		case MODIFY:
//			ModifyContact(&con);
//			break;
//		case SHOW:
//			ShowContact(&con);
//			break;
//		case SORT:
//			SortContact(&con);
//			break;
//		case EXIT:
//			DestroyContact(&con);
//			printf("�˳���ͨѶ¼\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}