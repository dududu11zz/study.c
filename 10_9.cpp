#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a,b,sum,j;
	scanf("%d", &a);
	
	int arr[100];
	double all=0;
	int i;
	for (j = 0; j < a; j++)
	{
		scanf("%d", &b);
		arr[j] = b;
		getchar();
	}
	for (j = 0; j < a; j++);
	{
		int i = 0;
		for (i = 0; i < a - j - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				sum = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = sum;
			}
		}
	}
	for (j = 1; j < a - 1; j++)
	{
		all += arr[j];
	}
	printf("%.1lf", all / (a - 2));
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int a, b, i;
//	int count = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		if (b % 4 == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	
//	double d, a;
//	while (1)
//	{
//		scanf("%lf", &a);
//		if (a >= 1000)
//		{
//			d = sqrt(a);
//			d = floor(d);
//			printf("%.0lf", d);
//			break;
//		}
//
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i;
//	int a,b,sum1=0,sum2=0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		if (b > 0)
//		{
//			sum1 += b;
//		}
//		else if(b<0)
//			sum2 += b;
//	}
//	if (sum1 == 0 && sum2 == 0)
//		printf("no positive number no negative number");
//	else if (sum1 == 0)
//		printf("no positive number %d", sum2);
//	else if (sum2 == 0)
//		printf("%d no negative number", sum1);
//	else
//		printf("%d %d", sum1, sum2);
//	return 0;
//}

//
//int main()
//{
//	int i,d,m,b,g=8;
//	int a1, b1;
//	
//	
//	for(i=1;i<=7;i++)
//	{ 
//		scanf("%d%d", &a1, &b1);
//		d = a1 + b1;
//		if (d > g)
//		{
//			m = i;
//			g = d;
//		}
//	}
//	if (g <= 7)
//		printf("0");
//	else
//		printf("%d", m);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a1, b1,a2, b2,a3, b3,a4, b4,a5, b5,a6, b6,a7, b7;
//	int c1, c2, c3, c4, c5, c6, c7;
//	scanf("%d%d", &a1, &b1);
//	scanf("%d%d", &a2, &b2);
//	scanf("%d%d", &a3, &b3);
//	scanf("%d%d", &a4, &b4);
//	scanf("%d%d", &a5, &b5);
//	scanf("%d%d", &a6, &b6);
//	scanf("%d%d", &a7, &b7);
//	c1 = a1 + b1;c2 = a2 + b2;c3 = a3 + b3;c4= a4 + b4;c5 = a5 + b5;c6= a6 + b6;c7 = a7 + b7;
//	if (c1 <= 8 && c2 <= 8 && c3 <= 8 && c4 <= 8 && c5 <= 8 && c6 <= 8 && c7 <= 8)
//	{
//		printf("0");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[7][2];
//	int i,b;
//	scanf("%d", arr);
//	for (i = 0; i < 7; i++)
//	{
//		b = arr[i][0] + arr[i][1];
//		if (b > 8)
//			printf("%d", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a, b,i,sum;
//	scanf("%d,%d", &a, &b);
//	if (a > b)
//	{
//		sum = a;
//		a = b;
//		b = sum;
//	}
//	for (i = a; i > 0; i--)
//	{
//		if (a% i == 0 && b %i== 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	for (i = b; i > 0; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//	double a,x,y=0;
//	scanf("%lf%lf", &a, &x);
//	while (1)
//	{
//		y += a;
//		a = 98 * a / 100.0;
//		count++;
//		if (y >= x)
//		{
//			printf("%d", count);
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int n, a, b, c, x, y, d;
//	int all = 0, aii = 0;
//	int i;
//	scanf("%d%d%d%d%d%d", &n, &a, &b, &c, &x, &y);
//
//	for (i = 1; i < n; i++)
//	{
//		d = a + b * (i - 1);
//		if (i % x == 0 && d > c)
//			all += d;
//	}
//	for (i = 1; i <n; i++)
//	{
//		d = a + b * (i - 1);
//		if (i % y == 0 && d > c)
//			aii += d;
//	}
//	printf("%d", all + aii);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n, a, b, c, x, y, d;
//	int all = 0, aii = 0;
//	int i;
//	scanf("%d%d%d%d%d%d", &n, &a, &b, &c, &x, &y);
//
//	for (i = 0; i < n; i++)
//	{
//		d = a + b * i;
//		if (i % x == 0 && d > c)
//			all += d;
//	}
//	for (i = 0; i < n; i++)
//	{
//		d = a + b * i;
//		if (i % y == 0 && d > c)
//			aii += d;
//	}
//	printf("%d", all + aii);
//	return 0;
//}

