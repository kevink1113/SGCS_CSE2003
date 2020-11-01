#include <stdio.h>
int main(void)
{
	FILE *pfile, *image;
	
	int i=0, k, result=0;
	char in[100];
	int arr[100000];
	printf("Enter file name: ");
	scanf("%s", in);
	pfile=fopen(in, "rb");
	image=fopen("sogang.jpg", "wb");
	
	for (i=0 ; i<3 ; i++)
		fread(&arr[i], sizeof(int), 1, pfile);
	
	if (arr[0]==0xff)
		if (arr[1]==0xd8)
			if(arr[2]==0xff)
				result=1;
	if (result==1)
		printf("This is JPEG file.\n");
	else
	printf("This is NOT JPEG file.\n");
	
	rewind(pfile);
   if (result==1)
   {
	while (1)
	{
		fread(&arr[i], sizeof(int), 1, pfile);
		if (arr[i]==EOF)
			break;
		i++;
	}
	k=i;

	for (i=0 ; i<k ; i++)
		fwrite(&arr[i], sizeof(int), 1, image);
   }
	return 0;
}
