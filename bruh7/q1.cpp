#include <stdio.h>
int main()
{
	int a, b, c;
	
	a = 12;
	b = 56;
	c = a > b;
	
	if(c)
	{
		printf ("%d�� %d���� ũ�� �Ϥ���\n", a, b);
	}
	else
	{
		printf ("%d�� %d���� �۴� �Ϥ���\n", a, b);
	}
	
}
