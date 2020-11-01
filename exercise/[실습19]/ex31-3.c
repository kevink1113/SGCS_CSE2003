#include <stdio.h>
int main(void)
{
	FILE *ifp, *ofp;
	
	char in[30], out[30], c, a[100], b[100];
	printf("Enter name of file to copy: ");
	scanf("%s", in);
	
	printf("Enter name of target file: ");
	scanf("%s", out);
	
	ifp=fopen(in, "r");	
        ofp=fopen(out, "w");

	int i=0;
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
		fprintf(ofp, "%c", a[i]);

	fclose(ifp);
	fclose(ofp);	
	return 0;	
}	
