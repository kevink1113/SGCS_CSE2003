#include <stdio.h>
int main(void)
{
	int a;
	int i;
	int arr[100];
        int brr[100];


	scanf("%d", &a);
	
	for (i=0 ; i<a ; i++)
		arr[i]=i+1;
	
	for (i=0 ; i<a ; i++)
        	brr[i]=arr[i];

	for (i=0 ; i<a ; i++)
		printf("%d ", arr[i]);
	
	
	printf("\n");
	for (i=0 ; i<a ; i++)
                arr[i]=arr[i]*arr[i];

	for (i=0 ; i<a ; i++)
                printf("%d ", arr[i]);

	
	printf("\n");
	for (i=0 ; i<a ; i++)
                arr[i]=arr[i]*brr[i];

        for (i=0 ; i<a ; i++)
                printf("%d ", arr[i]);
	
	printf("\n");

	return 0;
}
