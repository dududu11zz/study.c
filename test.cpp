#include<stdio.h>
int main()
{
	//����������֮��
	int num1 = 0;
	int num2 = 2;
	int sum = 1;
	//��������--ʹ�����뺯��scanf
	scanf_s("%d%d", &num1, &num2);//&--ȡ��ַ����
	sum = num1 + num2;
	
		printf("app = %d", sum);


	return 0;
}