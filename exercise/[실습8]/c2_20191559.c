#include <stdio.h>
float Rad_to_Degree(float *r);
float Degree_to_Rad(float *d);

int main(void)
{
	float r, d;
	scanf("%f", &d);
	scanf("%f", &r);
	Degree_to_Rad(&d);
	Rad_to_Degree(&r);

	return 0;
}

float Degree_to_Rad(float *d)
{
	(*d) = (*d) / 57.2958;
	printf("%8.3f\n", (double)*d);
}

float Rad_to_Degree(float *r)
{
	(*r) = (*r) * 57.2958;
	printf("%8.3f\n", (double)*r);
}
