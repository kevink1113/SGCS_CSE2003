#include <stdio.h>
float xdef(int, int, int, int);
float ydef(int, int, int, int);

int main(void)

{
	int a,b,c,d;
	float x,y;
	printf("1st equation: y=ax-b, input 'a' and 'b'\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("2nd equation: y=cx-d, input 'c' and 'd'\nc=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	
	x=xdef(a,b,c,d);
        y=ydef(a,b,c,d);

	printf("result:\n");
	
	printf("x is %f\n", x);
	printf("y is %f\n", y);
	
	return 0;
}

float xdef(int a,int b,int c,int d)
{
	float x;
	x=(float)(b-d)/(a-c);
	return x;
}
float ydef(int a,int b,int c,int d)
{
	float y;
	y=a*((float)(b-d)/(a-c))-b;
	return y;
}	
	 
