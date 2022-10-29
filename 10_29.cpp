#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//野指针:野指针就是指针指向的位置是不可知的(随机的，不正确的)
//1.指针未初始化；2.指针越界访问;3.指针指向的空间释放

int main()
{
	int a;//局部变量
	int* p;//局部的指针变量，就被初始化随机值
	
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		p++;
	}

	
}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p=arr;//数组名-首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char c;
//	int* pa = &a;
//	char* pc = &c;
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//地址+1
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//地址+4
//	//指针类型决定了:指针走一步走多远（指针的步长）
//	return 0;
//}
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa=&a;
//	*pa = 0;
//	//指针类型决定了指针进行解引用操作时能访问的空间大小
//	return 0;
//}