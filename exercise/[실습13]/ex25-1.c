#include <stdio.h>
int main(void)
{
	int i, N, sum=0;
	scanf("%d", &N);
	for(i=0 ; ; i++){
		if (sum>1000000000)
			break;
		else if(i>1000000001)
			break;
		else if(i%N==0)
			continue;
		sum += i;
	}
	printf("%d %d\n", i-1, sum);
	
	return 0;	
}

