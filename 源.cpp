#include<stdio.h>
#include<string.h>
//�ṹ��
//����һЩ���Ӷ���--�ṹ��������--�Լ����������һ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ�����ͣ�����һ�������͵Ľṹ�����
	struct Book b1 = { "c���Գ������",55 };
	struct Book* pb = &b1;
	//����pb ��ӡ�������ͼ۸�
	// .  �ṹ���������Ա
	// -> �ṹ��ָ��->��Ա
	printf("%d\n", pb->price);
	printf("%s\n",(*pb).name);

	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;


	strcpy_s(b1.name,"C++");//strcpy---string copy--�ַ�������--�⺯��--Ҫ��ͷ�ļ�string.h
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	printf("�޸ĺ��������%s\n", b1.name);
	return 0;
}


//int main()
//{
//	int a = 0;
//	int* b = &a;//b��һ��ָ�����
//	int c;
//	c = *b;
//	printf("%p\n", b);
//	printf("%d\n", c);
//	return 0;
//}