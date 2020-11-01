#include <stdio.h>
int swap(int *, int *);
int main()
{
	int arr[2][100];
	FILE *ifp, *ofp;
	ifp=fopen("input4.txt", "r");
	ofp=fopen("output.txt", "w");
	int N, i, j;
	fscanf(ifp, "%d", &N);
	
	for (i=0 ; i<N ; i++)
		fscanf(ifp, "%d", &arr[0][i]);
	for (i=0 ; i<N ; i++)
		arr[1][i]=1;
	
	for (i=0 ; i<N ; i++)
		for (j=0 ; j<N ; j++)
			if (i != j)
				if (arr[0][i]==arr[0][j])
				{
					arr[0][j]=1000;
					arr[1][i]++;
				}
	
	for (i=0 ; i<N ; i++)
		for (j=0 ; j<N ; j++)
			if (arr[1][i]>arr[1][j])
			{
				swap(&arr[1][i], &arr[1][j]);
				swap(&arr[0][i], &arr[0][j]);
			}
	
	for (i=0 ; i<N ; i++)
		for (j=0 ; j<N ; j++)
			if (arr[1][i]==arr[1][j])
			{
				if (arr[0][i]<arr[0][j])
				{
					swap(&arr[1][i], &arr[1][j]);
					swap(&arr[0][i], &arr[0][j]);
				}
			}
	
	for (i=0 ; i<N ; i++)
		if (arr[0][i] != 1000)
		{
			for (j=0 ; j<arr[1][i] ; j++)
				fprintf(ofp, "%d ", arr[0][i]);
		}
	
	return 0;
}

int swap(int *a, int *b)
{
	int ptr;
	ptr=(*a);
	(*a)=(*b);
	(*b)=ptr;
}

