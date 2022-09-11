#include<stdio.h>
#include<string.h>

int main()
{
	int 

	return 0;
}



//int main()//利用二分查找法查找(有序数组)
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(1);
//	int k = 9;
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}


//int main()//查找有序数组中值的下标。
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(1);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标为：%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}

//int main()//计算n的阶乘的相加
//{
//	int i = 1;
//		int n = 0;
//		int c = 1;//定义c为n的阶乘
//		int sum = 0;
//		scanf_s("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			c = i *c;
//			sum = sum + c;
//		}
//		printf("%d ", sum);
//	
//	return 0;
//}

//int main()//计算n的阶乘
//{
//	int i = 1;
//	int n = 0;
//	int c = 1;//定义c为n的阶乘
//	int sum = 0;//定义sum为1！+2!+ .. +10!
//	
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1,c = 1; i <= n; i++)//要定义c的初始化
//		{
//			
//			c = i * c;
//
//		}
//		sum = sum + c;
//	}
//	
//	printf("%d ", sum);
//
//	return 0;
//}
//

//int main()//计算n的阶乘
//{
//	int i = 1;
//	int n = 0;
//	int c = 1;//定义c为n的阶乘
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		c = i *c;
//		
//	}
//	printf("%d ", c);
//
//	return 0;
//}

 //do
 //  循环语句；
	// while（表达式）；

//int main()
//
//{
//	int i=0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
