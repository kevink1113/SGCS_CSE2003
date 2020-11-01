#include <stdio.h>
int main(void)
{
	char a[1000], b[1000], c;
	int i=0, j=0;
	FILE *ifp, *ifp2;
	ifp=fopen("input31_A.c", "r");
	ifp2=fopen("input31_B.c", "r");
	
	int k, p;
	int same=0;
	double copy;
	while(1) 
	{
		c=fgetc(ifp);
		if(c==EOF)
                        break;

		if(c==' ' || c=='\n') continue;
		a[i]=c;
		i++;
	}
	k=i;

	while(1)
        {
                c=fgetc(ifp2);
                if(c==EOF)
                        break;

		if(c==' ' || c=='\n') continue;
                b[j]=c;
                j++;
        }
        p=j;
	
	int total;
	
	if (k>=p)
		total=p;
	else
		total=k;
	
	for (i=0 ; i<total ; i++)
	{
		if (a[i]==b[i])
			same++;
	}
	copy=(same/(double)total)*100.0; 
	printf("total: %d\n", total);
	printf("same: %d\n", same);
	printf("copy ratio: %.3f\n", copy);

	return 0;
}
