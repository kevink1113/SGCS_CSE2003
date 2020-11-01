#include <stdio.h>
int upp(char arr[51]);
int main(void)
{
	char arr[51];
	int i;
	scanf("%[^\n]c", &arr);
	upp (arr);
	
	printf("%s\n", arr);
	return 0;
}

int upp (char arr[51])
{
	int i;
	for (i=0 ; i<51 ; i++)
	{
		if (arr[i]>='a' && arr[i] <= 'z')
		arr[i]=arr[i]-32;
	}
	return 0;
}
	
