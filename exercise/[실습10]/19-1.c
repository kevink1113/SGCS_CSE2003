#include <stdio.h>
int main(void)
{
	int x, y;
	int i;
	printf("Enter x, y: ");
	scanf("%d %d", &x, &y);

	if (x == 0 && y == 0)
		i = 0;
	else if (y == 0)
		i = 10;
	else if (x == y)
		i = 11;
	else if (x == 0)
		i = 12;
	else if (x == (-y))
		i = 13;
	else if ((x > 0 && y > 0) && y < x)
		i = 2;
	else if ((x > 0 && y > 0) && y > x)
		i = 1;

	else if ((x < 0 && y > 0) && y > -x)
		i = 8;
	else if ((x < 0 && y > 0) && y < -x)
		i = 7;
	else if ((x < 0 && y < 0) && y > x)
		i = 6;
	else if ((x < 0 && y < 0) && y < x)
		i = 5;
	else if ((x > 0 && y < 0) && y < -x)
		i = 4;
	else if ((x > 0 && y < 0) && y > -x)
		i = 3;

	switch (i)
	{
	case 0: printf("(0,0) is the origin.\n"); break;
	case 1: printf("(%d,%d) is on the region 1\n", x, y); break;
	case 2: printf("(%d,%d) is on the region 2\n", x, y); break;
	case 3: printf("(%d,%d) is on the region 3\n", x, y); break;
	case 4: printf("(%d,%d) is on the region 4\n", x, y); break;
	case 5: printf("(%d,%d) is on the region 5\n", x, y); break;
	case 6: printf("(%d,%d) is on the region 6\n", x, y); break;
	case 7: printf("(%d,%d) is on the region 7\n", x, y); break;
	case 8: printf("(%d,%d) is on the region 8\n", x, y); break;

	case 10: printf("(%d,%d) is on the line x\n", x, y); break;
	case 11: printf("(%d,%d) is on the line y=x\n", x, y); break;
	case 12: printf("(%d,%d) is on the line y\n", x, y); break;
	case 13: printf("(%d,%d) is on the line y=-x\n", x, y); break;
	}

	
	return 0;
}