#include <stdio.h>
int main()
{
	int num;
	
	printf("10,000 �̸� ���� �Է� ���� : ");
	scanf("%d", &num); 
	
	if(num < 10)
	{
		printf("�� �ڸ����� ��\n");
	}
	else if(num < 100)
	{
		printf("�� �ڸ����� �ʹ� ���� ����\n");
	}
	else if(num < 1000)
	{
		printf("�� �ڸ����� ���߰��ϱ�\n");
	}
	else if(num < 10000)
	{
		printf("�� �ڸ���? ������ �ʱ�\n");
	}
	else
	{
		printf("�ƴ� 10,000 �̸��̶󱸿� ������;; �� %d��;;\n", num);
	}
}
