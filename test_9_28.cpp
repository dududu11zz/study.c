#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//汉诺塔问题

//int sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 3;
//	else
//		return 2 * sum(n - 1) + 1;
//	
//
//}
//
//
//int main()
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = sum(n);
//	printf("%d\n", ret);
//
//}
//青蛙跳台阶 等价于求斐波那契数

//int jump(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//
//}
//int main()
//{
//	int n,ret;
//	scanf("%d", &n);
//	ret = jump(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int n)//此时又会栈溢出
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//
//}
//int main()
//{
//	test(1);
//
//	return 0;
//}

//循环的实现 求第n个斐波那契数

//#include<stdio.h>
//
//
//int fib(int n)
//{
	/*int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}
int main()
{
	int n = 0;
	int ret;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret=%d\n", ret);
   return 0;
}*/