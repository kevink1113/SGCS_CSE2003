#include <stdio.h>
int main(void)
{
	int price;
	int  prices;
	printf("Price: ");
	scanf("%d", &price);
	prices=(double)price*1.05*1.05*1.05;
	
	printf("---------------output----------------\n");
	printf("Month\t\t:%10d%10d\n",3, 6);
	printf("Payment\t\t:%10d%10d\n",price ,prices);
	printf("-------------------------------------\n");
	printf("Pay/month\t:%10.2lf%10.2lf\n",(double)price/3 ,(double)prices/6);

	return 0;
}
