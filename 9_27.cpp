#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//����

int fib(int x)
{



}

int main()
{
	int n, ret;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret=%d\n", ret);

	return 0;
}


//쳲���������
//1 1 2 3 5 8 13 21 34 55....

//���n��쳲�������

//int fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);//��ʱ�ļ���������
//
//}
//
//int main()
//{
//	int n,ret;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("n=%d\n", ret);
//	return 0;
//}




//��n�Ľ׳�


//�׳˵�ʵ��
//int fac2(int x)
//{
//	if (x <= 1)
//		return 1;
//	 else 
//		return x * fac2(x - 1);
//}
//
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	m = fac2(n);
//	printf("%d\n", m);
//
//}
//������ʵ��

//int facl(int x)
//{
//	int i,y=1;
//	for (i = 1; i <= x; i++)
//	{
//		y = y * i;
//		
//	}
//	return y;
//}
//
//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	m = facl(n);
//	printf("%d\n", m);
//
//}


// ѭ������ʵ��

//int main()
//{
//	int i = 1, sum = 1,n;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		sum = sum * i;
//		i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//��дһ������������������һ����ʱ���� �����ַ�������

//int mystrlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + mystrlen(str + 1);
//	}
//	else
//		return 0;
//}
//�Ѵ��»�С

//int mystrlen(char* str)//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//{
//	int sum=0;
//	while (*str != '\0')
//	{
//		sum++;
//		str++;//�˾���Ϊ��ַ��1��������һ������
//	}
//	return sum;
//}
//int main()
//{
//	char arr[] = "fzu";
//	//ģ��ʵ����һ��strlen����
//	int len = mystrlen(arr);//�Լ�����һ���������ܹ�����ַ�������
//	printf("len = %d\n", len);
//
//	return 0;
//}


//����һ������ ��1234 ���1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//
//	return 0;
//}