#include <stdio.h>
int main(void)
{
	int i = 0;
	int n;
	int score=0;
	int p;
	float avg;
	int cut;
	int f=0;
	printf("Number of class: ");
	scanf("%d", &n);
	printf("Cutline: ");
	scanf("%d", &cut);
	while (i<n)
	{
		printf("Input score #%d: ", i);
		scanf("%d", &p);
		if (p<cut)
			++f;
		score = score + p;
		++i;
	}

	avg = (double)score / (double)n;
	printf("Average score: %.2f\n", avg);
	printf("Number of failures: %d\n", f);
	return 0;
}
