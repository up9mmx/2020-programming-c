//file:continue.c

#include <stdio.h>

int main(void)
{
	const int MAX =  15;
	
	printf("1에서 %d까지 정수 중에서 3으로 나누어 떨어지지 않는 수\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 3 == 0) //(!(i % 3))
			continue;
		printf("%3d",i);
	}
	puts("");

	return 0;
}

/*
1에서 15까지 정수 중에서 3으로 나누어 떨어지지 않는 수
  1  2  4  5  7  8 10 11 13 14
*/