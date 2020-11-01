#include <stdio.h>
int main()
{
	float a=0, b;
	printf("Input: ");
	scanf("%f", &a);
	b = 2 * a;

	printf("Use \">\": %d\n", (int)b > 2 * (int)a);
	printf("Use \">=\": %d\n", a >= (int)a+0.5);
	printf("Use \"==\": %d\n", (int)b==2*(int)a+1);
	printf("Use \"!=\": %d\n", (int)b != 2*(int)a);
	return 0;
}