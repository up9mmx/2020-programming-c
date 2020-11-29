//file: nestedloop.c

#include <stdio.h>

int main(void)
{
	int m, n;
	for (m = 1; m <= 5; m++)
	{
		printf("m = %-2d\n", m);
		for (n = 1; n <= 7; n++)
			printf("n = %-3d", n);
		puts("");
	}
	return 0;
}
/*
m = 1
n = 1  n = 2  n = 3  n = 4  n = 5  n = 6  n = 7
m = 2
n = 1  n = 2  n = 3  n = 4  n = 5  n = 6  n = 7
m = 3
n = 1  n = 2  n = 3  n = 4  n = 5  n = 6  n = 7
m = 4
n = 1  n = 2  n = 3  n = 4  n = 5  n = 6  n = 7
m = 5
n = 1  n = 2  n = 3  n = 4  n = 5  n = 6  n = 7

*/