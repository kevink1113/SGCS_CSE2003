#include <stdio.h>
int main(void)
{
	int i;
	int a=0;
	int b=1;
	int c=0;
	int jull=0;
	
	printf("Input:");
	scanf("%d", &i);
	int p=i-1;
	while(jull<i)
	{
		while(a<p)
		{
			printf(" ");
			a++;
		}
	
		while (c<(2*b-1))
		{
			printf("*");
			c++;
		}
		
		printf("\n");
		jull++;

		a=0; b++; c=0;
		p--;
	}

	return 0;
}
