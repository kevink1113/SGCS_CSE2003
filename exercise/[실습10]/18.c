#include <stdio.h>
float plus(float a, float b);
float minus(float a, float b);
float gop(float a, float b);
float nanum(float a, float b);

int main(void)
{
	float a, b;
	char o;
	printf("Operator (+, -, *, /)\n");
	printf("Please enter the formula. (ex : 12.3 + 5.5)\n");

	scanf("%f %c %f", &a, &o, &b);

	switch (o)
	{
	case 43:
		plus(a, b); break;
	case 45:
		minus(a, b); break;
	case 42:
		gop(a, b); break;
	case 47:
		nanum(a, b); break;
	default:
		printf("Invalid operator : %c\n", o);
	}

	return 0;
}

float plus(float a, float b)
{
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	return 0;
}

float minus(float a, float b)
{
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	return 0;
}
float gop(float a, float b)
{
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	return 0;
}
float nanum(float a, float b)
{
	switch ((int)b)
	{
	case 0: printf("Division by zero\n"); break;\
	default: printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	}
	return 0;
}
