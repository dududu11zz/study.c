


#include <stdio.h> //stdio----std=stdand i=input o=output ����׼���������

int main()   //int--����
{
	char study = 'A'; //char--�ַ�����  study--һ�����ƣ�������ı�
	printf("%c\n", study); //%c--��ӡ�ַ���ʽ������
	
	//%d-��ӡ����
	//%c-��ӡ�ַ�
	//%f-��ӡ������-��С��
	//%p-�Ե�ַ����ʽ��ӡ
	//%x-��ӡʮ����������
	//%o ..........
	

	
	int age = 20;
	printf("%d\n", age);//%d--��ӡ����ʮ��������





	long num = 100;//long---ָ������
	printf("%d\n", num);



	float f = 6.18;//float----����������--��С��
	printf("%f\n", f);



	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	









	return 0;
}
