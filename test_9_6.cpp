#include<stdio.h>

int main()
{
	//int ch = 0;
	////ctrl+z,等于输入了一个EOF，此时循环就会结束
	////EOF--end of file --> 本质为-1
	//while ((ch = getchar()) != EOF)//gethar意为接收一个字符，并把这个字符放在“ch”里
	//{
	//	putchar(ch);//输出这个字符
	//}
	//return 0;
	int ret = 0;
	char ch[20] = { 0 };
	printf("请输入秘码:");
	scanf_s("%s", ch);
	printf("请确认（Y/N):");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");
	return 0;

}



//int main()
//{
//	char ch =getchar();//输入一个字符
//	putchar(ch);//输出一个字符
//	printf("%c\n", ch);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//终止循环中本次循环continue后面的代码，直接跳转到while语句中的判断部分
//		printf("%d ",i);
//		
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		
//		printf("%d ",i);
//		if (5 == i)
//			break;//break表示“打破”，即永久的结束
//		i++;
//	}
//	return 0;
//}