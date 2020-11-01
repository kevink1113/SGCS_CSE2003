#include <stdio.h>
void binary(int *b_0, int *b_1, int *b_2, int *b_3, int *b_4, char c);

int main(void)
{
	int b_0, b_1, b_2, b_3, b_4;
	int ch;
	printf("대문자 하나를 입력하세요 : ");
	scanf("%c", &ch);
	binary(&ch, &ch, &ch, &ch, &ch, ch);

	return 0;
}

void binary(int *b_0, int *b_1, int *b_2, int *b_3, int *b_4, char c)
{
	int q, w, p, r, t;
	int z;
	z = c - 65;
	q = z / 16;
	w = (z - 16 * q) / 8;
	p = (z - 16 * q - 8 * w) / 4;
	r = (z - 16 * q - 8 * w - 4 * p) / 2;
	t = (z - 16 * q - 8 * w - 4 * p - 2 * r);
	printf("2진수 출력 결과 : %d%d%d%d%d", q, w, p, r, t);
}
