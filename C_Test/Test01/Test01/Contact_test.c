//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Contact.h"
//
//void menu() {
//
//
//	printf("   1.add                 2.del\n");
//	printf("   3.search             4.modfy\n");
//	printf("   5.show               6.sort\n");
//	printf("   0.exit\n");
//
//
//}
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
//		case 1:
//			AddContact(&con);
//			break;
//		case 2:
//			DelContact(&con);
//			break;
//		case 3:
//			SearchContact(&con);
//			break;
//		case 4:
//			ModifyContact(&con);
//			break;
//		case 5:
//			ShowContact(&con);
//			break;
//		case 6:
//			SortContact(&con);
//			break;
//		case 0:
//			printf("�˳���ͨѶ¼\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}