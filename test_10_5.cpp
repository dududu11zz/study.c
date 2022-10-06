#define  _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏

#include<stdio.h>
#include"game.h"

//游戏的整个实现



void game()
{
	char ret;
	//创建一个数组，存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	displayboard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret=iswin();
		if (ret != 'c');
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board,ROW,COL);
		if (ret != 'c');
		{
			break;
		}
		//判断电脑是否赢
		if (ret == '*')
			printf("玩家赢\n");
		else if (ret == '#')
			printf("电脑赢\n");
		else if (ret == 'q')
			printf("平局\n");
	}

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
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				//printf("三子棋\n");
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