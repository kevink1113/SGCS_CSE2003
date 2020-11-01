#include <stdio.h>
double avg(int arr[100][100], int I, int N);
int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	int arr[100][100];
	
	for (i=0 ; i<n ; i++)
		for (j=0 ; j<n ; j++)
			scanf("%d", &arr[i][j]);
	
	for (i=0 ; i<n ; i++)
		printf("%.2f ", avg(arr, i, n));
	
	printf("\n");
	
	return 0;
}

double avg(int arr[100][100], int I, int N)
{
	int i;
	double sum;
	double av;
	for (i=0 ; i<N ; i++)
		sum += arr[i][I];
	
	av=sum/(double)N;
	return av;
}
