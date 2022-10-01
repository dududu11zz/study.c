#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	double a;
	scanf("%lf", &a);
	if (a < 1)
		printf("%.3lf", a);
	else if (a >= 1 && a < 10)
	{
		printf("%.3lf", sqrt(2 * a - 1));
	}
	else
		printf("%.3lf", log(3 * a - 11));
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	switch (a)
//	{
//	case 'A':printf("85~100");
//		break;
//	case 'B':printf("70~84");
//		break;
//	case 'C':printf("60~69");
//		break;
//	case 'D':printf("<60");
//		break;
//	default:printf("Error");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//
//		printf("Yes");
//	else
//		printf("No");
//
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a == 0)
//		printf("0");
//	else if (a > 0)
//		printf("%d", a * a - 10);
//	else
//		printf("%d", a + 10);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double a, b;
//	scanf("%lf%lf", &a, &b);
//	int sum;
//	if (a > b)
//	{
//		printf("%.3lf %.3lf", a,b);
//	}
//	else
//		printf("%.3lf %.3lf", b, a);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double a,b;
//	scanf("%lf%lf", &a,&b);
//	if ((a - 2) * (a - 2) <= 1 &&(b-2)*(b-2)<=1)
//		printf("10");
//	else if ((a - 2) * (a - 2) <= 1 && (b +2) * (b + 2) <= 1)
//		printf("10");
//	else if ((a + 2) * (a + 2) <= 1 && (b - 2) * (b - 2) <= 1)
//		printf("10");
//	else if ((a + 2) * (a + 2) <= 1 && (b + 2) * (b + 2) <= 1)
//		printf("10");
//	else
//		printf("0");
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a == b == c)
//			printf("bian");
//		else if (a == b || a == c || c == b)
//			printf("yao");
//		else
//			printf("triangle");
//
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	if (a == 1)
//		printf("3.00");
//	else if (a < 1)
//	{
//		printf("%.2lf", fabs(a));
//	}
//	else if (a > sqrt(2))
//	{
//		printf("%.2lf", sqrt(a * a * a - 2 * a));
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
//		printf("%d", a);
//	else
//		printf("input error");
//
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
//	case 1:
//	case 2:
//	case 3:
//	case 4: printf("4"); break;
//	case 5: printf("6"); break;
//	case 6:printf("10"); break;
//	case 7:printf("8"); break;
//	}
//
//	return 0;
//}