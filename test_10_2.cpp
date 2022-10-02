#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 5, b = 4, c = 6, d;
	printf("%d", d = a > b ? a > c ? a : c : b);

	return 0;
}
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	switch (a)
//	{
//	case 1:printf("%d", b + c);
//		break;
//	case 2:printf("%d", b - c);
//		break;
//	case 3:printf("%d", b * c);
//		break;
//	case 4:printf("%.1lf", 1.0*b / c);
//		break;
//	case 5:printf("%d", b ^ c);
//		break;
//	default:printf("orzzgg");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	if (a >= 0)
//	{
//		if (a == floor(a))
//			printf("Yes");
//		else
//			printf("No");
//	}
//	else
//	printf("No");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	if (a <= 800)
//		printf("0.0");
//	else if (a <= 4000)
//		printf("%.1lf", (a - 800) * 15 / 100);
//	else
//		printf("%.1lf", a / 10.0);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long long a;
//	scanf("%d", &a);
//	if (a >= 125)
//		printf("1");
//	else
//		printf("2");
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:printf("8");
//		break;
//	case 2:printf("4.5");
//		break;
//	case 3:printf("12.8");
//		break;
//	case 4:printf("3");
//		break;
//	default:printf("Exit");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if (a >= 48 && a <= 57)
//		printf("%c", a);
//	else
//		printf("input error");
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if ((n / 2) == 0)
//		printf("%d is an even number", n);
//	else if ((n / 2) != 0 && (n / 3) == 0)
//		printf("%d is an odd number,it can be divided by 3", n);
//	else
//		printf("%d is an odd number,it can't be divided by 3", n);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d, e, f;
//	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
//	if (e <= d && e >= a && f <= b && f >= d)
//	printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,h;
//	double m;
//	scanf("%d", &n); 
//	m = sqrt(n);
//	h = floor(m);
//	if (m == h)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		double p = (a + b + c) / 2.0;
//		double s = sqrt(p * (p - a) * (p - b) * (p - c));
//		double l = a + b + c;
//		printf("%.2lf %.2lf", s, l);
//	}
//	else
//		printf("no triangle");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n,a,b,c;
//	scanf("%d", &n);
//	a = n % 10;
//	b = n / 10 % 10;
//	c = n / 100;
//	if (n == a * a * a + b * b * b + c * c * c)
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double n;
//	int m;
//	scanf("%lf", &n);
//	m = floor(n);
//	if (m == n)
//		printf("%d %d %.5lf",m, m, n);
//	else
//	{
//		printf("%d %d %.5lf", m, m + 1, n);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a == 0)
//		printf("%d", b + c);
//	else if (a == 1)
//		printf("%d", b - c);
//	else if (a == 2)
//		printf("%d", b * c);
//	else if (a == 3)
//		printf("%d", b / c);
//	else if (a == 4)
//		printf("%d", b % c);
//	else if (a == 5)
//	{
//		if (b == 0)
//			printf("%d", d);
//		else if(b!=0)
//			printf("%d", c);
//	}
//	else if (a == 6)
//	{
//		if (b > c)
//			printf("1");
//		else
//			printf("0");
//	}
//	else if (a == 7)
//	{
//		if (c > b)
//			printf("1");
//		else
//			printf("0");
//	}
//	else if (a == 8)
//	{
//		if (b != c)
//			printf("1");
//		else
//			printf("0");
//	}
//	else if (a == 9)
//	{
//		if (b == c)
//			printf("1");
//		else
//			printf("0");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("NO");
//	else
//		printf("YES");
//	return 0;
//}