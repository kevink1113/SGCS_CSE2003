#include <stdio.h>
int multi(int arr[3][4][4]);
int main(void)
{
	int arr[3][4][4];
	int i, j;

	printf("First Matrix: \n");
	for (i=0 ; i<4 ; i++)
		for (j=0 ; j<4 ; j++)
			scanf("%d", &arr[0][i][j]);
	
	printf("Second Matrix: \n");
    for (i=0 ; i<4 ; i++)
        for (j=0 ; j<4 ; j++)
            scanf("%d", &arr[1][i][j]);

	multi(arr);
	printf("Result: \n");
	
	for (i=0 ; i<4 ; i++)
	{
		for (j=0 ; j<4 ; j++)
		{
			printf("%d\t", arr[2][i][j]);
		}
		printf("\n");
	}
	return 0;
}

int multi(int arr[3][4][4])
{
	int x, y;
	for (x=0 ; x<4 ; x++)
	{
		for (y=0 ; y<4 ; y++)
		{
			arr[2][x][y] = arr[0][x][0]*arr[1][0][y]+arr[0][x][1]*arr[1][1][y]+arr[0][x][2]*arr[1][2][y]+arr[0][x][3]*arr[1][3][y];
		}
	}
	return 0;
}		
