#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n, i = 0, j, k, g;
	scanf("%d", &n);
	int count = 0, sum = 0;
	if (n == 1)
		printf("1");
	else
	{
		while (1)
		{
			i++;
			sum += i;
			if (sum > n)
				break;
			count++;
		}
		for (i = 1; i <= count; i++)
		{
			for (j = 0; j < count - 1 - i; j++)
				printf("0");
			for (k = 0; k < i; k++)
			{
				if (count - i + 1 != 1 && (count - i + 1) <= 9)
					printf("%02d", count - i + 1);
				else if( (count - i + 1) > 9)
					printf("%03d", count - i + 1);
				else if (count - i + 1 == 1)
				{
					printf("1");
					for (g = 0; g < count - 1; g++)
					{
						printf("01");

					}break;
				}
			}
			for (int m = 0; m < count - i; m++)
				printf("0");
			printf("\n");
		}
	}

	return 0;
}


//#include<stdio.h>
//
//int main()
//{
//	int n, i=0,j,k,g;
//	scanf("%d", &n);
//	int count = 0,sum=0;
//	if (n == 1)
//		printf("1");
//	else
//	{
//		while (1)
//		{
//			i++;
//			sum += i;
//			if (sum > n)
//				break; 
//			count++;
//		}
//		for (i = 1; i <= count; i++)
//		{
//			for (j = 0; j < count - 1 - i; j++)
//				printf("0");
//			for (k = 0; k < i; k++)
//			{
//				if (count - i + 1 != 1)
//					printf("%02d", count - i + 1);
//				else if (count - i + 1 == 1)
//				{
//					printf("1");
//					for (g = 0; g < count - 1; g++)
//					{
//						printf("01");
//
//					}break;
//				}
//			}
//			for (int m = 0; m < count - i; m++)
//				printf("0");
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char c;
//	int flag = 0;
//	int count = 0;
//	do
//	{
//		scanf("%c", &c);
//		if (c != ' '&&c!='.')		
//			count++;		
//		
//		else 
//		{
//			if (count!=0 && flag == 0)
//			{
//				printf("%d", count);
//				flag = 1;
//			}
//			else if (count != 0)
//				printf(" %d", count);
//			count = 0;
//		}
//
//	} while ((c ) != '.');
//	
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long i,j,n,k,sum=0,b=1;
//	scanf("%lld%lld",&n,&k);
//	for(i=1;i<=n;i++)
//	{
//		b = 1;
//		 for(j=1;j<=k;j++)
//		 {
//		 	b=(b*i) %114514;
//		 }
//		
//		 sum+=b;
//	}
//	sum%=114514;
//	printf("%lld",sum);
//	return 0;
//}

//#include<stdio.h>
//
//
//int main()
//{
//	double a3,a2,a1,a0;
//	scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
//	double a,b;
//	scanf("%lf%lf",&a,&b);
//	double left=a3*a*a*a+a2*a*a+a1*a+a0;
//	double right=a3*b*b*b+a2*b*b+a1*b+a0;
//	double mid=(left+right)/2;
//	double mid1;
//	while(b-a>=0.01)
//	{
//		 left=a3*a*a*a+a2*a*a+a1*a+a0;
//		 right=a3*b*b*b+a2*b*b+a1*b+a0;
//		mid=(a+b)/2.0;
//		mid1=a3*mid*mid*mid+a2*mid*mid+a1*mid+a0;
//		if (mid1== 0)
//		{
//			printf("%.2lf", mid);
//			break;
//		}
//		if (left == 0)
//		{
//			printf("%.2lf", a);
//			break;
//		}
//		if (right == 0)
//		{
//			printf("%.2lf", b);
//			break;
//		}
//		if(mid1*left>=0)
//		{
//			a=mid;
//		}
//		else 
//		{
//			b=mid;
//		}
//		if (b - a < 0.01)
//			printf("%.2lf", (a + b) / 2.0);
//	}
//	
//	return 0;
//}