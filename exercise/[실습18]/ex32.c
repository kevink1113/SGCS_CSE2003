#include <stdio.h>
int main (void)
{
	FILE *ifp, *ofp;
	double a, b, res;
	char g, e;
	double real, inre;
	
	ifp=fopen("input32.txt", "r");
	
	ofp=fopen("output32.txt", "w");
	
	while(1)
	{
		res=fscanf(ifp, "%lf %c %lf %c %lf", &a, &g, &b, &e, &inre);
		if (res==EOF) break;
		
		if (g=='*')
			real=a*b;
		else if (g=='+')
			real=a+b;
		else if (g=='-')
			real=a-b;
		else if (g=='/')
			real=a/b;
		else if (g=='%')
			real=(int)a%(int)b;
		
		fprintf(ofp, "%.2f %c %.2f = %.2f", a, g, b, inre);
		
		if (real==inre)
			fprintf(ofp, " correct\n");
		else
			fprintf(ofp, " incorrect\n");
	}
	
	fclose(ifp);
	fclose(ofp);
}

