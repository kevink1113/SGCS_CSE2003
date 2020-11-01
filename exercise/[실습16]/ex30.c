#include <stdio.h>
#include <stdlib.h>
double dim(char arr[12]);
int main(void) 
{
	char arr[12];
	double f; 
	scanf("%s", arr);
	f=dim(arr);
	printf("Result: %f\n",f);

	return 0;
}

double dim(char arr[12])
{
	return atof(arr);
}
