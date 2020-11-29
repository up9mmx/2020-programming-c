//file: forbasic.c

#include <stdio.h>
#define MAX 5

int main(void)
{
	int i;

	for ( i = 1; i < MAX; i++)
	{
		printf("C 언어 재미있네요! %d\n", i);

		printf("\n제어변수 i => %d\n", i);
	}
	return 0;
}
/*
C 언어 재미있네요! 1
C 언어 재미있네요! 2
C 언어 재미있네요! 3 
C 언어 재미있네요! 4
C 언어 재미있네요! 5

제어변수 i => 6
*/