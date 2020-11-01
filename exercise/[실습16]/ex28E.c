#include <stdio.h>
int i, j;
double avg (int arr[]);
int main(void)
{
	double result;
	printf("n?: ");
	scanf("%d", &i);
	
	int arr[i];
	for (j=0 ; j<i ; j++)
		scanf("%d", &arr[j]);
	
	result=avg(arr);
	printf("%f\n", result);
	
	return 0;
}

double avg (int arr[])
{
	int sum=0;
	double av;
	for (j=0 ; j<i ; j++)
		sum += arr[j];
	
	av=(double)sum/(double)i;	
	return av;
}
