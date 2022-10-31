#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	double x1, x2, y1, y2;
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	printf("addition of complex is %lf+%lfi", x1 + x2, y1 + y2);
	printf("product of complex is %lf+%lfi", x1 * x2 - y1 * y2, x1 * y2 + x2 * y1);
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c=2;
//	int t;
//	if (n == 1)
//		printf("1");
//	else
//	{
//		for (i = 1; i < n - 1; i++)
//		{
//			c = b + c;
//			t = b;
//			b = a + b;
//			a = t;
//		}
//		printf("%d", c);
//	}
//}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0,j=0;
//	int k = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <=2 * i - 1; k++)
//		{
//			if (k == 1 || k == 2 * i - 1||i==n)
//				printf("%d", i);
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int s = 0;
//	int t;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int flag = 0;
//	for (t = n; t <= m; t++)
//	{
//		int i = t;
//		s = t * t;
//		int j = 1;
//		if ((t == 0) || (t == 1))
//		{
//			printf("%d\n", t);
//			flag = 1;
//			continue;
//		}
//		
//		while (i)
//		{
//			i /= 10;
//			j *= 10;
//		}
//		
//		if (s % j == t)
//		{
//			printf("%d\n", t);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		printf("None\n");
//	return 0;
//}


//double fact(int n)
//{
//	int i = 0;
//	double sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}



//#include <stdio.h>
//
//int narcissistic(int number);
//void PrintN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
//    PrintN(m, n);
//    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int narcissistic(int number)
//{
//    int i = 0;
//    int k = 0;
//    int sum = 0;
//    int g = number;
//    if (g < 1000)
//    {
//        while (number)
//        {
//            k = number % 10;
//            number = number / 10;
//            sum += (k * k * k);
//        }
//    }
//    else if (g >= 1000)
//    {
//        while (number)
//        {
//            k = number % 10;
//            number = number / 10;
//            sum += (k * k * k*k);
//        }
//    }
//    if (sum == g)
//        return 1;
//    else
//        return 0;
//}
//
//
//void PrintN(int m, int n)
//{
//    int i = 0;
//    for (i = m+1; i < n; i++)
//    {
//        if (narcissistic(i) == 1)
//        {
//            printf("%d\n", i);
//        }
//    }
//}




//#include <stdio.h>
//
//void hollowPyramid(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    hollowPyramid(n);
//
//    return 0;
//}

///* 你的代码将被嵌在这里 */
//void hollowPyramid(int n)
//{
//
//	
//	int i = 0, j = 0;
//	int k = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i - 1; k++)
//		{
//			if (k == 1 || k == 2 * i - 1 || i == n)
//				printf("%d", i);
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//
//}



//#include <stdio.h>
//
//int factorsum(int number);
//void PrintPN(int m, int n);
//
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//	if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//	PrintPN(m, n);
//
//	return 0;
//}

/* 你的代码将被嵌在这里 */

//int factorsum(int number)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < number; i++)
//	{
//		if (number % i == 0)
//		{
//			count += i;
//		}
//	}
//	return count;
//}
//
//
//void PrintPN(int m, int n)
//{
//	int j = m;
//	int flag = 0;
//	for (j = m; j <= n; j++)
//	{
//		if (factorsum(j) == j)
//		{
//			flag = 1;
//			printf("%d = 1",j);
//			int m = 0;
//			for (m = 2; m < j; m++)
//			{
//				if (j % m == 0)
//					printf(" + %d", m);
//				if (m == (j - 1))
//					printf("\n");
//			}
//		}
//		
//	}
//	if (j == (n + 1) && flag == 0)
//	{
//		printf("No perfect number");
//		
//	}
//}


//void TimeOutput(int hour, int minute, double second)
//{
//	printf("%02d.%02d.%2.2lf", hour,minute,second);
//
//
//}

//#include <stdio.h>
//
//void TimeOutput(int hour, int minute, double second);
//
//int main()
//{
//    int hour, minute;
//    double second;
//    scanf("%d%d%lg", &hour, &minute, &second);
//    TimeOutput(hour, minute, second);
//    putchar('\n');
//    return 0;
//}
//
///* 你提交的代码将被嵌在这里 */
//void TimeOutput(int hour, int minute, double second)
//{
//    printf("%02d:%02d:%5.2lf", hour, minute, second);
//
//
//}

///*#include<stdio.h>
//
//int main()
//{
//
//	*/return 0;
//}

//#include<stdio.h>
//int x;
//int f(int n)
//{
//	int x = 1;
//	return x;
//}
//int main(void)
//{
//	printf("%d %d", f(3), x);
//
//	return 0;
//}