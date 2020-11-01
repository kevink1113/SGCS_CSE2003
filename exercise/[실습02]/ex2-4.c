#include <stdio.h>
int main(void)
{
	int birth;
	int year;
	printf("Birthday : ");
	scanf("%d", &birth);
	
	printf("Your birthday is %d / %d / %d\n",birth/10000, (birth%10000)/100, (birth%10000)%100);
	
	printf("Year : ");
	scanf("%d",&year);
	
	printf("In %d, your age is %d\n", year, year-(birth/10000)+1);

	return 0;
}
