#include<stdio.h>
#include<stdlib.h>//srand,rand������ͷ�ļ�
#include<time.h>//time������ͷ�ļ�
//��������Ϸ
//1.���Ի�����һ�������
//2.������

void menu()
{
	printf("*****  ����Ȥ�Ĳ�������Ϸ��  ********\n");
	printf("*****��ѡ��1=play   2=exit ***********\n");
	printf("****************************************\n");
}

void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;//���ղµ�����
	
	 ret=rand()%100+1;//rand��������������������� ��ΧΪ0-->32767֮��
	                  //�κ���ģ100����0����>99�ڼ�1���1����>100
	                  //���Դ�ʱ���ɵ��������1��100
	/*printf("%d\n", ret);*/
	//2.������
	 while (1)
	 {
		 printf("�������:>");
		 scanf_s("%d", &guess);
		 if (guess > ret)
		 {
			 printf("�´���\n");
		 }
		 else if (guess < ret)
		 {
			 printf("��С��\n");
		 }
		 else
		 {
			 printf("��ϲ�㣬�¶�������\n");
			 break;
		 }
	 }

}
int main()
{
	//ʱ�������ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.1.1.0��0��0��=��xxx����
	//��ʱ�����������������������
	//��time��������ȡ�������ʱ�䣬���ķ���ֵΪtime_t������Ϊ�����Σ�
	srand((unsigned int)time(NULL));//NULL��ʾ��ָ��
	//srand��������Ϊrand�����ṩһ����ʼ���ֵ���ڣ�������Ҫ�ṩ����
   //�������������ÿɱ䣬����rand�ṩ�����ֵ�ᱣ�ֲ���
	//��srand�����ŵ���������Ÿ������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
				game();//��������Ϸ
				break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);//��inputΪ0ʱ��Ϊ�٣�����Ƴ�ѭ������ʱǡ��ѡ����ǡ��˳���Ϸ��
	                //��input��Ϊ0ʱ��Ϊ�棬�������жϣ�Ϊ1��ʼ��Ϸ����Ϊ1��Ϊ��ѡ�����
	                //��ʱ�ֻ������ж�
	return 0;
}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(1);
//	int max = sz-1;
//	int min = 0;
//	int mid = 0;
//	while(min<=max)
//	{
//		int mid = (min + max) / 2;
//
//		if (k < arr[mid])
//		{
//			max = mid - 1;
//			
//		}
//		if (k > arr[mid])
//		{
//			min = mid + 1;
//			
//		}
//		if (k ==arr[mid])
//		{
//			printf("�ҵ��ˣ�k���±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (min > max)
//		printf("�Ҳ���");
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%2d��ʾ���������Ϊ�������ո�
//			                                  //%-2dҲ��ʾ���������Ϊ�������ո�  
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ʮ�����������ֵ
//int main()
//{
//	int arr[10] = {1,2,5,7,4,10,5,46,2,9};
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(1);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//
//
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//�������

//���������ĸĽ�

//int main()
//{
//	int a = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum += flag * 1.0 / a;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	double sum, sum1 = 0.0, sum2 = 0.0;
//	for (a = 1; a < 101; a += 2)
//	{
//		sum1 = sum1 + 1.0 / a;	//��Ϊ����ָ���������aΪ���ͣ�Ҫ��1д��1.0�Ż����С��
//	}
//	for (b = 2; b <= 100; b += 2)
//	{
//		sum2 = sum2 - 1.0 / b;
//	}
//	sum = sum1 + sum2;
//	printf("%lf\n", sum);//Ҫ��lf����ʾ������sum
//	return 0;
//}

//��д������һ��1��100�����������г��ֶ��ٸ�����9

//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )//�˳��������ж�һ�������˶��ٸ�9
//		{
//			sum++;
//		}
//		if (i / 10 == 9)
//			sum++;
//
//	}
//	printf("�����У�%d��\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, sum=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)//�˳���ֻ���ж��ж��ٸ�����9�����ܼ����ж��ٸ�9
//		{
//			sum++;
//		}
//
//	}
//	printf("�����У�%d��\n",sum);
//	return 0;
//}

//��break �� continue����� �Լ�ѭ�������
//int main()
//{
//	int a, b;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;//ֱ������forѭ��
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;//continueִ��ֱ�ӻص�forѭ��
//		}
//		b = b - 5;//�������ʵ��Զ����ִ��
//	}
//	printf("%d\n", a);
//	return 0;
//}