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
	//�׵���Ϣ�洢

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}





//�ҳ�ֻ����1�ε���
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