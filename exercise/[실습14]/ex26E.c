#include <stdio.h>
void hanoi(int n, char from, char temp, char to);
int main(void)
{
	int i, j;
	int top_num;
	printf("test case : ");
	scanf("%d", &i);
	for (j=0 ; j<i ; j++)
	{
		printf("How many disks?");
		scanf("%d", &top_num);
		hanoi(top_num, 'S', 'A', 'D');
	}
	return 0;
}

void hanoi(int n, char from, char temp, char to)
{
	if (n==1)
		printf("Move discus 1 from %c to %c\n", from ,to);
	else
	{
		hanoi(n-1, from, to, temp);
		printf("Move discus %d from %c to %c\n", n, from, to);
		hanoi(n-1, temp, from, to);
	}
}
