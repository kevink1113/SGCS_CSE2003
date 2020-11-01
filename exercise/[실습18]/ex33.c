#include <stdio.h>
int main(void)
{
	FILE *ifp, *ofp;
	char name[6];
	double middle, final;
	int res;
	double sum=0.0;
	double avg;
	
	ifp=fopen("student.txt", "r");
	ofp=fopen("output33.txt", "w");
	fprintf(ofp, "student\t\taverage\tgrade\n");	
	while (1)
	{
		res=fscanf(ifp, "%s %lf %lf", name, &middle, &final);
		if (res==EOF) break;
		sum = sum+middle+final;
		avg=sum/10.0;
		
		fprintf(ofp, "%s\t\t%.2f\t", name, (middle+final)/2.0);
		if ((middle+final)/2.0 >= avg)
			fprintf(ofp, "p\n");
		else
			fprintf(ofp, "f\n");
	}
	fprintf(ofp, "total avg : %.2f", avg);
	fclose(ifp);
	fclose(ofp);
}
