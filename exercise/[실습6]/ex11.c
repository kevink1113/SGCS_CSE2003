#include <stdio.h>
int a,b;
void fourmath(int* c, int* d);
void printresult(int* c, int* d);

int main(void)
{
	int a,b;
	printf("Input two number: ");
	scanf("%d %d", &a, &b);
	fourmath(&a, &b);
	printresult(&a, &b);
	return 0;	
}

void fourmath(int* c, int* d)
{
	(a)=(*c)+(*d);
	(b)=(*c)-(*d);
	(*c)=((a+b)/2)*((a-b)/2);
	(*d)=((a+b)/2)/((a-b)/2);
}

void printresult(int* c, int* d)
{
	printf("Result: a+b=%d, a-b=%d, a*b=%d, a/b=%d\n",a,b,*c,*d);
}
