#define  _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ

#include<stdio.h>
#include"game.h"

//��Ϸ������ʵ��



void game()
{
	char ret;
	//����һ�����飬����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	displayboard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=iswin();
		if (ret != 'c');
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board,ROW,COL);
		if (ret != 'c');
		{
			break;
		}
		//�жϵ����Ƿ�Ӯ
		if (ret == '*')
			printf("���Ӯ\n");
		else if (ret == '#')
			printf("����Ӯ\n");
		else if (ret == 'q')
			printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				//printf("������\n");
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