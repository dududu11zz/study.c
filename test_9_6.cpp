#include<stdio.h>

int main()
{
	//int ch = 0;
	////ctrl+z,����������һ��EOF����ʱѭ���ͻ����
	////EOF--end of file --> ����Ϊ-1
	//while ((ch = getchar()) != EOF)//gethar��Ϊ����һ���ַ�����������ַ����ڡ�ch����
	//{
	//	putchar(ch);//�������ַ�
	//}
	//return 0;
	int ret = 0;
	char ch[20] = { 0 };
	printf("����������:");
	scanf_s("%s", ch);
	printf("��ȷ�ϣ�Y/N):");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	return 0;

}



//int main()
//{
//	char ch =getchar();//����һ���ַ�
//	putchar(ch);//���һ���ַ�
//	printf("%c\n", ch);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//��ֹѭ���б���ѭ��continue����Ĵ��룬ֱ����ת��while����е��жϲ���
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
//			break;//break��ʾ�����ơ��������õĽ���
//		i++;
//	}
//	return 0;
//}