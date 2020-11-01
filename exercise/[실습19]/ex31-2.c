#include <stdio.h>
int main(void)
{
	FILE *ifp, *ofp;
	char c;
	char a[100];
	int chk[100]={0, }, i=0;
	ifp=fopen("input31-2.txt", "r");
	
	while (1)
	{
		c=fgetc(ifp);
		if (c==EOF)
			break;
		a[i]=c;
		i++;
	}
	int len=i;
	
	for (i=0 ; i<len ; i++)
	{
		if ('A'<=a[i] && a[i]<='Z')
			chk[a[i]]++;
		if ('a'<=a[i] && a[i]<='z')
			chk[a[i]-32]++;
	}
	
	for (i=0 ; i<26 ; i++)
		printf("%c : %d\t", i+65, chk[i+65]);
	printf("\n");
	return 0;		
}
