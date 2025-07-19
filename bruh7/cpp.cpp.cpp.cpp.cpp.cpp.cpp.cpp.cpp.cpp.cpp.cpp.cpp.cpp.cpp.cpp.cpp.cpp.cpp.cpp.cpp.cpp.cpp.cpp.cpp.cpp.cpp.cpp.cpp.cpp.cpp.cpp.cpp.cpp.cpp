#include <stdio.h>
int main()
{
	int a;
	
	printf("음수든 양수든 아무거나 일단 박아보셔 : ");
	scanf("%d", &a);
	
	if(a>0)
	{
		printf("정답!!! 양수!!!");
	}
	else
	{
		printf("정답!!! 음수!!!");
	}
}
