#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ָ������-����--���ָ�������
//����ָ��-ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//��������-������� �ַ�����-����ַ� ָ������-���ָ��
	int* arr[3]={&a,&b,&c};//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * arr[i]);
	}
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	int*** pppa = &ppa;
//	printf("%d\n", **ppa);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p==%p\n",p+i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr;//��Ԫ�صĵ�ַ
//	
//	//ֻ����������
//	//1.&arr -&������-������������Ԫ�صĵ�ַ-��������ʾ��������
//	// -&������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)-sizeof(������)-��������ʾ������������
//	//sizeof(������)-���������������Ĵ�С
//	printf("%p", arr);
//	return 0;
//}