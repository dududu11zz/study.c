#include<stdio.h>
#include<math.h>
//�������

int main()
{
	int i = 0;
	int sum = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1.�Գ��� 
		//����2->i-1������
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)// i=a*b  a��b��������һ������<=��ƽ��i
			                         //sqrt() --��ƽ������ѧ�⺯��
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >sqrt(i))
		{
			sum++;
			printf("%d ", i);
		}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}


//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nsum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int year;
//	int sum = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
		//�ж�year�Ƿ�Ϊ����
		//1.�ܱ�4�������Ҳ��ܱ�100����ʱ����
		//2.�ܱ�400����������
		/*if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			sum++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			sum++;
		}*/

		/*if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			sum++;
		}*/

	/*}
	printf("\nsum=%d\n", sum);
	return 0;
}*/

// ������������nb�Ķ���������
//�������������Լ��--շת�����
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)//��m%n=0ʱ����ʱΪ���١���ֱ������ѭ�������Լ����Ϊn
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}