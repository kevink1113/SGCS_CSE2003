#include <stdio.h>
int main(void)
{
	int a, b, result;
	int i;
	printf("[0]: Exit [1]: Add [2]: Subtract [3]: Multiply [4]: Divide\n");
	scanf("%d", &i);
	while (i>0)
	{
		if (i==1)
		{
			
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a+b);
			printf("\n[0]: Exit [1]: Add [2]: Subtract [3]: Multiply [4]: Divide\n");
			scanf("%d", &i);
		}
			
			
		if (i==2)
		{
			scanf("%d %d", &a, &b);
			printf("%d - %d = %d\n", a, b, a-b);
			printf("\n[0]: Exit [1]: Add [2]: Subtract [3]: Multiply [4]: Divide\n");
			scanf("%d", &i);
		}
	
		if (i==3)
        {
        	scanf("%d %d", &a, &b);
			printf("%d * %d = %d\n", a, b, a*b);
			printf("\n[0]: Exit [1]: Add [2]: Subtract [3]: Multiply [4]: Divide\n");
			scanf("%d", &i);
		}

		if (i==4)
        {
        	scanf("%d %d", &a, &b);
			printf("%d / %d = %d\n", a, b, a/b);
			printf("\n[0]: Exit [1]: Add [2]: Subtract [3]: Multiply [4]: Divide\n");
			scanf("%d", &i);
        }
    }
    printf("Bye!\n");
    return 0;
}
	
	
