#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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