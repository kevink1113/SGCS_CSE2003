#include <stdio.h>
void swap(int*, int*);

int main(void)
{
	int a,b;
	printf("Input two Number\n");
	printf("	x : ");
	scanf("%d", &a);

	printf("	y : ");
	scanf("%d", &b);
	
	printf("---------------------------------\n");
	printf("Before : x [%d] y [%d]\n",a ,b);
	
	swap(&a, &b);
	
	printf("---------------------------------\n");
	printf("After  : x [%d] y [%d]\n",a ,b);
	
	return 0;
}

void swap(int* a, int* b)
{
	int temp;
	temp=(*b);
	(*b)=(*a);
	(*a)=temp;
}
