#include<stdio.h>

int main()//�öδ��������˶�switch�������
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//�����һ��Ҳ����break�����ɺõı��ϰ�ߣ���������Ľ�һ��������
//	default://����Ƿ����߼���default��û��˳��֮��
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//������ı�������������
//	{
//	case 1://case����һ���ø����ͳ������ʽ
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("����1\n");
//	else if(2==day)
//		printf("����2\n");
//	else if(3==day)
//		printf("����3\n");
//	else if (4 == day)
//		printf("����4\n");
//	else if (5 == day)
//		printf("����5\n");
//	else if (6 == day)
//		printf("����6\n");
//	else if (7 == day)
//		printf("������\n");
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
//		printf("������ %d\n", a);
//
//
//	return 0;
//}



////����һ
//if (condition) {
//
//	return x;
//}
//return y;
////�˴�����Ϊ�����������condition���������򷵻�x�����򷵻�y
//
////�����
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
////�˴��������һ����
//
////������
//int main()
//{
//	int num = 1;
//	if(5=num)//��ʱ��������һ���ȺŻ��������ȺŶ��������bug
//		    //���ԣ�������һ��������һ��������Ƚ�ʱ���ѳ���д����ߣ����Ǹ��Ž�
//	//if (num = 2)//=��ֵ ==�ж����
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
//			printf("�Ǻ�\n");
//		else//����else,�ͽ�ԭ��
//			//elseֻ�����������δƥ���ifƥ��0
//			printf("����\n");
//	}
//	return 0;
//}