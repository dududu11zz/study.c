#define  _CRT_SECURE_NO_WARNINGS 1

//找出只出现一次的数

#include<stdio.h>
//3^3=0
//a^a=0
//0^3=0
//0^a=a
//异或是满足交换律的
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,7,5 };
	//找出只出现一次的数
	//暴力求解
	int sz = sizeof(arr) / sizeof(arr[1]);
	int i;
	for (i = 0; i < sz; i++)
	{
		//统计arr[i]在arr数组中出现了几次
		int count = 0;
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d\n", arr[i]);
			break;
		}
	}
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 ,7,5};
//	//找出只出现一次的数
//	//暴力求解
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	//交换两个整型变量，不使用第3个变量
//	int a = 3;
//	int b = 5;
//	//  ^ 表示按（二进制）位异或
//	//  相同为0，相异为1
//	//  3  011
//	//  5  101
//	a = a ^ b;// a 110 b 101
//	b = a ^ b;// a 110 b 011
//	a = a ^ b;// a 101 b 011
//	return 0;
//}

//int main()
//{
//	//交换两个整型变量，不使用第3个变量
//	int a = 3;
//	int b = 5;
//	//加法的实现
//	//溢出的问题
//	//int-4个字节-32个bit位
//	a = a + b;//
//	b = a - b;//得到原来的a
//	a = a - b;//得到的是原来的b
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i,n;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	if (sum < 0)
//		printf("0");
//	else
//		printf("%d", sum);
//	
//	return 0;
//}