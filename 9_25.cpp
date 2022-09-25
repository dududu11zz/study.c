#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数的声明和定义

//函数的声明 放在头文件里
int add(int x, int y);

int main()
{
	int a = 10, b = 20;
	int sum;
	//函数调用
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}
//函数的定义 放在库函数里

int add(int x, int y)
{
	int z = x + y;
	return z;
}

//函数的链式访问
//把一个函数的返回值作为另一个函数的参数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//先打印43
//	//printf("%d", 43)的返回值为打印的字符的个数，所以printf("%d", 43)的返回值为2
//	//printf("%d", printf("%d", 43))=printf("%d", 2)
//	//此时在打印一个2，屏幕上打印了: 432
//	//而printf("%d", printf("%d", 43))的返回值为1
//	//所以最后一个printf("%d", printf("%d", printf("%d", 43)))=printf("%d",1)
//	//所以最终的结果为4321；
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	//1
//	len=strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//void add(int* p)
//{
//	(*p)++;//一定要把*p括起来，因为++的优先级高于*p
//
//}
//
//int main()
//{
//	int m = 0;
//	add(&m);
//	printf("m=%d\n", m);
//	add(&m);
//	printf("m=%d\n", m);
//	add(&m);
//	printf("m=%d\n", m);
//	return 0;
//}

//int plus(int x)
//{
//	x = x + 1;
//	return x;
//
//}
//
//int main()
//{
//	int num = 1;
//	num = plus(num);
//	printf("%d", num);
//	num = plus(num);
//	printf("%d", num);
//	num = plus(num);
//	printf("%d", num);
//	return 0;
//}
////                本质上arr是一个指针
//int binary_search(int arr[],int k,int sz)
//{
//	//算法的正式实现
//	int left = 0;
//	
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//		return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1；
//	int k, i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	k = 17;
//	//                      此时传递过去的是arr，为首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//	{
//		printf("找到了，下标为:%d\n", ret);
//	}
//
//	return 0;
//}