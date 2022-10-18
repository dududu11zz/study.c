#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("***********************\n");
	printf("******1. play**********\n");
	printf("******0. exit**********\n");
	printf("***********************\n");

}

void game()
{
	//雷的信息存储

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}





//找出只出现1次的数
//#include<stdio.h>
//
//int main()
//{
//	//a^a=0; 0^a=a;
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}