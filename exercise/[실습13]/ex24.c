#include <stdio.h>
int fibo(int i);
int main(void)
{
	int i, k;
	int result;
	int a=0,b=1;
	printf("Input n: ");
	scanf("%d", &i);
	result=fibo(i);
	if (i<0)
		printf("n cannot be negative number.\n");
	else
		printf("fib(%d) = %d\n", i, result);
	
	return 0;
}

int fibo(int i)
{
	int a=0,b=1,k, result;
	do{
		a=a+b;
		b=b+a;
		k++;
	}while (k<i/2);
	if (i==0)
		return 0;
	else if (i==1)
		return 1;
	else if (i%2 == 0)
		return a;
	else if (i%2 != 0)
		return b;
}
		

