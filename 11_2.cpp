#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//要描述一个学生-一些数据
// 名字
//年龄
//电话
//性别

//定义一个结构体类型 此时不占用内存空间
// struct 结构体关键字 stu - 结构体标签  struct stu - 结构体类型
//struct stu
//{
//	//成员变量
//	char name[20] = {  };
//	short age;
//	char tele[20];
//	char sex[5];
//
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct stu
//{
//	//成员变量
//	char name[20] = {  };
//	short age;
//	char tele[20];
//	char sex[5];
//
//}stu;//加了一个typedef 意为将结构体类型名struct stu改为stu
//     //此时 stu为一个类型 但一样可以是struct stu
//int main()
//{
//	//创建结构体变量
//	struct stu s;//s是局部的结构体变量
//	stu s1 = {"张三",20,"11111","男"};
//	struct stu s2 = {"旺财",30,"22222","保密"};
//	return 0;
//}


//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double b;
//};
//
//struct t
//{
//	char ch[10];
//	struct s s;
//	char* pa;
//};
//
//int main()
//{
//	char arr[] = "hello";
//	struct t t= { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.b);
//	printf("%s\n", t.pa);
//	return 0;
//}

//typedef struct stu
//{
//	//成员变量
//	char name[20] = {  };
//	short age;
//	char tele[20];
//	char sex[5];
//
//}stu;
//
//void print1(stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//
//void print2(stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "李四",40,"123456789","男" };
//	//打印结构体数据
//	//print1和print2哪个更好？
//	//printf2更好
//	print1(s);
//	print2(&s);
//	return 0;
//}

int add(int x, int y)
{
	int z = 0;
	 z = x + y;
	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	ret = add(a, b);
	return 0;
}