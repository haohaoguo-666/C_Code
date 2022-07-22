#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//喝汽水问题
//int howmanysoda(int money)
//{
//	int count = 0;
//	if (money / 2 == 1 && money % 2 == 0) {
//		return 1;
//	}
//	else {
//		return howmanysoda((money / 2) + (money % 2)) + (money / 2);
//	}
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	printf("%d",howmanysoda(money)+money);
//
//}

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//方法1
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);

	return 0;
}