#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//���ֵ ��Ϊ�Ҳ���\0
}
//int main()
//{
//	//����һ������-�������-10��
//
//	int arr[10];
//	char arr2[5];
//	int n = 7;
//	// char ch[n];//err  ������Ҫ����һ���������ʽ�������������
//	int  arr3[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr4[5] = { 'a','b',98 };//ʣ�µ�ҲΪ0
//	char arr5[5] = "ab";//��ʱ��������3��Ԫ�أ�a,b,\0 ʣ�µ�������0
//	char arr6[] = "acasd";//��ʱ������6��Ԫ��
//	printf("%d\n", sizeof(arr6));// 6
//
//	//sizeof ���� arr6��ռ�ռ�Ĵ�С
//	//7��Ԫ��- char 7*1=7
//	printf("%d\n", strlen(arr6));// 5
//	//strlen ���ַ�������--'\0'֮ǰ���ַ�����
//	//[a c a s d \0]
//	//����\0��ֹͣ ����Ϊ5
//	return 0;
//}

// 1. strlen ��sizeof û��ʲô����
// 2. strlenֻ�����ַ�������--�⺯��--ʹ��ͷ�ļ�
// 3. sizeof ������������飬���͵Ĵ�С--��λ���ֽ�--������
// 