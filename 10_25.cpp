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
//	//i = a++ && b++ && d++;// && 左边若为假， 则右边不进行运算
//	i = a++ || ++b || d++;// || 左边如果为真，则右边不进行运算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//#include<stdio.h>
//
//void sz1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//传递的是指针
//}
//
//void sz2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//传递的是指针
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
//	//// ~  按（二进制）位取反
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111--补码
//	////11111111111111111111111111111110--反码
//	////10000000000000000000000000000001--原码
//	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	//结果以s说了算，为short。
//	//sizeof()里的表达式不参与运算
//	printf("%d\n", s);
//	return 0;
//}