#include <stdio.h>
int main(void)
{
	int a[5];
	int b[5];
	int i;
	int result=1;
	for (i=0 ; i<5 ; i++)
		scanf("%d", &a[i]);

	for (i=0 ; i<5 ; i++)
                scanf("%d", &b[i]);
	
	for (i=0 ; i<5 ; i++)
	{
		if (a[i]==b[i])
			result= result*1;
		else
			result= result*0;
	}
	
	if (result==1)
		printf("true\n");
	else
		printf("false\n");
	
	return 0;
}
