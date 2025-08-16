#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a/10==0)
		printf("yousoneaun");
	else if (a/10==1)
		printf("chungsoneaun");
	else if ((a/10==2) || (a/10==3))
		printf("chungneaun");
	else if ((a/10==4) || (a/10==5))
		printf("geungneaun");
	else if (a/10==6)
		printf("gangneaun");
	else if ((a/10==7) || (a/10==8))
		printf("noneaun");
	else if (a/10==9)
		printf("dojun backsae");
	else
		printf("sunggong backsae");
} 
