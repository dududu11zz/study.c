
#include<stdio.h>

int main()
{
	int n=0;
	int i=0;
	int k=0;
	int arr[100]={0,0,0,0,0,0,0,0,0,0,0};
	int max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		if(k==0)
		arr[0]++;
		else
		{
		while(k)
		{			
			arr[k%10]++;
			k=k/10;
		}
		}
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>=arr[max])
		max=i;
	}
	printf("%d:",arr[max]);
	for(i=0;i<10;i++)
	{
		if(arr[i]==arr[max])
		printf(" %d",i);
	}
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	int k;
//	scanf("%d",&n);
//	int arr1[1000]={0};
//	int arr2[1000]={0};
//	int i,m;
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr1[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		int j=0;
//		int m=0;
//		for(j=0;j<n;j++)
//		{
//			if(arr1[i]<=100-arr2[j])
//			{
//				arr2[j]=arr2[j]+arr1[i];
//				printf("%d %d\n",arr1[i],j+1);
//				if(j+1>m)
//			m++;
//			break;
//			}
//			
//		}
//	}
//	printf("%d",m);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n=0;
//	int i=0;
//	int k=0;
//	int arr[1000]={0};
//	int max=0;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&k);
//		int d=0;
//		while(k)
//		{
//			d=k%10;
//			arr[d]++;
//			k=k/10;
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]>arr[max])
//		max=i;
//	}
//	printf("%d:",arr[max]);
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]==arr[max])
//		printf(" %d",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[1000]={0};
//	int n=0;
//	int i=0;
//	int max=0;
//	int k;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]>arr[max])
//		max=i;
//	}
//	int count=0;
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]==arr[max])
//		count++;
//	}
//	printf("%d %d",arr[max],count);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int n=0;
//	int i=0;
//	int k=0;
//	int arr[100]={0};
//	int tmp;
//	scanf("%d%d",&n,&k);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int j=0;
//	for(i=0;i<k;i++)
//	{
//		j=0;
//		for(j=0;j<n-1-i;j++)
//		{
//			if(arr[j+1]<arr[j])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//	for(i=0;i<n-1;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("%d",arr[n-1]);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n=0;
//	int i=0;
//	int arr[100]={0};
//	int tmp;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int j=0;
//	for(i=0;i<n-1;i++)
//	{
//		j=0;
//		for(j=0;j<n-i-1;j++)
//		{
//			if(arr[j+1]>arr[j])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//	for(i=0;i<n-1;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("%d",arr[n-1]);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int arr[10]={0};
//	int i;
//	for(i=0;i<6;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//    printf("%d",arr);
//}

//int max=0;
//	int min=0;
//	for(i=0;i<6;i++)
//	{
//		if(arr[i]>arr[max])
//		{
//			max=i;
//		}
//	}
//	for(i=0;i<6;i++)
//	{
//		if(arr[i]<arr[min])
//		{
//			min=i;
//		}
//	}
//	int sum=0;
//	for(i=0;i<6;i++)
//	{
//		sum+=arr[i];
//	}
//	sum=sum-arr[max]-arr[min];
////#include<stdio.h>
////
//int main()
//{
//	int arr[20]={1,1};
//	int i;
//	for(i=0;i<12;i++)
//	{
//		arr[i+2]=arr[i]+arr[i+1];
//		printf("%6d",arr[i]);
//		if((i+1)%3==0&&i!=0)
//		printf("\n");
//	}
//	
//	
//	return 0;
//}
