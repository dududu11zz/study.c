#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//迭代

int fib(int x)
{



}

int main()
{
	int n, ret;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret=%d\n", ret);

	return 0;
}


//斐波那契数列
//1 1 2 3 5 8 13 21 34 55....

//求第n个斐波那契数

//int fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);//此时的计算量过大
//
//}
//
//int main()
//{
//	int n,ret;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("n=%d\n", ret);
//	return 0;
//}




//求n的阶乘


//阶乘的实现
//int fac2(int x)
//{
//	if (x <= 1)
//		return 1;
//	 else 
//		return x * fac2(x - 1);
//}
//
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	m = fac2(n);
//	printf("%d\n", m);
//
//}
//函数的实现

//int facl(int x)
//{
//	int i,y=1;
//	for (i = 1; i <= x; i++)
//	{
//		y = y * i;
//		
//	}
//	return y;
//}
//
//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	m = facl(n);
//	printf("%d\n", m);
//
//}


// 循环语句的实现

//int main()
//{
//	int i = 1, sum = 1,n;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		sum = sum * i;
//		i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//编写一个函数，不允许设置一个临时变量 ，求字符串长度

//int mystrlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + mystrlen(str + 1);
//	}
//	else
//		return 0;
//}
//把大事化小

//int mystrlen(char* str)//arr是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//{
//	int sum=0;
//	while (*str != '\0')
//	{
//		sum++;
//		str++;//此句意为地址加1，即向后读一个代码
//	}
//	return sum;
//}
//int main()
//{
//	char arr[] = "fzu";
//	//模拟实现了一个strlen函数
//	int len = mystrlen(arr);//自己定义一个函数，能够求出字符串长度
//	printf("len = %d\n", len);
//
//	return 0;
//}


//输入一行数字 如1234 输出1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//
//	return 0;
//}