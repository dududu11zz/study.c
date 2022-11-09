#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");//系统文件，表示暂停
//
//	return 0;
//}

//F5-启动调试-和F9配合使用
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");//系统文件，表示暂停
//	return 0;
//}


//断点（一个红点） F9切换断点
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//
//	return 0;
//}

int add(int x, int y)
{
	return x + y;
}

//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	return 0;
}