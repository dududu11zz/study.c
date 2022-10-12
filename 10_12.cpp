#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int d1, d2, d3;
    int n;
    int sum;
    sum = 0;
    for (
        n = 100, d3 = n % 10; n <= 999; n++
        ) {
        for (
            n = n / 10, d2 = n % 10; d2 <= 9;
            ) {
            for (
                n / 10, d1 = n % 10; d1 <= 9;
                ) {
                n = d1 * 100 + d2 * 10 + d3;
                if (
                    (d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3) == n
                    ) {
                    sum += n;
                }
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}



//#include<stdio.h>
//
//int main()
//{
//	int x;
//	x = -1;
//		do {
//			x = x * x;
//		} while (!x);
//				return 0;
//}


//int main(void)
//{
//    int n, k;
//    float score, sum, ave;
//    sum = 0.0;
//    for (n = 1; n <= 10; n++)
//    {
//        for (k = 1; k <= 4; k++)
//        {
//            scanf("%f", &score);
//            sum += score;
//        }
//        ave = sum / 4.0;
//        printf("NO%d:%f\n", n, ave);
//    }
//    return 0;
//}
