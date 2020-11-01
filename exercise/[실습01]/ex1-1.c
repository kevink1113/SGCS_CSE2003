#include <stdio.h>
int main(void)
{
	char c;
	int i;
	float r;
	printf("Input one character, one integer, one real number : ");
	scanf("%c %d %f", &c, &i, &r);
	printf("%c %d %f\n", c, i, r);

	return 0;
}
