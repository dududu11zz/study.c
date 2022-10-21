
#include<stdio.h>

int main()
{
	int arr[10][10]={0};
	int i=0;
	int j=0;
	int n=0;
	int c=0;
	int k=0;

	scanf("%d",&n);
		int l=n-1;
		while(k<=l)
	{
		for(i=k;i<=l;i++)
	{
		arr[k][i]=++c;
	}
	for(i=k+1;i<=l;i++)
	{
		arr[i][l]=++c;
	}
	for(i=l-1;i>=k;i--)
	{
		arr[l][i]=++c;
	}
	for(i=l-1;i>k;i--)
	{
		arr[i][k]=++c;
	}
	k++;l--;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",arr[i][j]);	
		}
		printf("\n");
	} 
	
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int m=0;
//	int n=0;
//	int i=0;
//	int j=0;
//	int i1=0;
//	scanf("%d%d",&m,&n);
//	int arr[7][7]={0};
//	int arr1[7][7]={0};
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(j+m<n)
//			i1=j+m;
//			else if(j+m>=n)
//			i1=(j+m)%n;
//			arr1[i][i1]=arr[i][j];
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%d ",arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n=0;
//	int k=0;
//	int i=0;
//	int j=0;
//	int max=0;
//	int count=0;
//	int arr[1001]={0};
//	scanf("%d",&n);
//	while(n)
//	{
//		n--;
//		scanf("%d",&k);
//		for(i=0;i<k;i++)
//		{
//			scanf("%d",&j);
//			arr[j]++;
//		}
//		
//	}
//	for(i=0;i<1001;i++)
//	{
//		if(arr[i]>=arr[max])
//		{
//			max=i;
//		}
//	}
//	printf("%d %d",max,arr[max]);
//		
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[11][11]={0};
//	int i=0;
//	int j=0;
//	int n=0;
//	int sum=0;
//	int sum1=0;
//	int sum2=0;
//	int sum3=0;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			sum+=arr[i][j];
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		sum1+=arr[i][n-1-i];
//	}
//	for(i=1;i<n;i++)
//	{
//		sum2+=arr[n-1][i];
//	}
//	for(i=1;i<n;i++)
//	{
//		sum3+=arr[i][n-1];
//	}
//	printf("%d",sum-sum1-sum2-sum3+arr[n-1][n-1]);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int t=0;
//	int arr[11][11]={0};
//	int i=0;
//	int j=0;
//	int n=0;
//	int flag=1;
//	scanf("%d",&t);
//	while(t)
//	{
//		t--;
//		flag=1;
//		scanf("%d",&n);
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<n;j++)
//			{
//				scanf("%d",&arr[i][j]);
//			}
//		}
//		for(i=1;i<n;i++)
//		{
//			for(j=0;j<i;j++)
//			{
//				if(arr[i][j]!=0)
//				{
//					flag=0;
//				}
//			}
//		}
//		if(flag==1)
//		{
//			printf("YES\n");
//			
//		}
//		else
//		printf("NO\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[7][7]={0};
//	int n=0;
//	int m=0;
//	int i=0;
//	int j=0;
//	scanf("%d%d",&n,&m);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	int sum=0;
//	for(i=0;i<n;i++)
//	{
//		int sum=0;
//		for(j=0;j<m;j++)
//		{
//			sum+=arr[i][j];
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[21][21]={0};
//	int n=0;
//	int m=0;
//	scanf("%d%d",&m,&n);
//	int i=0;
//	int j=0;
//	int flag=0;
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(i=1;i<m-1;i++)
//	{
//		
//		for(j=1;j<n-1;j++)
//		{
//			
//			if(arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1]&&arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j])
//		{
//			printf("%d %d %d\n",arr[i][j],i+1,j+1);
//			flag=1;
//		}
//		}
//		
//	}
//	if(flag==0)
//		{
//			printf("None %d %d",m,n);
//		}
//	return 0;
//}
