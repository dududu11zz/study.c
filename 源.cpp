#include<stdio.h>
#include<math.h>
//输出素数

int main()
{
	int i = 0;
	int sum = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//素数判断的规则
		//1.试除法 
		//产生2->i-1的数字
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)// i=a*b  a和b中至少有一个数字<=开平方i
			                         //sqrt() --开平方的数学库函数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >sqrt(i))
		{
			sum++;
			printf("%d ", i);
		}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}


//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1的数字
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nsum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int year;
//	int sum = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
		//判断year是否为闰年
		//1.能被4整除并且不能被100整除时闰年
		//2.能被400整除是闰年
		/*if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			sum++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			sum++;
		}*/

		/*if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			sum++;
		}*/

	/*}
	printf("\nsum=%d\n", sum);
	return 0;
}*/

// ！！！！究极nb的东西！！！
//求两个数的最大公约数--辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)//当m%n=0时，此时为“假”，直接跳出循环，最大公约数就为n
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}