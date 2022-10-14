
#include<stdio.h>

int main()
{
	char c;
	int flag=1;
	int count=0;
	while((c=getchar())!='.')
	{
		if(c!=' ')
		{
			count++;
			flag=1;
		}
		else if(c==' ')
		{
			if(count!=0) 
			{printf("%d ",count);
			flag=0;
			count=0;
			}
		}
		
	}
	if(count!=0)
	printf("%d",count);
	return 0;
} 

//#include<stdio.h>
//
//int main()
//{
//	
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long i,j,n,k,sum=0,b;
//	scanf("%lld%lld",&n,&k);
//	for(i=1;i<=n;i++)
//	{
//		 for(j=2;j<=k;j++)
//		 {
//		 	b=i*i;
//		 }
//		b%=114514;
//		 sum+=b%114514;
//	}
//	sum%=114514;
//	printf("%lld",sum);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char c;
//	int flag=1;
//	int count=0;
//	while((c=getchar())!='.')
//	{
//		if(c!=' ')
//		{
//			count++;
//			flag=1;
//		}
//		else if(c==' '&&flag)
//		{
//			printf("%d",count);
//			flag=0;
//			count=0;
//		}
//		if(count==0)
//		printf(" ");
//	}
//	if(count!=0)
//	printf("%d",count);
//	return 0;
//}
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	int n,i,j;
////	scanf("%d",&n);
////	if(n==1)
////	printf("None");
////	for(i=2;i<=n;i++)
////	{int flag=1;
////		long long b=pow(2,i)-1;
////		for(j=2;j<b;j++)
////		{
////			if(b%j==0)
////			{
////				flag=0;
////				break;
////			}
////		}
////		if(flag==1)
////		{
////			printf("%d\n",b);
////		}
////	}
////	return 0;
////}

//#include<stdio.h>
//
//
//int main()
//{
//	int a3,a2,a1,a0;
//	scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
//	int a,b;
//	scanf("%d%d",&a,&b);
//	double left=a3*a*a*a+a2*a*a+a1*a+a0;
//	double right=a3*b*b*b+a2*b*b+a1*b+a0;
//	double mid=(left+right)/2;
//	double mid1;
//	while(left*right<0)
//	{
//		double left=a3*a*a*a+a2*a*a+a1*a+a0;
//	double right=a3*b*b*b+a2*b*b+a1*b+a0;
//		mid=(a+b)/2;
//		mid1=a3*mid*mid*mid+a2*mid*mid+a1*mid+a0;
//		if(mid1*left>0)
//		{
//			a=mid;
//		}
//		if(mid1*right>0)
//		{
//			b=mid;
//		}
//		if(mid1==0)
//		printf("%.2lf",mid);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n,i,j;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-4d",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//  
//int main()
//{
//	char c;
//	int a=0,b=0,d=0,e=0;
//	while((c=getchar())!='\n')
//	{
//		if(c>='A'&&c<='Z'||c>='a'&&C<='z')
//		a++;
//		else if(c>='0'&&C<='9')
//		b++;
//		else if(c==' ')
//		d++;
//		else
//		e++;
//		
//	}
//	printf("%d %d %d %d",a,b,d,e);
//	return 0;
//}
 
