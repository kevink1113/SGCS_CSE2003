#include <stdio.h>
int fac(int a);
int main(void)
{
	int i, result;
	scanf("%d", &i);
	result=fac(i);
	printf("%d\n", result);
	
	return 0;
}

int fac(int a)
{
	int result=1, i;
	for(i=a ; i>0 ; i--)
	{
		result=result*i;
	}
	return result;
}
