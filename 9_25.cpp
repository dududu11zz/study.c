#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�����������Ͷ���

//���������� ����ͷ�ļ���
int add(int x, int y);

int main()
{
	int a = 10, b = 20;
	int sum;
	//��������
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}
//�����Ķ��� ���ڿ⺯����

int add(int x, int y)
{
	int z = x + y;
	return z;
}

//��������ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�ȴ�ӡ43
//	//printf("%d", 43)�ķ���ֵΪ��ӡ���ַ��ĸ���������printf("%d", 43)�ķ���ֵΪ2
//	//printf("%d", printf("%d", 43))=printf("%d", 2)
//	//��ʱ�ڴ�ӡһ��2����Ļ�ϴ�ӡ��: 432
//	//��printf("%d", printf("%d", 43))�ķ���ֵΪ1
//	//�������һ��printf("%d", printf("%d", printf("%d", 43)))=printf("%d",1)
//	//�������յĽ��Ϊ4321��
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	//1
//	len=strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//void add(int* p)
//{
//	(*p)++;//һ��Ҫ��*p����������Ϊ++�����ȼ�����*p
//
//}
//
//int main()
//{
//	int m = 0;
//	add(&m);
//	printf("m=%d\n", m);
//	add(&m);
//	printf("m=%d\n", m);
//	add(&m);
//	printf("m=%d\n", m);
//	return 0;
//}

//int plus(int x)
//{
//	x = x + 1;
//	return x;
//
//}
//
//int main()
//{
//	int num = 1;
//	num = plus(num);
//	printf("%d", num);
//	num = plus(num);
//	printf("%d", num);
//	num = plus(num);
//	printf("%d", num);
//	return 0;
//}
////                ������arr��һ��ָ��
//int binary_search(int arr[],int k,int sz)
//{
//	//�㷨����ʽʵ��
//	int left = 0;
//	
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//			return mid;
//		}
//	}
//	
//		return -1;
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1��
//	int k, i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	k = 17;
//	//                      ��ʱ���ݹ�ȥ����arr��Ϊ��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ:%d\n", ret);
//	}
//
//	return 0;
//}