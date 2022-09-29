#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机值 因为找不到\0
}
//int main()
//{
//	//创建一个数组-存放整型-10个
//
//	int arr[10];
//	char arr2[5];
//	int n = 7;
//	// char ch[n];//err  方框里要输入一个常量表达式，不能输入变量
//	int  arr3[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr4[5] = { 'a','b',98 };//剩下的也为0
//	char arr5[5] = "ab";//此时数组里有3个元素，a,b,\0 剩下的两个是0
//	char arr6[] = "acasd";//此时数组有6个元素
//	printf("%d\n", sizeof(arr6));// 6
//
//	//sizeof 计算 arr6所占空间的大小
//	//7个元素- char 7*1=7
//	printf("%d\n", strlen(arr6));// 5
//	//strlen 求字符串长度--'\0'之前的字符个数
//	//[a c a s d \0]
//	//遇到\0就停止 所以为5
//	return 0;
//}

// 1. strlen 与sizeof 没有什么关联
// 2. strlen只能求字符串长度--库函数--使用头文件
// 3. sizeof 计算变量，数组，类型的大小--单位是字节--操作符
// 