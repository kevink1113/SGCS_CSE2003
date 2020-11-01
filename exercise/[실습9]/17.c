#include <stdio.h>
float avgFunc(float, float, float);
int gradeFunc(float);

int main(void)
{
	float a, b, c;
	float j;
	printf("Input: ");
	scanf("%f %f %f", &a, &b, &c);

	j=avgFunc(a,b,c);
	gradeFunc(j);
	
}

float avgFunc(float a, float b, float c)
{
	float i;
	i = (a + b + c) / 3.0;

	return i;
}

int gradeFunc(float j)
{
	if (j < 50)
		printf("Grade: F\n");
	else
	{
		if (j<70)
			printf("Grade: D\n");
		else
		{
			if (j<80)
				printf("Grade: C\n");
			else
			{
				if (j<90)
					printf("Grade: B\n");
				else
				{
					printf("Grade: A\n");
				}
			}
		}
	}
}
