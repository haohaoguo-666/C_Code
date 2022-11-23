#define _CRT_SECURE_NO_WARNINGS

//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//};
//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//}s1,s2;
////s1,s2是struct Stu 类型的变量


//struct 
//	//匿名结构体类型
//	//只能使用一次
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//}s1;

//err
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main() {
//	sizeof(struct Node);
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node* next;
//};

//err
/*typedef struct
{
	int data;
	Node* next;
}Node*/;

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

struct Point {
	int x;
	int y;
	
}p1 = {2,3};

struct score {
	int n;
	char ch;

};

struct Stu {
	char name[20];
	int age;
	struct score s;
};

int main()
{
	struct Point p2 = { 3,4 };
	struct Stu s1 = { "zhangsan",20,{100,'q'}};
	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
}