#include<stdio.h>
#include<string.h>

int main()
{
	int 

	return 0;
}



//int main()//���ö��ֲ��ҷ�����(��������)
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(1);
//	int k = 9;
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}


//int main()//��������������ֵ���±ꡣ
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(1);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���");
//	return 0;
//}

//int main()//����n�Ľ׳˵����
//{
//	int i = 1;
//		int n = 0;
//		int c = 1;//����cΪn�Ľ׳�
//		int sum = 0;
//		scanf_s("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			c = i *c;
//			sum = sum + c;
//		}
//		printf("%d ", sum);
//	
//	return 0;
//}

//int main()//����n�Ľ׳�
//{
//	int i = 1;
//	int n = 0;
//	int c = 1;//����cΪn�Ľ׳�
//	int sum = 0;//����sumΪ1��+2!+ .. +10!
//	
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1,c = 1; i <= n; i++)//Ҫ����c�ĳ�ʼ��
//		{
//			
//			c = i * c;
//
//		}
//		sum = sum + c;
//	}
//	
//	printf("%d ", sum);
//
//	return 0;
//}
//

//int main()//����n�Ľ׳�
//{
//	int i = 1;
//	int n = 0;
//	int c = 1;//����cΪn�Ľ׳�
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		c = i *c;
//		
//	}
//	printf("%d ", c);
//
//	return 0;
//}

 //do
 //  ѭ����䣻
	// while�����ʽ����

//int main()
//
//{
//	int i=0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
