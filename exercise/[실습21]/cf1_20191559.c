#include <stdio.h>
double f(int j1, int j2, int j3, int j4, int j5);
int main()
{
	FILE *ifp, *ofp;
	ifp = fopen("input.txt", "r");
	ofp = fopen("out.txt", "w");
	int N, i;
	char n1[10][100];
	int j1, j2, j3, j4, j5;
	double avg, result;
	fscanf(ifp, "%d", &N);
	for (i = 0; i < N; i++)
		fscanf(ifp, "%s", n1[i]);

	for (i = 0; i < N; i++) 
	{
		fscanf(ifp, "%d %d %d %d %d", &j1, &j2, &j3, &j4, &j5);
		result=f(j1, j2, j3, j4, j5);
		fprintf(ofp, "%s의 최종 점수는 %.2f\n", n1[i], result);
		
	}
}

double f(int j1, int j2, int j3, int j4, int j5)
{
	double avg;
	avg = 0.15*j1 + 0.4*j2 + 0.2*j3 + 0.2*j4 + 0.05*j5;
	return avg;

}