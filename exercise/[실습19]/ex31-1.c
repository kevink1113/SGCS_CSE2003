#include <stdio.h>
int p, q;
void swap(char *, char *);
void merge(char[]);
int main(void)
{
	char a[100], b[100];
	FILE *ifp, *ifp2;
	int i=0, j=0;
	char c;
	ifp=fopen("input31-1_A.txt", "r");
	ifp2=fopen("input31-1_B.txt", "r");
	
	while (1)
	{
		c=fgetc(ifp);
		if(c==EOF) break;
		if (c==' ') continue;
		a[i]=c;
		i++;
	}
	p=i;
	
	while (1)
        {
                c=fgetc(ifp2);
                if(c==EOF) break;
                if (c==' ') continue;
                a[j+p-1]=c;
                j++;
        }
        q=j;
	
	merge(a);
        for (i=0 ; i<p+q-1 ; i++)
                printf("%c ", a[i]);
	printf("\n");
	return 0;	
}

void swap(char *a, char *b)
{
	char ptr;
	ptr=(*b); (*b)=(*a); (*a)=ptr;
}

void merge(char a[100])
{
	int i, j;
	for (i=0 ; i<p+q-2 ; i++)
	{
		for (j=0 ; j<p+q-2 ; j++)
		{
			if (a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
		}
	}
}
