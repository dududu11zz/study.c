#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//дһ���������ж�һ�����ǲ�������

int sus(int x)
{
	int i;
	
	for (i = 2; i < x; i++)
	{
		if (x / i == 0)
		{
			printf("�������������");
			break;
		}
	}
	if (i == x)
		printf("%d������", x);
	
	return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	sus(a);
	

	return 0;
}
//дһ�������������������ͱ���������

//int main()
//{
//	int a = 10;
//	int* pa=&a;//paָ�����
//	*pa=20;//�����ò���
//	printf("%d", a);
//	return 0;
//}
// ��ʵ�δ����βε�ʱ��
// �β���ʵ��ʵ�ε�һ�ݿ���
// ���βε��޸��ǲ���ı�ʵ�ε�
//void Swap1(int x, int y)//�����������
//{
//	int tmp;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void swap2(int* pa, int* pb)  //�����������
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp;
//	printf("a=%d b=%d\n", a, b);
//	//����swap2����
//	swap2(&a, &b);
//	/*Swap(a, b);*/
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
/*int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}


int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c = max(a, b);
	printf("max= %d\n", c);
	return 0;
}*/

//memset--memory set --�ڴ�����
/*int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//��һ��������ʾҪ���ĵĵ�ַ���ڶ���������ʾҪ���ı�ɵ�ֵ
	                    //������������ʾҪ����ͷ5���ֽڵ�ֵΪ�ڶ�������
	printf("%s\n", arr);

	return 0;
}*/
/*int main()
{
	char arr1[] = "fzu";
	char arr2[] = "######";
	strcpy(arr2, arr1);//ǰһ����ַ��ʾָ��ĵص㣬��һ����ַ��ʾԴͷ
	printf("%s\n", arr2);//���ص�ʱ�򻹻����һ��\0;\0���ַ��������ı�־
	//strcpy---string copy---�ַ�������
	//strlen---string length--���ַ�������
	return 0;
}*/

//int add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}