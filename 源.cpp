#include<stdio.h>
#include<stdlib.h>//srand,rand函数的头文件
#include<time.h>//time函数的头文件
//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

void menu()
{
	printf("*****  超有趣的猜数字游戏噢  ********\n");
	printf("*****请选择：1=play   2=exit ***********\n");
	printf("****************************************\n");
}

void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;//接收猜的数字
	
	 ret=rand()%100+1;//rand函数就是用来生成随机数 范围为0-->32767之间
	                  //任何数模100都是0——>99在加1变成1——>100
	                  //所以此时生成的数变成了1到100
	/*printf("%d\n", ret);*/
	//2.猜数字
	 while (1)
	 {
		 printf("请猜数字:>");
		 scanf_s("%d", &guess);
		 if (guess > ret)
		 {
			 printf("猜大了\n");
		 }
		 else if (guess < ret)
		 {
			 printf("猜小了\n");
		 }
		 else
		 {
			 printf("恭喜你，猜对啦！！\n");
			 break;
		 }
	 }

}
int main()
{
	//时间戳：当前计算机的时间减去计算机的起始时间（1970.1.1.0：0：0）=（xxx）秒
	//拿时间戳来设置随机数的生成起点
	//用time函数来获取计算机的时间，他的返回值为time_t（本质为长整形）
	srand((unsigned int)time(NULL));//NULL表示空指针
	//srand函数用来为rand函数提供一个起始随机值，在（）内需要提供整型
   //并且这个整型最好可变，否则rand提供的随机值会保持不变
	//把srand函数放到主函数里才更加随机
	int input = 0;
	do
	{
		menu();
		printf("请选择>：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
				game();//猜数字游戏
				break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);//当input为0时即为假，则会推出循环，此时恰好选择的是“退出游戏”
	                //当input不为0时即为真，则会继续判断，为1则开始游戏，不为1则为“选择错误”
	                //此时又会重新判断
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
//			printf("找到了，k的下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (min > max)
//		printf("找不到");
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%2d表示填充两格，且为向左填充空格
//			                                  //%-2d也表示填充两格，切为向右填充空格  
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求十个整数的最大值
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

//分数求和

//对下面代码的改进

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
//		sum1 = sum1 + 1.0 / a;	//因为会出现浮点数，而a为整型，要让1写成1.0才会出现小数
//	}
//	for (b = 2; b <= 100; b += 2)
//	{
//		sum2 = sum2 - 1.0 / b;
//	}
//	sum = sum1 + sum2;
//	printf("%lf\n", sum);//要用lf来表示浮点数sum
//	return 0;
//}

//编写程序数一下1到100的所有整数中出现多少个数字9

//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )//此程序用来判断一共出现了多少个9
//		{
//			sum++;
//		}
//		if (i / 10 == 9)
//			sum++;
//
//	}
//	printf("总数有：%d个\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, sum=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)//此程序只能判断有多少个数带9，不能计算有多少个9
//		{
//			sum++;
//		}
//
//	}
//	printf("总数有：%d个\n",sum);
//	return 0;
//}

//对break 和 continue的理解 以及循环的理解
//int main()
//{
//	int a, b;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;//直接跳出for循环
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;//continue执行直接回到for循环
//		}
//		b = b - 5;//此语句其实永远不会执行
//	}
//	printf("%d\n", a);
//	return 0;
//}