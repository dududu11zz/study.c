#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//Ұָ��:Ұָ�����ָ��ָ���λ���ǲ���֪��(����ģ�����ȷ��)
//1.ָ��δ��ʼ����2.ָ��Խ�����;3.ָ��ָ��Ŀռ��ͷ�

int main()
{
	int a;//�ֲ�����
	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
	
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		p++;
	}

	
}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p=arr;//������-��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char c;
//	int* pa = &a;
//	char* pc = &c;
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//��ַ+1
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//��ַ+4
//	//ָ�����;�����:ָ����һ���߶�Զ��ָ��Ĳ�����
//	return 0;
//}
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa=&a;
//	*pa = 0;
//	//ָ�����;�����ָ����н����ò���ʱ�ܷ��ʵĿռ��С
//	return 0;
//}