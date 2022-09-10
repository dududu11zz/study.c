#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}


//int main()
//{
//	for (;;)
//		    //for循环的初始化，调整，判断都可以省略
//		    //但是：for循环的判断部分 如果被省略 那判断条件就是恒为真
//		    //建议不要随便省略相关代码
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//建议for语句采用“前闭后开区间”写法
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)//不能用i=5，此时意为给i赋值，会使for循环失去控制。
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
 /*对于for语句
 语法： for(表达式1;表达式2;表达式3)
 表达式1：此为初始化部分，用于初始化循环变量的。
 表达式2：此为条件判断部分，用于判断循环时候终止。
 表达式3：此为调整部分，用于循环条件的调整*/


//
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//...
//		i++;//调整
//
//	}	
//
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')// ||意为或者
//			continue;
//		putchar(ch);
//		//此段代码意为只打印字符'1'与字符'9'之间的字符
//
//	}
//	return 0;
//}