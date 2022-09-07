#include<stdio.h>
//1、
//int main()
//{
//	printf("zheng yunhai\n");
//
//	printf("zheng\nyunhai\n");
//
//	printf("zheng");
//	printf("yunhai\n");
//	return 0;
//}

//2、
//int main()
//{
//	printf("郑云海，福建省铜盘校区");
//	return 0;
//}


//3、
//int main()
//{
//	int a = 18;
//	int b = a * 365;
//	printf("年龄：%d 天数： %d\n", a, b);
//	return 0;
//}

//4、
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//
//void dent(void)
//{
//	printf("Which nobody can dent!\n");
//
//}
//
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	dent();
//	return 0;
//}

//5、*
//int br(void)
//{
//	printf("Brazil,Russia");
//	return 0;
//}
//int ic(void)
//{
//	printf("India,China\n");
//	return 0;
//}
//int main()
//{
//	br(); printf(", ");
//	ic();
//	ic(); br();
//
//	return 0;
//}

//6、
//int main()
//{
//	int tose = 10;
//	int tose2 = tose * tose;
//	int tose3 =2*tose;
//	printf("tose:%d tose的平方：%d tose的两倍：%d",tose, tose2, tose3);
//
//	return 0;
//}

//7、
//void a(void)
//{
//	printf("smile!");
//	
//}
//int main()
//{
//	a(); a(); a();
//	printf("\n");
//	a(); a();
//	printf("\n");
//	a();
//	return 0;
//}

//8、
int two()
{
	printf("two\n");
	return 0;
}
int one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");


	return 0;
}
