#include <stdio.h>
int main()
{
	int a, b;
	
	printf("아무수나 두개 쳐보셔 : ");
	scanf("%d %d", &a, &b);
	
	if(a<b)
	{
		if(b%a==0)
		{
			printf("%d", b/a);
		}
		else
		{
			printf("안 나누어 떠러지지뤙");
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
			printf("안 나누어 떠러지지뤙");
		}
		
		
	}
	
	
}

