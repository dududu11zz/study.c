#define  _CRT_SECURE_NO_WARNINGS 1

//计算字符长度
#include<stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "fzu";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针减去指针，得到的是中间元素的个数
//	//且指针指向的是同一空间
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;//NULL用来初始化指针，给指针赋值 即空指针
//	
//	if (pa != NULL)//使用之前，检查指针的有效性
//	{
//
//	}
//	if (p == NULL)
//	{
//
//	}
//	return 0;
//}