


#include <stdio.h> //stdio----std=stdand i=input o=output 即标准的输入输出

int main()   //int--整型
{
	char study = 'A'; //char--字符类型  study--一个名称，可随意改变
	printf("%c\n", study); //%c--打印字符格式的数据
	
	//%d-打印整型
	//%c-打印字符
	//%f-打印浮点型-打小数
	//%p-以地址的形式打印
	//%x-打印十六进制数字
	//%o ..........
	

	
	int age = 20;
	printf("%d\n", age);//%d--打印整型十进制数据





	long num = 100;//long---指长整型
	printf("%d\n", num);



	float f = 6.18;//float----浮点型数据--即小数
	printf("%f\n", f);



	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	









	return 0;
}
