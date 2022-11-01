#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//指针数组-数组--存放指针的数组
//数组指针-指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组-存放整型 字符数组-存放字符 指针数组-存放指针
	int* arr[3]={&a,&b,&c};//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * arr[i]);
	}
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;
//	printf("%d\n", **ppa);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p==%p\n",p+i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr;//首元素的地址
//	
//	//只有两种例外
//	//1.&arr -&数组名-数组名不是首元素的地址-数组名表示整个数组
//	// -&数组名 取出的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名)-数组名表示的是整个数组
//	//sizeof(数组名)-计算的是整个数组的大小
//	printf("%p", arr);
//	return 0;
//}