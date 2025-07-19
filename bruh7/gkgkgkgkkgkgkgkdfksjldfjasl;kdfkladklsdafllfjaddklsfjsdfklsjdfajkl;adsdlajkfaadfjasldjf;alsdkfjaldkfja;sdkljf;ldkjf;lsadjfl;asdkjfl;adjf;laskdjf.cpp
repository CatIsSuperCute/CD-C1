#include <stdio.h>
int main()
{
	int num;
	
	printf("10,000 미만 정수 입력 ㄱㄱ : ");
	scanf("%d", &num); 
	
	if(num < 10)
	{
		printf("한 자리수네 ㅋ\n");
	}
	else if(num < 100)
	{
		printf("두 자리수군 너무 수가 적어\n");
	}
	else if(num < 1000)
	{
		printf("세 자리수네 어중간하군\n");
	}
	else if(num < 10000)
	{
		printf("네 자리수? 나쁘진 않군\n");
	}
	else
	{
		printf("아니 10,000 미만이라구요 아저쒸;; 뭔 %d야;;\n", num);
	}
}
