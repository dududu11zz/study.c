#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int x=2;
    while (x--);
    printf("%d\n",x);
    return 0;
}



//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && b++ && d++;// && �����Ϊ�٣� ���ұ߲���������
//	i = a++ || ++b || d++;// || ������Ϊ�棬���ұ߲���������
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//#include<stdio.h>
//
//void sz1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//���ݵ���ָ��
//}
//
//void sz2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//���ݵ���ָ��
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	sz1(arr);
//	sz2(ch);
//
//}


//#include<stdio.h>
//
//int main()
//{
//
//	int a = 11;
//
//	//int a = 0;
//	//// ~  ���������ƣ�λȡ��
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111--����
//	////11111111111111111111111111111110--����
//	////10000000000000000000000000000001--ԭ��
//	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	//�����s˵���㣬Ϊshort��
//	//sizeof()��ı��ʽ����������
//	printf("%d\n", s);
//	return 0;
//}