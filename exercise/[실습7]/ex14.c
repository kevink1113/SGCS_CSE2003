#include <stdio.h>
int main(void)
{
	int year;
	int d;
	int year2;
	printf("Enter the year to be tested: ");
	scanf("%d", &year);
	d = year % 4;
	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
		printf("It is a leap year.");

	else
	{
		printf("It is not a leap year.\n");
		year2 = year - d;
		if ((year2 % 4 == 0) && ((year2 % 100 != 0) || (year2 % 400 == 0)))
			printf("%d is a leap year.\n", year2);
		else
			printf("%d is a leap year.\n", year2-4);

	}
		

	return 0;
}