#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//Ҫ����һ��ѧ��-һЩ����
// ����
//����
//�绰
//�Ա�

//����һ���ṹ������ ��ʱ��ռ���ڴ�ռ�
// struct �ṹ��ؼ��� stu - �ṹ���ǩ  struct stu - �ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20] = {  };
//	short age;
//	char tele[20];
//	char sex[5];
//
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct stu
//{
//	//��Ա����
//	char name[20] = {  };
//	short age;
//	char tele[20];
//	char sex[5];
//
//}stu;//����һ��typedef ��Ϊ���ṹ��������struct stu��Ϊstu
//     //��ʱ stuΪһ������ ��һ��������struct stu
//int main()
//{
//	//�����ṹ�����
//	struct stu s;//s�Ǿֲ��Ľṹ�����
//	stu s1 = {"����",20,"11111","��"};
//	struct stu s2 = {"����",30,"22222","����"};
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
//	//��Ա����
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
//	stu s = { "����",40,"123456789","��" };
//	//��ӡ�ṹ������
//	//print1��print2�ĸ����ã�
//	//printf2����
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