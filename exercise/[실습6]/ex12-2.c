#include <stdio.h>
char x,y;

void next_char(char* a, char* b);
void print_result(char a, char b);

int main(void)
{
	char x,y;
	printf("Enter two chracters [A~T]: ");
	scanf("%c %c", &x, &y);
	next_char(&x, &y);
	print_result(x, y);
	
	next_char(&x, &y);
        print_result(x, y);

        next_char(&x, &y);
        print_result(x, y);

	return 0;
}

void next_char(char* a, char* b)
{
	x=(*a);
	y=(*b);
	(*a)=(*a)+1;
	(*b)=(*b)+2;
}

void print_result(char a, char b)
{
	printf("%c -> %c, %c -> %c\n", x,a,y,b);
}
