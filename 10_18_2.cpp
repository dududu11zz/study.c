#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>




//位操作符 必须是整型
//
//int main()
//{
//	//& 按(二进制)位与
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//a 011 注:要用补码！
//	//b 101
//	//c 001
//	// | 按位或
//	//d 111
//	// ^ 按位异或
//	//e 110
//	printf("%d", c);
//	printf("%d", d);
//	printf("%d", e);
//	
//	
//	return 0;
//}


//#include<stdio.h>
//
////移位操作符  不要移动负数位
//
//int main()
//{
//	int a = 16;
//	// >> 右移操作符
//	//移动的是二进制位
//	//16：10000
//	// 1.算术右移：右边丢弃，左边补原符号位
//	// 2.逻辑右移：右边丢弃，左边补0
//	int c = -1;
//	//整数存储在内存的是补码
//	int b=c>> 1;
//	int d = 7;
//	int e = d << 1;
//	//左移操作符：左边丢弃，右边补0
//	//左移有乘2的效果
//	printf("%d %d", b,e);
//	return 0;
//}

//int main()
//{
//	int a=5/2;
//	float b = 5 / 2;
//	printf("%d %lf\n", a, b);
//	return 0;
//}