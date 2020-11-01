#include <stdio.h>
int main (void)
{
	int i, j=1;
	scanf("%d", &i);
	while(j<10)
	{
		printf("%d X %d = %d\n", i, j, i*j);
		j++;
	}
}
