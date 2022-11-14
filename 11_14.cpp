#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* readlist();
//struct ListNode* deletem(struct ListNode* L, int m);
//void printlist(struct ListNode* L)
//{
//    struct ListNode* p = L;
//    while (p) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int m;
//    struct ListNode* L = readlist();
//    scanf("%d", &m);
//    L = deletem(L, m);
//    printlist(L);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//struct ListNode* readlist()
//{
//    struct ListNode* head;
//    struct ListNode* p1, * p2;
//    int n = 0;
//    p1 = p2 = NULL;
//    scanf("%d", &p1->data);
//    head = NULL;
//    while (p1->data != -1)
//    {
//        n = n + 1;
//        if (n == 1)
//            head = p1;
//        else
//            p2->next = p1;
//        p2 = p1;
//        scanf("%d", &p1->data);
//    }
//    return head;
//
//}
//
//struct ListNode* deletem(struct ListNode* L, int m)
//{
//    if (L->next->data == m)
//    {
//        L->next = L->next->next;
//    }
//    return L;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i;
//	int flag = 0;
//	scanf("%d", &i);
//	while (i != -1)
//	{
//		if (i % 2 != 0 && flag == 0)
//		{
//			printf("%d", i);
//			flag = 1;
//		}
//		else if (i % 2 != 0 && flag == 1)
//		{
//			printf(" %d", i);
//		}
//		scanf("%d", i);
//	}
//	
//		
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct stu stu[101];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &stu[i].name);
//		scanf("%d", &stu[i].age);
//	}
//	int m;
//	int flag = 0;
//	scanf("%d", &m);
//	for (i = 0; i < n; i++)
//	{
//		if (stu[i].age != m && flag == 0)
//		{
//			printf("%s", stu[i].name);
//			flag = 1;
//		}
//		else if (stu[i].age != m&&flag==1)
//			printf(" %s", stu[i].name);
//	}
//}

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1002];
	int arr2[1002];
	int i = 0,m;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		m = arr[i];
		arr2[i] = m;
	}
	
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				m = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = m;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr2[i] == arr[j])
			{
				printf("%d", j + 1);
				break;
			}
		}
		for (j = 0; j < n; j++)
		{
			if (i == 0)
			{
				printf(" 0");
				break;
			}
			else if (i != 0 && arr2[i - 1] == arr[j])
			{
				printf(" %d", j + 1);
				break;
			}
		}
		for (j = 0; j < n; j++)
		{
			if (i == n - 1)
			{
				printf(" 0");
				break;
			}
			else if (i != n-1 && arr2[i + 1] == arr[j])
			{
				printf(" %d", j + 1);
				break;
			}
		}
		printf("\n");
	}
	return 0;
}


