//file: whilebasic.c

#include <stdio.h>

int main(void)
{
	int count = 1;

	while(count <= 3)
	{
		printf("c��� ����ֳ׿�!\n");
		count++;
	};
	printf("\n����� count => %d\n", count);

	return 0;
}
/*
c��� ����ֳ׿�!
c��� ����ֳ׿�!
c��� ����ֳ׿�!

����� count => 4
*/