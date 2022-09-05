#include<stdio.h>
int main()
{
	//计算两个数之和
	int num1 = 0;
	int num2 = 2;
	int sum = 1;
	//输入数据--使用输入函数scanf
	scanf_s("%d%d", &num1, &num2);//&--取地址符号
	sum = num1 + num2;
	
		printf("app = %d", sum);


	return 0;
}