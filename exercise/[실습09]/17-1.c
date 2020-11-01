#include <stdio.h>
float avgFunc(float, float, float);
char gradeFunc(float);
char gradeDetailFunc(float);

int main(void)
{
	float a, b, c;
	float j;
	printf("Input: ");
	scanf("%f %f %f", &a, &b, &c);

	j=avgFunc(a,b,c);
	printf("Score : %.2f\n", j);
	gradeFunc(j);
	gradeDetailFunc(j);
	
}

float avgFunc(float a, float b, float c)
{
	float i;
	i = (a + b + c) / 3.0;

	return i;
}

char gradeFunc(float j)
{
	if (j<60)
		printf("Grade : F");
	else
	{
		if (j<70)
			printf("Grade : D");
		else
		{
			if (j<80)
				printf("Grade : C");
			else
			{
				if (j<90)
					printf("Grade : B");
				else
				{
					printf("Grade : A");
				}
			}
		}
	}
}

char gradeDetailFunc(float j)
{
	if (j>=60)
	{
		if ((int)j%10<3)
		printf("-\n");
		else
		{
			if ((int)j%10<7)
				printf("0\n");
			else
			{
				printf("+\n");
			}
		}
	}
	
}
