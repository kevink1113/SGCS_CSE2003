#include <stdio.h>
int x,y;
void divide (int* a, int* b);
int main (void)
{
	int x, y;
	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);
	divide(&x, &y);	
	divide(&x, &y);
	return 0;	
}

void divide (int* a, int* b)
{
	x=*a;
	y=*b;
	*a=(*a)/(*b);
	*b=x%y;
	printf("result: %d/%d=%d, %d%%%d=%d\n",x,y,*a,x,y,*b);

}
