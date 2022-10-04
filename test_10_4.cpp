#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 两种特殊的情况 数组名不代表首元素的地址
	//1.sizeof(数组名)--数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2.&数组名 数组名代表整个数组 &数组名 取出的是整个数组的数组名
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//数组的地址,他的值刚好等于第一个元素的地址，但是代表的意义不同。
	printf("%d\n", *arr);
	////数组名就是首元素的地址
	return 0;
}
////冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一躺冒泡排序的对数
//		int j = 0;
//		for (j = 0; j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;//交换数据，运用临时变量
//				flag = 0;//本躺排序的数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;//break只能用在循环语句中
//		}
//	}
//	//break;后跳到这里。
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 即&arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}