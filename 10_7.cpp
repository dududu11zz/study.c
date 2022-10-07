
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 1;
	double sum = 0;
	double k, n, d;
	scanf("%lf%lf", &n, &k);
	while (i <= n)
	{
		d = floor(k / i);
        if(d==0)
            break;
		sum += d;
		i++;
	}
	printf("%.0lf", sum);
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int i;
//	char c;
//	double a,d;
//	scanf("%d",&i);
//    
//	while(i>0)
//	{
//		getchar();
//		scanf("%c%lf",&c,&a);
//		if(c=='F')
//		{
//		d=a*1.09;
//		printf("%.2lf\n",d);
//		}
//		else if(c=='M')
//		{
//			d=a/1.09;
//			printf("%.2lf\n",d);
//		}
//		i--;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i,n;
//	int count=0;
//	scanf("%d",&i);
//	while(1)
//	{
//		scanf("%d",&n);
//		if(n>i)
//		{
//			printf("Too big\n");
//		}
//		else if(n<i)
//		{
//			printf("Too small\n");
//		}
//		else if(n==i)
//		{
//			printf("Lucky You!\n");
//			break;
//		}
//		count++;
//		if(count==7)
//		{
//			printf("Game Over!\n");
//			break;
//		}
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int sum=0;
//	double k,n,d;
//	scanf("%lf%lf",&n,&k);
//	while(i<=n) 
//	{
//		d=floor(k/i);
//		sum+=d;
//	}
//	printf("%d",sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,n;
//	scanf("%d",&i);
//	if(i<=2000||i>3000)
//	printf("Invalid year!");
//	else if(i>=2001&&i<=2003)
//	printf("None");
//	else 
//	{
//		for(n=2001;n<=i;n++)
//		{
//			if(n%4==0&&n%100!=0||n%400==0)
//			{
//				printf("%d\n",n);
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	char c;
//	double a,d;
//	scanf("%d",&i);
//	getchar();
//	while(i>0)
//	{
//		scanf("%c%lf",&c,&a);
//		
//		i--;
//	}
//	if(c=='F')
//		{
//		d=a*1.09;
//		printf("%c %.2lf\n",c,d);
//		}
//		else if(c=='M')
//		{
//			d=a/1.09;
//			printf("%c %.2lf\n",c,d);
//		}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int q,n,m,sum=0,count=0;
//	double g;
//	scanf("%d",&n);
//	if(n!=0)
//	{
//	q=n;
//	while(n>0)
//	{
//		scanf("%d",&m);
//		sum+=m;
//		n--;
//		if(m>=60)
//		count++;
//	}
//	g=1.0*sum/q;
//	printf("average = %.1lf\ncount = %d",g,count);
//	}
//	else if(n==0)
//	printf("average = 0.0\ncount = 0");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i,d;
//	int sum=0;
//	int k=0;
//	scanf("%d",&i);
//	d=i;
//	while(i>0)
//	{
//		d=i%10;
//		sum+=d;
//	i=i/10;
//		k++;
//		
//	}
//	
//	printf("%d %d",k,sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n,m;
//	scanf("%d%d",&n,&m);
//	int i;
//	int sum=0;
//	for(i=n;i<=m;i++)
//	{
//		sum+=i;
//	}
//	printf("%d",sum);
//	return 0;
//}

// 
// #include<stdio.h>
// 
// int main()
// {
// 	int sum=0;
// 	int i;
// 	while(1)
// 	{
// 		scanf("%d",&i);
// 		if(i<=0)
// 		break;
// 		else if(i%2==1)
// 		sum=sum+i;
// 		
//	 }
//	 printf("%d",sum);
// 	return 0;
// }
