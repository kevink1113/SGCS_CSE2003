#include <stdio.h>
int main(void)
{
	int h, m;
	int total;
	int remainder;
	printf("what time is it? ");
	scanf("%d:%d", &h, &m);
	total = 60 * h + m;
	remainder = total % 100;
	int swit;
	
	if (remainder > 0 && remainder <= 20)
		swit = 2;
	else if (remainder > 20 && remainder <= 40)
		swit = 3;
	else if (remainder > 40 && remainder <= 60)
		swit = 4;
	else if (remainder > 60 && remainder <= 80)
		swit = 5;
	else if (remainder > 80 || remainder == 0)
		swit = 1;

	if (total < 300)
		printf("No buses are running.\n");
	else if (total > 1420)
		printf("No buses are running.\n");
	else
	{
		switch (swit)
		{
		case 1: printf("The bus 1 is comming\n"); break;
		case 2: printf("The bus 2 is comming\n"); break;
		case 3: printf("The bus 3 is comming\n"); break;
		case 4: printf("The bus 4 is comming\n"); break;
		case 5: printf("The bus 5 is comming\n"); break;
		}
	
	}
		
	return 0;
}