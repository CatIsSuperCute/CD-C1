#include <stdio.h>
int main()
{
	int i, num;
	int max = 0;
	for(i=0;i<10;i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &num); 
		
		if(num>max)
		{
			max=num;
		}
	} 
	printf("max=%d",max);
	
}
