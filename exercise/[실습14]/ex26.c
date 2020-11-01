#include <stdio.h>
int dig=1;
int ptr;
int palindrome (int num, int digit);
int main(void)
{
	int num;
	int digit=1;
	printf("Input : ");
	scanf("%d", &num);
	ptr=num;
	while (num/dig>0)
	{
		dig=dig*10;
	}
	dig=dig/10;
	
	int result=palindrome(num, digit);
	if (num<0)
		printf("Input number cannot be negative.\n");
	else
	{
		if (result==1)
			printf("%d is a palindrome number.\n", num);
		else
			printf("%d is not a palindrome number.\n", num);
	}
}



int palindrome (int num, int digit)
{	
	if (num==0)
		return 1;
	else if (num<10)
		return 1;
	else if((ptr/dig)*digit==ptr%(10*digit))
    {
        ptr=ptr-dig*(ptr/dig)-digit*(ptr/dig);
    	dig=dig/10;
    	
        return (palindrome(ptr, 10*digit));
    }
}
