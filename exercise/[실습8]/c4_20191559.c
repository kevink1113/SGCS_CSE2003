#include <stdio.h>
int main(void)
{
	int a, b, c;
	int avg;
	int i;
	scanf("%d %d %d", &a, &b, &c);
	avg=(a+b+c)/3;
	i=68-(avg/30);
	
	printf("Grade is %c\n", i);
	
	return 0;
}
