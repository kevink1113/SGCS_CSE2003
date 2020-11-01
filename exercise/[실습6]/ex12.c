#include <stdio.h>
int x=0;
int fibo(int* y);
int main(void)
{
	int x=1;
	fibo(&x);
	printf("Fibo2: %d\n", x);
	fibo(&x);
	
	printf("Fibo3: %d\n", x);
	fibo(&x);

        printf("Fibo4: %d\n", x);
	fibo(&x);
	
	printf("Fibo5: %d\n", x);
	fibo(&x);

        printf("Fibo6: %d\n", x);
        fibo(&x);
	
	printf("Fibo7: %d\n", x);
        fibo(&x);

	printf("Fibo8: %d\n", x);
        fibo(&x);

	printf("Fibo9: %d\n", x);

	return 0;
}

int fibo(int* y)
{
	*y = *y + x;
	x = *y -x;	
		
	return 0;	
}
