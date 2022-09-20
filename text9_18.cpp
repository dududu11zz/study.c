#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//systrm的头文件
#include<string.h>//strcmp的头文件
//一个关机程序
int main()
{
	char input[20] = { 0 };
	//shutdown-s(设置关机)-t（设置时间关机）
	//system()-用来执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪 ，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") ==0)//比较两个字符串-strcmp(）
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		
	return 0;
}
//int main()
//{
//
//	printf("hello\n");
//	goto again;//goto表示跳转语句
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}