#include <stdio.h>
int main(void)
{
	int i1, i2, i3;
	int a,b;
	int a1, a2, a3, b1, b2, b3;
	int i=0;
	
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	
	a3=a%10;
	a1=a/100;
	a2=(a-a3-a1*100)/10;
	
	b3=b%10;
	b1=b/100;
	b2=(b-b3-b1*100)/10;
	
	i1=(a3+b3)/10;
	i2=(a2+b2+i1)/10;
	i3=(a1+b1+i2)/10;
	
	if (i1==1)
		++i;
	if (i2==1)
		++i;
	if (i3==1)
		++i;
	
	printf("%d carry operations\n", i);
	
	return 0;
}
