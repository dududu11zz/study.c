#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//systrm��ͷ�ļ�
#include<string.h>//strcmp��ͷ�ļ�
//һ���ػ�����
int main()
{
	char input[20] = { 0 };
	//shutdown-s(���ùػ�)-t������ʱ��ػ���
	//system()-����ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ����������:������ ����ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") ==0)//�Ƚ������ַ���-strcmp(��
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
//	goto again;//goto��ʾ��ת���
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}