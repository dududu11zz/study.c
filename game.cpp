#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//1.��ӡһ�е�����
	for (i = 0; i < row; i++)
	{
		
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			
		}
		printf("\n");
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
				printf("|");
			}
			printf("\n");
		}
	}
}

//void displayboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.��ӡһ�е�����
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		
//		//2.��ӡ�ָ���
//		if(i<row-1)
//		printf("---|---|---\n");
//	}
//
//}


void playermove(char board[ROW][COL], int row, int col)
{
	int x;
	int y;
	printf("�������:>\n");
	
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�x,y����ĺ�����
		if (x >= 1 && x <=col && y >= 1 && y <= row)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
	int x; int y;
	x = rand() % row;
	y = rand() % col;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0])
		{

		}
	}
}