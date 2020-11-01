#include <stdio.h>
void fun(int a, int b);
int main(void)
{
	int a, b;
	int i;
	int pot;
	int result=0;	

	printf("Input first number: ");
	scanf("%d", &a);

	printf("Input second number: ");
	scanf("%d", &b);
	
	if (a>b)
	{
		pot=a; 
		a=b; 
		b=pot;
	}

	if (a<1 || b<1)
        {
		printf("Input is less than 1\n");
	
	}
	else
	{
		fun (a,b);
	}
	return 0;
}

void fun (int a, int b)
{
        int i;
        int pot;
        int result=0;

		for (i=a ; i<=b ; i++)
		{
			if (i%2==0 || i%3==0)
				result=result+i;
		}
	
		printf("Result: %d\n", result);
}	

