#include <stdio.h>
int main()
{
	int a;
	
	printf("아무수나 쳐보셔 : ");
	scanf("%d", &a);
	
	if(a%3==0)
	{
		printf("삼의배수네 ㅋ");
	 } 
	else
	{
		printf ("삼의배수아니네 ㅋ");
	 } 
}
