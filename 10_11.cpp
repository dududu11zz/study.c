#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i, j;
	for (int i = 0, j = 10; i = j = 10; i++, j--)
	{

	}
	return 0;
}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,a,b,i,j,a1,b1;
//	int sum1 = 0,sum2=0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//
//		if (a > 1)
//		{
//			for (j = 1; j <= sqrt(a); j++)
//			{
//				if (a % j == 0 && j != sqrt(a) && j != 1)
//				{
//					sum1 += (j + a / j);
//				}
//				else if (j == 1)
//					sum1 = 1;
//				else if (j == sqrt(a))
//					sum1 += j;
//			}
//		}
//		else if (a == 1 || a == -1)
//			sum1 =0;
//		else if (a < 0)
//		{
//			a1 = -a;
//			for (j = 1; j <= sqrt(a1); j++)
//			{
//				if (a1 % j == 0 && j != sqrt(a1) && j != 1)
//				{
//					sum1 += (j + a1 / j);
//				}
//				else if (j == 1)
//					sum1 = 1;
//				else if (j == sqrt(a1))
//					sum1 += j;
//			}
//			sum1 = -sum1;
//		}
//		if (b > 1)
//		{
//			for (j = 1; j <= sqrt(b); j++)
//			{
//				if (b % j == 0 && j != sqrt(b) && j != 1)
//				{
//					sum2 += (j + b / j);
//				}
//				else if (j == 1)
//					sum2 = 1;
//				else if (j == sqrt(b))
//					sum2 += j;
//			}
//		}
//		else if (b == 1 || b == -1)
//			sum2 = 0;
//		else if (b < 0)
//		{
//			b1 = -b;
//			for (j = 1; j <= sqrt(b1); j++)
//			{
//				if (b1 % j == 0 && j != sqrt(b1) && j != 1)
//				{
//					sum2 += (j + b1 / j);
//				}
//				else if (j == 1)
//					sum2 =1;
//				else if (j == sqrt(b1))
//					sum2 += j;
//			}
//			sum2 = -sum2;
//		}
//		if (a == 0 && b == 0)
//			printf("NO\n");
//		else if (sum2 == a || sum1 == b)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	int sum1=0, sum2=0;
//	int arr[100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i += 2)
//	{
//		sum1+= arr[i];
//	}
//	for (i = 1; i < n; i += 2)
//	{
//		sum2 += arr[i];
//	}
//	printf("%d", sum1 - sum2);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int i, n, a, sum = 0;
//	scanf("%d", &n);
//	
//	
//		while (1)
//		{
//			a = n % 10;
//			n = n / 10;
//			sum += a;
//			if (n == 0)
//				break;
//		}
//		if (sum > 1)
//		{
//			for (i = 2; i < sum; i++)
//			{
//				if (sum % i == 0)
//					break;
//			}
//			if (i >= sum)
//			{
//				printf("Congratulations, Dao!");
//			}
//			else
//				printf("So pity, Dao!");
//		}
//		else
//			printf("So pity, Dao!");
//	
//		
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	double a=100, sum = 0;
//	for (i = 0; i < n; i++)
//	{sum += a;
//		a = a * (1.0 / 2);
//		
//	}
//	printf("%.4lf %.4lf", sum, a);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int i,n;
//	double b, sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		b = 1.0 * (i + 1) / (i);
//		sum += b;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a,i,b;
//	int arr[100];
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < a - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				b = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = b;
//			}
//		}
//	}
//	printf("%d %d", arr[a - 1], arr[a - 2]);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a,b,d,sum=0,g,sum2=0;
//	scanf("%d%d", &a, &b);
//	int i;
//	for (i = a; i <= b; i++)
//	{
//		if (i % 2 == 0)
//		{
//			d = i * i * i;
//			sum += d;
//		}
//		else
//		{
//			g = i * i;
//			sum2 += g;
//		}
//	}
//	printf("%d %d", sum2, sum);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a, s1, s2,i;
//	scanf("%d%d%d", &a, &s1, &s2);
//	if (a >= 7) 
//	{
//		if ((a - 7) * 8 + 27 + s1 > s2)
//			printf("YES");
//		else
//			printf("NO");
//	}
//	else if (a < 7)
//	{
//		for (i = 0; i < a-1; i++)
//		{
//			s1 += (7 - i);
//		}
//		if(s1>s2)
//			printf("YES");
//		else
//			printf("NO");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n, i, a, b, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		if (a % 7 == 0)
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int a, b, sum, j;
//	scanf("%d", &a);
//	getchar();
//	int arr[100];
//	double all = 0;
//	int i;
//	for (j = 0; j < a; j++)
//	{
//		scanf("%d", &b);
//		arr[j] = b;
//		getchar();
//	}
//	for (j = 0; j < a; j++)
//	{
//		int i = 0;
//		for (i = 0; i < a - j - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				sum = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = sum;
//			}
//		}
//	}
//	for (j = 1; j < a - 1; j++)
//	{
//		all += arr[j];
//	}
//	printf("%.1lf", all);
//	return 0;
//}