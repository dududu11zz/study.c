
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]="0";
	gets(arr);
	int sz=strlen(arr);
	int i=0;
	int j=0;
	int min=1;
	char arr2[100]="";
	for(i=0;i<sz;i++)
	{
		for(j=0;j<sz;j++)
		{
			if(arr[i]!=arr2[j])
			{
				arr2[j]=arr[i];
				break;
			}
		}
	}
	char c;
	int sz1=strlen(arr2);
	for(i=0;i<sz1-1;i++)
	{
		for(j=0;j<sz-1-i;j++)
		{
			if(arr2[j]>arr2[j+1])
			{
				c=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=c;
			}
		}
	}
	printf("%s",arr2);
	return 0;
}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int s=0;
//	int i=0;
//	char arr[32]="";
//	for(i=0;i,32;i++)
//	{
//		scanf("%c",&arr[i]);
//	}
//	for(i=0;i<32;i++)
//	{
//		if((arr[i])-'0'==1)
//		{
//			s+=pow(2,31-i);
//		}
//		else
//		{
//			s+=0;
//			
//		}
//		if(i%8==0)
//		{
//			printf("%d",i);
//			s=0;
//		}
//	}
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[500010]="";
//
//	int i=0;
//	char ch;
//	while(1)
//	{
//		scanf("%s",arr);
//		ch=getchar();
//		if(ch=='\n')
//		break;
//		
//	}
//	printf("%s",arr);
//	return 0;
//}


