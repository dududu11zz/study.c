#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//此时会产生截断
//	// a 里存放着 00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//此时b 里存放着  01111111
//	char c = a + b;
//	// a和b如何相加
//	// 00000011
//	// 01111111
//	// 0000000000000000000000000000011
//	// 0000000000000000000000001111111
//	// 0000000000000000000000010000010
//	// 此时c 存储着是 10000010
//	//整型提升是按照变量的数据类型的符号位来提升的
//
//	printf("%d\n", c);
//	//打印整型，又要整型提升
//	//10000010
//	// 提升为 11111111111111111111111110000010--此时为补码
//	// 原码为 10000000000000000000000001111110 -- -126
//	return 0;
//}


//#include<stdio.h>
//
////学生
//// 等价于 int float 
////创建了一个结构体类型
//struct stu//stu为一个类型
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct stu 类型创建了一个学生对象，并初始化
//	struct stu s1={"张三",20,"20221026"};
//	struct stu* ps=&s1;
//	printf("%s\n", ( * ps).name);
//	printf("%s\n", ps->name);
//	// 结构体指针->成员名
//
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//逗号表达式从左向右依次运算，整个表达式的结果为最后一个表达式的结果
//
//	return 0;
//}