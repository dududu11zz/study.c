#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// ������������ ��������������Ԫ�صĵ�ַ
	//1.sizeof(������)--��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2.&������ ������������������ &������ ȡ���������������������
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//����ĵ�ַ,����ֵ�պõ��ڵ�һ��Ԫ�صĵ�ַ�����Ǵ�������岻ͬ��
	printf("%d\n", *arr);
	////������������Ԫ�صĵ�ַ
	return 0;
}
////ð������
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������Ķ���
//		int j = 0;
//		for (j = 0; j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;//�������ݣ�������ʱ����
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;//breakֻ������ѭ�������
//		}
//	}
//	//break;���������
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ ��&arr[0]
//	bubble_sort(arr,sz);//ð��������
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}