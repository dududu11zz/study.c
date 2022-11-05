#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int frequency(char* paragraph, char* from, char* to);
//int main()
//{
//    int N;
//    char* s;
//    int from, to;
//    int freq;
//    scanf("%d\n", &N);
//    s = (char*)malloc((N + 1) * sizeof(char));
//    scanf("%s", &s);
//    scanf("%d %d", &from, &to);
//
//    freq = frequency(s, s + from - 1, s + to - 1);
//
//    printf("%d\n", freq);
//    return 0;
//}
/*char s[1000] ="";
    int i = 0;
    char m[1000] = "";
    for (i = 0; i < (to - from); i++)
    {
        s[i] = *from;
        from++;
    }
    int j = 0;
    int count = 0;
    int sum = 0;
    while (paragraph[j] != '\0')
    {
        count++;
        j++;
    }
    j = 0;
    for (i = 0; i < count; i++)
    {
        int d = 0;
        for (j = i; j < (to - from)+i; j++)
        {
            m[d] = (paragraph[i]);
            d++;
        }
        if (strcmp(m, s) == 0)
        {
            sum++;
        }
    }*/
/* 您提交的代码将放置在这里 */
//int frequency(char* paragraph, char* from, char* to)
//{
//    
//    int x = 0;
//    int i = 0;
//    for (i = 0; paragraph[i] != '\0'; i++)
//    {
//        if (paragraph[i] == *from)
//        {
//            int j = 0;
//            int flag = 1;
//            for (j = 0; j < (to - from + 1); j++)
//            {
//                if (paragraph[i + j] != from[j])
//                {
//                    flag = 0;
//                    break;
//                }
//                if (flag == 1)
//                    x++;
//            }
//        }
//        return x;
//    }
//
//
//    
//}

#include <stdio.h>
#include <string.h>
void fsort(char* color[], int n);

int main(void)
{
    int i;
    char* pcolor[] = { "red", "blue", "yellow", "green", "black" };
    void fsort(char* color[], int n);

    fsort(pcolor, 5);   /* 调用函数 */
    for (i = 0; i < 5; i++)
        printf("%s ", pcolor[i]);
    printf("\n");
    return 0;
}


/* 请在这里填写答案 */
void fsort(char* color[], int n)
{
    int i = 0;
    int min = 0;
    int j = 0;
    char* t;
    for (j = 0; j < n - 1; j++)
    {
        min = j;
        for (i = j+1; i < n ; i++)
        {
            if (strcmp(color[min], color[i]) > 0)
            {
                min = j;
            }
            if(min!=j)
            {

                t = color[j];
                color[j] = color[min];
                color[min] = t;
            }

        }
    }
}
//void fsort(char* color[], int n)
//{
//    int i = 0;
//    int min= 0;
//    int j = 0;
//    char t[100];
//    for (j = 0; j < n-1; j++)
//    {
//       
//        for (i = j; i < n-j-1; i++)
//        {
//            if (strcmp(color[min], color[i]) > 0)
//            {
//
//                strcpy(t, color[min]);
//                strcpy(color[min], color[i]);
//                strcpy(color[i], t);
//            }
//        }      
//            
//    }
//}

