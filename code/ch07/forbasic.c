//file: forbasic.c

#include <stdio.h>
#define MAX 5

int main(void)
{
	int i;

	for ( i = 1; i < MAX; i++)
	{
		printf("C ��� ����ֳ׿�! %d\n", i);

		printf("\n����� i => %d\n", i);
	}
	return 0;
}
/*
C ��� ����ֳ׿�! 1
C ��� ����ֳ׿�! 2
C ��� ����ֳ׿�! 3 
C ��� ����ֳ׿�! 4
C ��� ����ֳ׿�! 5

����� i => 6
*/