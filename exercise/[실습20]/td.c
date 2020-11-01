#include <stdio.h>
int main(void)
{
	FILE *binfp, *outfp;
	int i=0, c, k=3;
	int arr[1000];
	
	binfp=fopen("text.bin", "rb");
	outfp=fopen("input.txt", "w");
	
	while (1)
	{
		i++;
		fread(&arr[i], sizeof(int), 1, binfp);
		if(arr[i]==EOF)
			break;
	}
	k=i;
	
	fclose (binfp);
	for (i=0 ; i<k-90 ; i++)
        {
                printf("%c", arr[i]);
        }
 
	for (i=0 ; i<k-90 ; i++)
	{	
		fprintf(outfp, "%c", arr[i]);
	}
	fclose (outfp);

	return 0;
}
