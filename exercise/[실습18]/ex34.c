#include <stdio.h>
void swap(int *, int *);
int main(void)
{
	FILE *ifp, *ofp;
	int num[100];
	int res, i, j;
	
	ifp=fopen("input34.txt", "r");
	ofp=fopen("output34.txt", "w");
	for (i=0 ; i<100 ; i++)
		fscanf(ifp, "%d", &num[i]);
	for (i=0 ; i<99 ; i++)
	{
		for (j=0 ; j<99 ; j++)
		{
			if (num[j] > num [j+1])
				swap(&num[j], &num[j+1]);
		}
	}
	
	for (i=0 ; i<100; i++)
		fprintf(ofp, "%d\n", num[i]);
	
	fclose(ifp);
	fclose(ofp);
}

void swap(int *a, int *b)
{
	int ptr;
	ptr=(*b); (*b)=(*a); (*a)=ptr;
}
