#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	double avr;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
        scanf("%d",&b);
	printf("Enter the third number: ");
        scanf("%d",&c);
	printf("Enter the fourth number: ");
        scanf("%d",&d);
	
	avr=(a+b+c+d)/4.0;
	printf("****** average is %lf ******\n",avr);
	printf("first number:  %10d -- deviation : %10.2f\n",a,a-avr);
	printf("second number: %10d -- deviation : %10.2f\n",b,b-avr);
	printf("third number:  %10d -- deviation : %10.2f\n",c,c-avr);
	printf("fourth number: %10d -- deviation : %10.2f\n",d,d-avr);
	
	
	return 0;
}
