#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//写一个函数，判断一个数是不是素数

int sus(int x)
{
	int i;
	
	for (i = 2; i < x; i++)
	{
		if (x / i == 0)
		{
			printf("这个数不是素数");
			break;
		}
	}
	if (i == x)
		printf("%d是素数", x);
	
	return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	sus(a);
	

	return 0;
}
//写一个函数，交换两个整型变量的内容

//int main()
//{
//	int a = 10;
//	int* pa=&a;//pa指针变量
//	*pa=20;//解引用操作
//	printf("%d", a);
//	return 0;
//}
// 当实参传给形参的时候
// 形参其实是实参的一份拷贝
// 对形参的修改是不会改变实参的
//void Swap1(int x, int y)//不能完成任务
//{
//	int tmp;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void swap2(int* pa, int* pb)  //可以完成任务
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp;
//	printf("a=%d b=%d\n", a, b);
//	//调用swap2函数
//	swap2(&a, &b);
//	/*Swap(a, b);*/
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
/*int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}


int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c = max(a, b);
	printf("max= %d\n", c);
	return 0;
}*/

//memset--memory set --内存设置
/*int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//第一个参数表示要更改的地址，第二个参数表示要更改变成的值
	                    //第三个参数表示要更改头5个字节的值为第二个参数
	printf("%s\n", arr);

	return 0;
}*/
/*int main()
{
	char arr1[] = "fzu";
	char arr2[] = "######";
	strcpy(arr2, arr1);//前一个地址表示指向的地点，后一个地址表示源头
	printf("%s\n", arr2);//返回的时候还会带着一个\0;\0是字符串结束的标志
	//strcpy---string copy---字符串拷贝
	//strlen---string length--求字符串长度
	return 0;
}*/

//int add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}