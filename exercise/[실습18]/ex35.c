#include <stdio.h>
int fun(int, int, int, int, int, int, int, int);
int main(void)
{
	FILE *ifp, *ofp;
	int x1, y1, x2, y2, x1b, y1b, x2b, y2b;
	int res, num;
	
	ifp=fopen("input35.txt", "r");
	ofp=fopen("output35.txt", "w");
	
	fscanf(ifp, "%d", &num);
	while (1)
	{
		res=fscanf(ifp, "%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x1b, &y1b, &x2b, &y2b);
		if (res==EOF) break;
		
		if (fun(x1, y1, x2, y2, x1b, y1b, x2b, y2b)==1)
			fprintf(ofp, "true\n");
		else
			fprintf(ofp, "false\n");
	}
	
	fclose(ifp);
	fclose(ofp);
}

int fun (int x1, int y1, int x2, int y2, int x1b, int y1b, int x2b, int y2b)
{
	if ((x1b<=x2) && (y1b<=y2))
	{
		if ((x1<=x2b) && (y1<=y2b))
			return 1;
		else
			return 0;
	}
	else if ((x1<=x2b) && (y1<=y2b))
	{
		if ((x1b<=x2) && (y1b<=y2))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
