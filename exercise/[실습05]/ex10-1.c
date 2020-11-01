#include <stdio.h>
void mvup(int*, int*, int);
void mvdn(int*, int*, int);
void mvri(int*, int*, int);
void mvle(int*, int*, int);

int main(void)
{
	int x, y;
	int a,b,c,d;
	printf("Enter (x, y): ");
	scanf("%d %d", &x, &y);
	
	printf("current x, y: /(%d, %d/)\n", x, y);
	
	printf("move up %d\n", 3);
	mvup(&x, &y, 3);
	printf("current x, y: /(%d, %d/)\n", x, y);
		
	printf("move down %d\n", 10);
	mvdn(&x, &y, 10);
	printf("current x, y: /(%d, %d/)\n", x, y);
	
	printf("move right %d\n", 8);
	mvri(&x, &y, 8);
	printf("current x, y: /(%d, %d/)\n", x, y);
	
	printf("move left %d\n", 21);
	mvle(&x, &y, 21);
	printf("current x, y: /(%d, %d/)\n", x, y);
	return 0;
}

void mvup(int*x, int*y, int z){
	(*y)=(*y)+z;
}
void mvdn(int*x, int*y, int z){
	(*y)=(*y)-z;
}
void mvri(int*x, int*y, int z){
	(*x)=(*x)+z;
}
void mvle(int*x, int*y, int z){
	(*x)=(*x)-z;
}
