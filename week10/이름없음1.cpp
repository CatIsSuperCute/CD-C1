#include <stdio.h>
int main()
{
	int n;
	int i; 
	int mynameisharrypotter;
	printf("백보다 큰거 아무 숫자나 입력해 빨리 좀 시간이 없잖아 : ");
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

