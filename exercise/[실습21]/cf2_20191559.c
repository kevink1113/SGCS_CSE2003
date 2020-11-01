#include <stdio.h>
int main()
{
	int N;
	int a11 = 1, a12 = 1, a21 = 1, a22 = 0;
	int r11=1, r12=1, r21=1, r22=0;
	int p11, p12, p21, p22;
	int result;
	int i;
	scanf("%d", &N);

	for (i = 0; i < N-1; i++)
	{
		p11=r11; p12=r12; p21=r21; p22=r22;
		r11 = p11 * a11 + p12 * a21;
		r12 = p11 * a12 + p12 * a22;
		
		r21 = p21 * a11 + p22 * a21;
		r22 = p21 * a12 + p22 * a22;
	}

	result = r11 * r22 - r12 * r21;
	printf("%d\n", r12);
}
