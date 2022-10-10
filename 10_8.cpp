#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n, a, b, c, x, y,d;
	int sum,all=0,aii=0;
	int i;
	scanf("%d%d%d%d%d%d", &n, &a, &b, &c, &x, &y);
	sum = a + b * (n-1);
	for (i = 1; i <=n; i++)
	{
		d = a + b * (i-1);
		if(i % x == 0 && d > c)
			all += d;	
	}
	for (i = 1; i <=n; i++)
	{
		d = a + b * (i-1);
		if (i % y == 0 && d > c)
			aii += d;
	}	
	printf("%d", all+aii);
	return 0;
}
//#include<stdio.h>
//
//int main()
//{
//	int i,n,b;
//	int arr[100]={};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			b = arr[i + 1];
//			arr[i + 1] = arr[i];
//			arr[i] = b;
//		}
//	}
//	printf("%d", arr[n-1]);
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n,m,sum=0,i;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if ((n % i) == 0)
//			sum += i;
//	}
//	if (sum == n)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	int i,a=1;
//	double sum=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		double b;
//		b = 1.0 / a;
//		sum =sum+b;
//		a = a+2;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n,i;
//	int a = 1;
//	scanf("%d",&n);
//	for (i = 0; i < n-2; i++)
//	{
//		a += 1;
//		a = 2 * a;
//	}
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i,n=0;
//	char c[100]="";
//	scanf("%s", c);
//	int sz = strlen(c);
//	for (i = 0;i<sz-1; i++)
//	{
//		if (c[i] >= 48 && c[i] <= 57)
//			n++;
//	}
//	printf("%d", n);
//	return 0;
//}
//#include<stdio.h>

//int main()
//{
//	int n;
//	int d;
//	int sum = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		d = n % 10;
//		n = n / 10;
//		sum += d;
//		if (n < 10)
//		{
//			printf("%d", sum + n);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	double a=1, b=1, c,sum=0;
//	int i, n;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		c = a + b;
//		sum += 1.0 * c / b;
//		a = b;
//		b = c;
//		
//	}
//	printf("%lf", sum);
//	return 0;
//}