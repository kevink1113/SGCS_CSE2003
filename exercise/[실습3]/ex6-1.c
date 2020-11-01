#include <stdio.h>
int getyear(int);
int getmonth(int);
int getday(int);

void main(void)
{
	int birthday;
	int year, month, day;
	printf("What's your birthday?: ");
	scanf("%d", &birthday);
	
	year=getyear(birthday);
	month=getmonth(birthday);
	day=getday(birthday);
	
	printf("%d", year);
	printf("-%d", month);
	printf("-%d\n", day);
}

int getyear (int b)
{
	int y;
	y=b/10000;
	return y;
}

int getmonth (int b)
{
	int m;
	m=(b-getyear(b)*10000)/100;
	return m;
}

int getday(int b)
{
	int d;
	d=b-getyear(b)*10000-getmonth(b)*100;
	return d;
}
