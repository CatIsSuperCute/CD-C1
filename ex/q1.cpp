#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	b=a/100;
	c=a%100/10;
	d=a%100%10;
	printf("%d + %d + %d = %d\n\n", b, c, d, b+c+d);
	printf("%d x %d x %d = %d", b, c, d, b*c*d);
}
