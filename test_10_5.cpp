#define  _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ

#include<stdio.h>
#include"game.h"

//��Ϸ������ʵ��



void game()
{
	//����һ�����飬����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}