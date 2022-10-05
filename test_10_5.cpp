#define  _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏

#include<stdio.h>
#include"game.h"

//游戏的整个实现



void game()
{
	//创建一个数组，存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
}

void menu()
{
	printf("***********************************\n");
	printf("********1. play    0. exit*********\n");
	printf("***********************************\n");
}

void test()
{
	int input;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				printf("三子棋\n");
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}