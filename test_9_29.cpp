#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 实现冒泡排序

// 冒泡排序
//10 9 8 7 6 5 4 3 2 1 0
//10个元素 9躺冒泡排序
void bubble_sort(int arr[])
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz; i++)//sz为元素个数，i<sz表示循环sz-1次
	{
		//每一躺冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,4,6,5,1,2,3 };
	int i = 0;
	//对arr进行排序，排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr);//冒泡排序函数
	for(i=0;i<sz;i++)
	return 0;
}

////二维数组在内存中的存储
//int main()
//{
//	int arr4[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr4[%d][%d]=%p\n", i, j, &arr4[i][j]);//二维数组在内存中也是连续存放的
//		}
//	}
//	return 0;
//}


//二维数组的创建和初始化

//int main()
//{
//	int arr[3][4];//三行四列
//	char arr2[4][5];//四行五列
//
//	int arr3[3][4] = { 1,2,3,4,5,6 };//按顺序从左到右，从上到下填充数据，不够的补0
//	int arr4[3][4] = { {1,2,3},{4,5} };//此时分为两行来初始化
//	int arr5[][5] = { {1,2,3,4,5},{6,7,8 } };//二维数组的列不能省略，行可以省略
//
//	//对于二维数组，行和列的标号也都是从0开始
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//数组在内存中是连续存放的
//		
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}