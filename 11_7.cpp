#define  _CRT_SECURE_NO_WARNINGS 1

//struct stu
//{
//	long long num;
//	int a;
//	int b;
//};
//
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct stu stu[1001];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lld", &stu[i].num);
//		scanf("%d", &stu[i].a);
//		scanf("%d", &stu[i].b);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	int j = 0;
//	int m = 0;
//	for (i = 0; i < k; i++)
//	{
//		scanf("%d", &j);
//		for (m = 0; m < n; m++)
//		{
//			if (stu[m].a == j)
//			{
//				printf("%lld %d\n", stu[m].num, stu[m].b);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//struct stu
//{
//	int sex;
//	char name[10];
//};
//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	struct stu stu[50];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &stu[i].sex);
//		scanf("%s", &stu[i].name);
//	}
//	for (i = 1; i <= n / 2; i++)
//	{
//		for (j = n - 1; j > 0; j--)
//		{
//			if (stu[i - 1].sex != stu[j].sex && stu[j].sex != 2)
//			{
//				printf("%s %s\n", stu[i - 1].name, stu[j].name);
//				stu[j].sex = 2;
//				break;
//			}
//		}
//	}
//	return 0;
//}





struct p
{
	char name[12];
	char date[11];
	char sex[2];
	char tel[17];
	char phone[17];
};

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	struct p fri[11];
	for (i = 0; i < n; i++)
	{
		scanf("%s", &fri[i].name);
		scanf("%s", &fri[i].date);
		scanf("%s", &fri[i].sex);
		scanf("%s", &fri[i].tel);
		scanf("%s", &fri[i].phone);
	}
	int k = 0;
	int m;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &m);
		if (m >= 0 && m < n)
		{
			printf("%s %s %s %s %s\n", fri[m].name, fri[m].tel, fri[m].phone, fri[m].sex, fri[i].date);
		}
		else
			printf("Not Found\n");
	}
	return 0;
}


//struct stu
//{
//	int numble;
//	char name[20];
//	int score1;
//	int score2;
//	int score3;
//	int total;
//
//};
//
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	struct stu stu[11];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &stu[i].numble);
//		scanf("%s", &stu[i].name);
//		scanf("%d", &stu[i].score1);
//		scanf("%d", &stu[i].score2);
//		scanf("%d", &stu[i].score3);
//	}
//	for (i = 0; i < n; i++)
//	{
//		stu[i].total = stu[i].score1 + stu[i].score2 + stu[i].score3;
//	}
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (stu[max].total  < stu[i].total )
//		{
//			max = i;
//		}
//	}
//	printf("%s %05d %d", stu[max].name, stu[max].numble, stu[max].total);
//	return 0;
//}



//struct stu
//{
//	int numble;
//	char name[20];
//	int score;
//	
//};
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct stu stu[11];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &stu[i].numble);
//		scanf("%s", &stu[i].name);
//		scanf("%d", &stu[i].score);
//	}
//	double sum = 0;
//	double averge = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += stu[i].score;
//	}
//	averge = 1.0 * sum / n;
//	printf("%.2lf\n", averge);
//	for (i = 0; i < n; i++)
//	{
//		if (stu[i].score < averge)
//		{
//			printf("%s %05d\n", stu[i].name, stu[i].numble);
//		}
//	}
//	return 0;
//}



//struct p
//{
//	char name[20];
//	double s;
//	double f;
//	double z;
//};
//
//#include<stdio.h>
//
//int main()
//{
//	int n=0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		struct p a;
//		scanf("%s", &a.name);
//		scanf("%lf%lf%lf", &a.s, &a.f, &a.z);
//		printf("%s %lf\n", a.name, (a.s + a.f - a.z));
//	}
//	return 0;
//}