#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int h = 0;
	int r;
	int arr[20] = { 0 };
	int count = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &r);
	for (i = 0; i < 10; i++)
	{
		if (arr[i] <= (r + 30))
			count++;
	}
	printf("%d", count);
	return 0;
}


//#include<stdio.h>
//
//int main()
//{
//	int k=0;
//	int n = 1;
//	double sum = 0;
//	double a;
//	scanf("%d", &k);
//	while (1)
//	{
//		a = 1.0 / n;
//		sum += a;
//		if (sum >k)
//		{
//			printf("%d", n);
//			break;
//		}
//		n++;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	int arr[10000] = { 0 };
//	int a = 0;
//	int b = 0;
//	int d = 0;
//	int count = 0;
//	scanf("%d", &i);
//	for (n = 0; n <= i; n++)
//	{
//		arr[n] = 1;
//	}
//	scanf("%d", &m);
//	while (m)
//	{
//		m--;
//		scanf("%d%d", &a, &b);
//		for (d = a; d <= b; d++)
//		{
//			if (arr[d] == 1)
//			{
//				arr[d] = 0;
//			}
//		}
//	}
//	for (n = 0; n <= i; n++)
//	{
//		if (arr[n] == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}