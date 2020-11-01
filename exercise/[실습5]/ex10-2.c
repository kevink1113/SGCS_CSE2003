#include <stdio.h>
float determinant(int*, int*, int*, int*);

int main(void)
{
	int a,b,c,d;
	float result;
	printf("Enter 2x2 matrix: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("matrix: \n");
	printf("	|%d %d|\n", a, b);
	printf("	|%d %d|\n", c, d);
	
	result=determinant(&a, &b, &c, &d);
	printf("inverse matrix: \n");
	printf("  %.2f *|%d %d|\n",result, a, b);
        printf("        |%d %d|\n", c, d);
	
	return 0;
}

float determinant(int*a, int*b, int*c, int*d)
{
	float de;
	de=1.0/((*a)*(*d)-(*b)*(*c));
	int temp;
	temp=(*a);
	(*a)=(*d);
	(*d)=temp;
	
	(*b)=-(*b);
	(*c)=-(*c);
	return de;
}
	

