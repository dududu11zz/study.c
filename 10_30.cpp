#define  _CRT_SECURE_NO_WARNINGS 1

//�����ַ�����
#include<stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "fzu";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ���ȥָ�룬�õ������м�Ԫ�صĸ���
//	//��ָ��ָ�����ͬһ�ռ�
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;//NULL������ʼ��ָ�룬��ָ�븳ֵ ����ָ��
//	
//	if (pa != NULL)//ʹ��֮ǰ�����ָ�����Ч��
//	{
//
//	}
//	if (p == NULL)
//	{
//
//	}
//	return 0;
//}