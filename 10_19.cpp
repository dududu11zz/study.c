#define  _CRT_SECURE_NO_WARNINGS 1

//赋值操作符
#include<stdio.h>



//编写一个代码：求一个整数存储在内存中的二进制中1的个数

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	//对于3
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001  &1
//	//00000000000000000000000000000001  进行&操作后，第1行右移
//	//                                  统计1的个数
//
//	
//	//while (num)//此算法无法处理负数
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num /= 2;
//
//	//}
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//  对于任意数x x^x=0;0^x=x;且异或具有交换律
//	return 0;
//}