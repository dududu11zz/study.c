#define  _CRT_SECURE_NO_WARNINGS 1

//�ҳ�ֻ����һ�ε���

#include<stdio.h>
//3^3=0
//a^a=0
//0^3=0
//0^a=a
//��������㽻���ɵ�
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,7,5 };
	//�ҳ�ֻ����һ�ε���
	//�������
	int sz = sizeof(arr) / sizeof(arr[1]);
	int i;
	for (i = 0; i < sz; i++)
	{
		//ͳ��arr[i]��arr�����г����˼���
		int count = 0;
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d\n", arr[i]);
			break;
		}
	}
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 ,7,5};
//	//�ҳ�ֻ����һ�ε���
//	//�������
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	//�����������ͱ�������ʹ�õ�3������
//	int a = 3;
//	int b = 5;
//	//  ^ ��ʾ���������ƣ�λ���
//	//  ��ͬΪ0������Ϊ1
//	//  3  011
//	//  5  101
//	a = a ^ b;// a 110 b 101
//	b = a ^ b;// a 110 b 011
//	a = a ^ b;// a 101 b 011
//	return 0;
//}

//int main()
//{
//	//�����������ͱ�������ʹ�õ�3������
//	int a = 3;
//	int b = 5;
//	//�ӷ���ʵ��
//	//���������
//	//int-4���ֽ�-32��bitλ
//	a = a + b;//
//	b = a - b;//�õ�ԭ����a
//	a = a - b;//�õ�����ԭ����b
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i,n;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	if (sum < 0)
//		printf("0");
//	else
//		printf("%d", sum);
//	
//	return 0;
//}