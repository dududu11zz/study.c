#include<stdio.h>

int main()//该段代码体现了对switch语句的理解
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:n++;
		case 2:m++; n++; break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("m= %d,n= %d\n", m, n);
	return 0;
}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", & day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//在最后一行也加上break，养成好的编程习惯，方便后续的进一步操作。
//	default://处理非法的逻辑，default并没有顺序之分
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//括号里的必须是整型类型
//	{
//	case 1://case后面一定得跟整型常量表达式
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//
//
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf_s("%d", day);
//	if(1==day)
//		printf("星期1\n");
//	else if(2==day)
//		printf("星期2\n");
//	else if(3==day)
//		printf("星期3\n");
//	else if (4 == day)
//		printf("星期4\n");
//	else if (5 == day)
//		printf("星期5\n");
//	else if (6 == day)
//		printf("星期6\n");
//	else if (7 == day)
//		printf("星期天\n");
//
//	return 0;
//}







//int main()
//{
//	int i=1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//		/*if (i % 2 == 1)
//			printf("%d ",i);
//		i++;*/
//
//	}
//
//	return 0;
//}



//int main()
//{
//	int a;
//	int b;
//	a >= 1 && a <= 100;
//	b = a % 2;
//	if (b == 1)
//		printf("奇数： %d\n", a);
//
//
//	return 0;
//}



////代码一
//if (condition) {
//
//	return x;
//}
//return y;
////此代码意为：如果条件（condition）成立，则返回x，否则返回y
//
////代码二
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//
//}
//
////此代码与代码一相似
//
////代码三
//int main()
//{
//	int num = 1;
//	if(5=num)//此时，无论是一个等号还是两个等号都不会出现bug
//		    //所以，当出现一个变量和一个常量相比较时，把常量写在左边，会是更优解
//	//if (num = 2)//=赋值 ==判断相等
//	//{
//	//	printf("hehe\n");
//	//}
//}





//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("呵呵\n");
//		else//悬空else,就近原则
//			//else只跟离他最近的未匹配的if匹配0
//			printf("哈哈\n");
//	}
//	return 0;
//}