#include<stdio.h>

//int main()
//{
//	char ch ='a';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	//对于32位平台上，指针的大小为4字节，对于64位的平台上指针的大小为8字节
//	//因为对于32位平台，他的每一个地址都是由32位的bit来构成的，即4个字节
//	//而指针pc又等于字符ch所在的地址
//	//所以pc就等于一个32位的bit数，即4个字节
//	//同理，对于64位的平台，指针的大小位8给字节
//	*pc = 'w';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	int a = 100000000000000000;//四个字节
//	int* p=&a;//取出a的地址
//	printf("p= %p\n", p);//此时打印的是a所在的地址
//	printf("p= %p\n", &a);//此时打印的还是a所在的地址
//	printf("%d\n", sizeof(p));
//	*p = 20;//*-解引用操作符
//	printf("a= %d\n", a);
//	printf("p= %p\n", &p);//此时打印的是p所在的地址
//	//有一种变量是用来存放地址的--指针变量
//	//printf("%p\n", &a);//p表示地址
//
//	return 0;
//}



////函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//
////宏的实现
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	 max = MAX(a,b);
//	printf("max= %d\n", max);
//	return 0;
//}


//#define MAX 100//#define--定义标识符常量
////#define 可以定义宏--带参数
//int main()
//{
//	int a = MAX;
//	return 0;
//}



//一.static修饰局部变量
//局部变量的生命周期变长了
//二.static修饰全局变量
//改变了变量的作用域--让静态的全局变量只能在自己所在的源文件内使用
//出了源文件就没法用了
//三.static修饰函数
//也是改变了函数的作用域-不准确
//static修饰函数，改变了函数的链接属性：外部链接属性-->内部链接属性--准确的
//普通的函数具有外部链接属性

//extern int Add(int,int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum= %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//extern --用来声明外部符号的
//	extern int m;
//	printf("m= %d\n", m);
//
//	return 0;
//}
//void test()
//{
//	static int a = 1;//当被static修饰之后，a变成了一个静态的局部变量
//	a++;// a=2，3，4，5，6             
//	printf("a= %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)//为什么加了一个冒号后就无法执行的呢？
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//void test()
//{
//	int a = 1;
//	a++;
//	printf("a= %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)//为什么加了一个冒号后就无法执行的呢？
//	{
//		test();
//		i++;
//	}
//	return 0;
//}








//对于一个整数，内存中存储的都是二进制的补码
//正数的原码，反码，补码都是相同的
//负数：
//原码                 -->反码                     -->补码
//直接按照正负            原码的符号位不变            反码+1
//写出的二进制序列        其他位按位取反得到
//正负数的第一位都为符号位0表示正，1表示负





//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max=(a > b ? a : b);//条件操作符--exp1?exp2:exp3
//	                    //如果操作符exp1为真，则执行exp2，否则执行exp3
//	printf("max= %d\n", max);
//	return 0;
//}
