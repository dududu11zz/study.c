#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int n;
	scanf("%d", &n);
	int arr[1001] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	} 
	int count = 0;
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (j == arr[i] && j == 1)
//			{
//				printf("%d", i+1);
//				break;
//			}
//			else if (j == arr[i])
//			{
//				printf(" %d", i+1);
//				break;
//			}
//
//		}
//	}
//	return 0;
//}
//double Fac(int x)
//{
//	int i = 0;
//	int sum=0;
//	int j = 0;
//	int count = 1;
//	
//	
//	
//		for (i = 1; i <= x; i++)
//		{
//			for (j = i; j < i; j++)
//			{
//				count *= j;
//			}
//			sum += count;
//		}
//
//		return sum;
//
//}


//int fun(char a[], char b[])
//{
//	int c;
//	c = strcmp(a, b);
//	if (c > 0)
//		return 1;
//	else if (c < 0)
//		return -1;
//	else
//		return c;
//
//
//}


//float fun(int n)
//{
//	int i = 0;
//	int m=1;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = 1.0 / (1 + sum);
//	}
//	return sum;
//}


//int fun(int a[3][3])
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	return sum;
//}

//void  fun(int a[], int  n)
//{
//	int i = 0;
//	int j = 0;
//	int mid;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				mid = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = mid;
//			}
//		}
//	}
//}



//int fun(int w)
//{
//	int count = 0;
//	int g = w;
//	while (w)
//	{
//		w = w / 10;
//		count++;
//	}
//	int i;
//	int n = 1;
//	for (i = 0; i < count; i++)
//	{
//		n *= 10;
//	}
//	return g % n;
//}

//int IntMax3(int x, int y, int z)
//{
//	int max;
//
//	if (x >= y)
//	{
//		max = x;
//		
//	}
//	else if (y > x)
//	{
//		max = y;
//	}
//	if (max >= z)
//		return max;
//	else if (z > max)
//		return z;
//
//}



//double Rec(double x)
//{
//	if (x != 0)
//		return 1.0 / x;
//	else
//	{
//		printf("Divided by zero!\n");
//		return 0;
//	}
//		
//}



//void ShowNameDayWeekCN(int dow)
//{
//	switch (dow)
//	{
//	case 0:printf("日");
//		break;
//	case 1:printf("一");
//		break;
//	case 2:printf("二");
//		break;
//	case 3:printf("三");
//		break;
//	case 4:printf("四");
//		break;
//	case 5:printf("五");
//		break;
//	case 6:printf("六");
//		break;
//	}
//}


//int main()
//{
//	int w = 1;
//	ShowNameDayWeekCN(w);
//	return 0;
//}