#include <stdio.h>
int main()
{
	int a, b;
	
	printf("�ƹ����� �ΰ� �ĺ��� : ");
	scanf("%d %d", &a, &b);
	
	if(a<b)
	{
		if(b%a==0)
		{
			printf("%d", b/a);
		}
		else
		{
			printf("�� ������ ����������");
		}
		
		
	}
	else
	{
		if(a%b==0)
		{
			printf("%d", a/b);
		}
		else
		{
			printf("�� ������ ����������");
		}
		
		
	}
	
	
}

