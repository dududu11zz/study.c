
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,e,f,g,h;
	scanf("%lf%lf%lf",&a,&b,&c);
	double d=b*b-4.0*a*c;
	if(a==0&&b==0&&c==0)
	{
		printf("Zero Equation");
	}
	else if(a==0&&b==0&&c!=0)
	{
		printf("Not An Equation");
	}
	else
	{
	if(d>0)
	{
		e=(-b)/(2.0*a);
		f=sqrt(d)/(2.0*a);
		g=e+f;
		h=e-f;
		if(g>h)
		{
			printf("%.2lf\n%.2lf",g,h);
		}
		else if(h>g)
		{
			printf("%.2lf\n%.2lf",h,g);
		}
	}
	else if(d==0)
	{
		e=(-b)/(2.0*a);
		printf("%.2lf",e);
	}
	else if(d<0);
	{
		e=(-b)/(2.0*a);
		f=sqrt(-d)/(2.0*a);
		printf("%.2lf+%.2lfi\n",e,f);
		printf("%.2lf-%.2lfi\n",e,f);
	}
	}
	return 0;
}
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	double b,c,d,max,mid,min;
//	scanf("%d",&a);
//	scanf("%lf%lf%lf",&b,&c,&d);
//	if(b>c)
//	{
//	max=b;mid=c;
//	}
//	else if(b<c)
//	{
//	max=c;mid=b;
//	}
//	if(d>max)
//	{
//		
//		min=mid;mid=max;max=d;
//	}
//	else if(d>mid)
//	{
//		min=mid;mid=d;
//	}
//	else if(mid>d)
//	{
//		min=d;
//	}
//	if(a==0)
//	{
//		printf("%.2lf %.2lf %.2lf",min,mid,max);
//	}
//	else if(a==1)
//	printf("%.2lf %.2lf %.2lf",max,mid,min);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int a,b,c;
//	scanf("%d:%d:%d",&a,&b,&c);
//	if(a<7)
//	{
//		int d=a+5;
//		printf("+%02d:%02d:%02d",d,b,c);
//	}
//	else if(a>=19)
//	{
//		printf("+%02d:%02d:%02d",a-19,b,c);
//	}
//	else if(a<19)
//	{
//		int a1=18-a;
//		int b1=60-b;
//		int c1=60-c;
//		printf("-%02d:%02d:%02d",a1,b1,c1);
//	}
//	return 0;
//}
//
//
//
//
//
#include<stdio.h>

//int main()
//{
//	
//	double a,c,e,d,f,g,h,m,n;
//	scanf("%lf",&a);
//	d=36000*3.0/100;
//	e=10800*1.0/10;
//	n=156000*2.0/10;
//	f=120000*2.5/10;
//	g=240000*3.0/10;
//	h=300000*3.5/10;
//	if(a>960000)
//		m=(a-960000)*45/100.0+d+e+f+g+h+n;
//	else if(a>660000)
//	m=(a-660000)*35/100.0+d+e+f+g+n;
//	else if(a>420000)
//	m=(a-420000)*30.0/100+d+e+f+n;
//	else if(a>300000)
//	m=(a-300000)*25.0/100+d+e+n;
//	else if(a>144000)
//	m=(a-144000)*20.0/100+d+e;
//	else if(a>36000)
//	m=(a-36000)*10.0/100+d;
//	else if(a>=0)
//	m=a*3.0/100;
//	printf("%.2lf",m);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int a,b,c,d=0,i;
//	int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	scanf("%d/%d/%d",&a,&b,&c);
//	
//	if(a%4==0&&a%100!=0||a%400==0)
//	{
//		arr[0]=c;
//		arr[2]=29;
//	}
//	else
//	arr[0]=c;
//	for(i=0;i<b;i++)
//	{
//		d+=arr[i];
//	}
//	printf("%d",d);
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a%4==0&&a%100!=0||a%400==0)
//	{
//		int b=a%10;
//		int c=(a/10)%10;
//		int d=(a/100)%10;
//		int e=a/1000;
//		if(b==4||c==4||d==4||e==4)
//		printf("panta!");
//		else
//		printf("1");
//	}
//	else
//	printf("0");
//	return 0;
//}
//
//
//
//
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a>=90&&a<=100)
//	printf("A");
//	else if(a>=80&&a<90)
//	printf("B");
//	else if(a>=70&&a<80)
//	printf("C");
//	else if(a>=60&&a<70)
//	printf("D");
//	else if(a>=0&&a<60)
//	printf("E");
//	return 0;
//}



// #include<stdio.h> 
// #include<math.h>
// int main()
// {
// 	int a,b,c,d,e,f;
// 	double g,h,j,p,l,s;
// 	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
// 	g=(a-c)*(a-c)+(d-b)*(d-b);
// 	h=(e-a)*(e-a)+(f-b)*(f-b);
// 	j=(e-c)*(e-c)+(f-d)*(f-d);
// 	g=sqrt(g);
// 	h=sqrt(h);
// 	j=sqrt(j);
// 	
// 	if(g+h>j&&g+j>h&&h+j>g)
// 	    {
// 	    	p=(g+h+j)/2.0;
// 	    	s=sqrt(p*(p-g)*(p-h)*(p-j));
// 	    	l=g+h+j;
// 	    	printf("L = %.2lf, A = %.2lf",l,s);
//		 }
// 	else
// 	 printf("Impossible");
// 	
// 	return 0;
// }
