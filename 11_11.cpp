#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//struct complex {
//    int real;
//    int imag;
//};
//
//struct complex multiply(struct complex x, struct complex y);
//
//int main()
//{
//    struct complex product, x, y;
//
//    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
//    product = multiply(x, y);
//    printf("(%d+%di) * (%d+%di) = %d + %di\n",
//        x.real, x.imag, y.real, y.imag, product.real, product.imag);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//struct complex multiply(struct complex x, struct complex y)
//{
//    struct complex z;
//    z.real = x.real * y.real - x.imag * y.imag;
//    z.imag = x.real * y.imag + x.imag * y.real;
//    return z;
//}

//#include <stdio.h>
//#include <string.h>
//#define  N  8
//struct student
//{
//	char  num[10];
//	int  year, month, day;
//};
//struct student fun(struct student* std, char* num);
//	int main()
//{
//	struct student  std[N] = { {"111111",1984,2,15},{"222222",1983,9,21},{"333333",1984,9,1},{"444444",1983,7,15},{"555555",1984,9,28},{"666666",1983,11,15},{"777777",1983,6,22},{"888888",1984,8,19} };
//	struct student  p;
//	char  n[10] = "666666";
//	p = fun(std, n);
//	if (p.num[0] == 0)
//		printf("Not found !\n");
//	else
//	{
//		printf("Succeed !\n  ");
//		printf("%s   %d-%d-%d\n", p.num, p.year, p.month, p.day);
//	}
//	return 0;
//}
//
///* 请在这里填写答案 */
//struct student fun(struct student* std, char* num)
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (strcmp(std[i].num, num) == 0)
//			return std[i];
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct {
//    int presentation;
//    int logical;
//    int humanistic;
//    int scientific;
//    int computational;
//}Applicant;
//double getAverage(Applicant* a);
//int main()
//{
//    Applicant a;
//    double overall;
//    scanf("%d%d%d%d%d", &a.presentation, &a.logical, &a.humanistic, &a.scientific, &a.computational);
//    overall = getAverage(&a);
//    printf("%.2f\n", overall);
//    return 0;
//}
//
///* 您提交的代码将放置在这里 */
//double getAverage(Applicant* a)
//{  
//    double b = (a->presentation * 0.4 + a->logical * 0.5 + a->humanistic * 0.3 + a->scientific * 0.6 + a->computational*0.8);
//    return b;
//}

//#include <stdio.h>
//struct student
//{
//    int num;
//    char name[15];
//    float score[3];
//    float sum;
//};
//void calc(struct student* p, int n);
//void sort(struct student* p, int n);
//int main()
//{
//    struct student stu[5];
//    int i, j;
//    float f;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d%s", &stu[i].num, stu[i].name);
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%f", &f);
//            stu[i].score[j] = f;
//        }
//    }
//    calc(stu, 5);
//    sort(stu, 5);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%5d%15s", stu[i].num, stu[i].name);
//        printf("  %.1f  %.1f  %.1f  %.1f\n", stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].sum);
//    }
//    return 0;
//}
//
//    /* 请在这里填写答案 */
//void calc(struct student* p, int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        p->sum = p->score[0] + p->score[1] + p->score[2];
//        p++;
//    }
//}
//
//void sort(struct student* p, int n)
//{
//    int i = 0;
//    int min=0;
//    struct student z;
//    int j = 0;
//    for (i = 0; i < n-1; i++)
//    {
//        for (j = 0; j < n - j - 1; j++)
//        {
//            if (p[j].sum < p[j + 1].sum)
//            {
//                z = p[j];
//                p[j] = p[j + 1];
//                p[j + 1] = z;
//            }
//
//        }
//    }
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define NAME_LEN 100
//#define SEX_LEN 6
//typedef struct {
//    int id;//身份证号码
//    char lastname[NAME_LEN + 1];//姓
//    char firstname[NAME_LEN + 1];//名
//    char sex[SEX_LEN];//性别
//    double ability;
//} TeamMember;
//
//void showCaptain(TeamMember team[], int n);
//int main()
//{
//    TeamMember* team;
//    int n;
//    int i;
//
//    scanf("%d", &n);
//    team = (TeamMember*)malloc(n * sizeof(TeamMember));
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %s %s %s %lf", &team[i].id, team[i].lastname, team[i].firstname, team[i].sex, &team[i].ability);
//    }
//
//    showCaptain(team, n);
//
//    return 0;
//}
//
///* 您提交的代码将放置在这里 */
//void showCaptain(TeamMember team[], int n)
//{
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (team[i].ability > team[max].ability)
//        {
//            max = i;
//        }
//    }
//    printf("%d %s %s %s %.2lf", team[max].id, team[max].lastname, team[max].firstname, team[max].sex, team[max].ability);
//}

//#include <stdio.h>
//#define MAXN 10
//
//struct student {
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//
//int set_grade(struct student* p, int n);
//
//int main()
//{
//    struct student stu[MAXN], * ptr;
//    int n, i, count;
//
//    ptr = stu;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }
//    count = set_grade(ptr, n);
//    printf("The count for failed (<60): %d\n", count);
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int set_grade(struct student* p, int n)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (p[i].score >= 85)
//            p[i].grade = 'A';
//        else if (p[i].score >= 70)
//            p[i].grade = 'B';
//        else if (p[i].score >= 60)
//            p[i].grade = 'C';
//        else
//        {
//            p[i].grade = 'D';
//            count++;
//        }
//    }
//    return count;
//}


#include <stdio.h>
struct Student {
    int sid;
    int C;
    int English;
};
int compareScore(const struct Student* s1, const struct Student* s2);
int main() {
    struct Student zs, ls;
    scanf("%d%d%d", &zs.sid, &zs.C, &zs.English);
    scanf("%d%d%d", &ls.sid, &ls.C, &ls.English);
    int r;
    r = compareScore(&zs, &ls);
    if (r < 0) printf("Less\n");
    else if (r > 0) printf("Greater\n");
    else printf("Equal\n");
    return 0;
}
/* 你所编写的函数代码将被嵌在这里 */
int compareScore(const struct Student* s1, const struct Student* s2)
{
    if ((s1->C + s1->English) > (s2->C + s2->English))
        return 1;
    else if ((s1->C + s1->English) < (s2->C + s2->English))
        return -1;
    else
    {
        if (s1->C > s2->C)
            return 1;
        else if (s1->C < s2->C)
            return -1;
        else
            return 0;
    }

}
