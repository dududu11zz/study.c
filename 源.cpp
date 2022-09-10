#include<stdio.h>

int main()
{
	int i, k;
	for (i = 0, k = 0; k = 0; i++, k++)//中间判断 k为假，所以循环结束，一共进行0次循环
		k++;
	return 0;
}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//&&表示并且，++x与x++效果相同
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");//此时只会打印10个呵呵，因为此时的j并未初始化，所以当i=0时，程序往下走
//			                 //此时打印10个hehe，并且此时j=10；当i=1在往下时，因为j没有初始化，所以
//			                 //j还是等于10，不在打印hehe，所以一共就10给hehe
//		}
//	}
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");//此时会打印100个呵呵
//		}
//	}
//
//
//	return 0;
//}