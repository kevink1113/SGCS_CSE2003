#include <stdio.h>
int main(void)
{
	int arr[10];
	int i;
	int Max, min;
	printf("Input (10 numbers): ");
	for (i=0 ; i<10 ; i++)
		scanf("%d", &arr[9-i]);
	
	for (i=0 ; i<10 ; i++)
                printf("%d ", arr[i]);

	printf("\n");
	
	Max=arr[0]; min=arr[0];
	
	for (i=0 ; i<10 ; i++)
                if (Max<=arr[i])
			Max=arr[i];

	for (i=0 ; i<10 ; i++)
                if (min>=arr[i])
                        min=arr[i];

	printf("Max: %d, Min: %d\n", Max, min);

	return 0;
}

	
