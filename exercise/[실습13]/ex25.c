#include <stdio.h>
int isDivisor(int m, int n);
int isPrime(int m);

int main(void)
{
	int N;
	int i, a, b;
	printf("Input : ");
	scanf("%d", &N);
	for(i=1 ; i<=N ; i++)
	{
		a=isDivisor(i, N);
		b=isPrime(i);
		if(a==1 && b==1)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}

int isDivisor(int m, int n)
{
	if (n%m==0)
		return 1;
	else
		return 0;
}

int isPrime(int m)
{
	int b=0;
	int i;
	for (i=1 ; i<=m ; i++)
	{
		if (m%i==0)
		{
			b++;
		}
	}
	
	if (b==2)
		return 1;
	else
		return 0;
}


