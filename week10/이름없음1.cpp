#include <stdio.h>
int main()
{
	int n;
	int i; 
	int mynameisharrypotter;
	printf("�麸�� ū�� �ƹ� ���ڳ� �Է��� ���� �� �ð��� ���ݾ� : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		if((i%1==0) || (i%7==0))
		{
			printf("%d ", i);
			mynameisharrypotter+=i;
		}
	}
	
	printf("\n");
	printf("sum=%d\n",mynameisharrypotter);
}

