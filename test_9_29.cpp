#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ʵ��ð������

// ð������
//10 9 8 7 6 5 4 3 2 1 0
//10��Ԫ�� 9��ð������
void bubble_sort(int arr[])
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz; i++)//szΪԪ�ظ�����i<sz��ʾѭ��sz-1��
	{
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,4,6,5,1,2,3 };
	int i = 0;
	//��arr���������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr);//ð��������
	for(i=0;i<sz;i++)
	return 0;
}

////��ά�������ڴ��еĴ洢
//int main()
//{
//	int arr4[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr4[%d][%d]=%p\n", i, j, &arr4[i][j]);//��ά�������ڴ���Ҳ��������ŵ�
//		}
//	}
//	return 0;
//}


//��ά����Ĵ����ͳ�ʼ��

//int main()
//{
//	int arr[3][4];//��������
//	char arr2[4][5];//��������
//
//	int arr3[3][4] = { 1,2,3,4,5,6 };//��˳������ң����ϵ���������ݣ������Ĳ�0
//	int arr4[3][4] = { {1,2,3},{4,5} };//��ʱ��Ϊ��������ʼ��
//	int arr5[][5] = { {1,2,3,4,5},{6,7,8 } };//��ά������в���ʡ�ԣ��п���ʡ��
//
//	//���ڶ�ά���飬�к��еı��Ҳ���Ǵ�0��ʼ
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//�������ڴ�����������ŵ�
//		
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}