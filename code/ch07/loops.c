//file: loops.c
#define _CRT_SECURE_NO_WARNINGS  //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input, sum, i, j;

	do
	{
		printf("양의 정수 또는 0(종료)을 입력:");
		scanf("%d", &input);

		for (i = 1; i <= input; i++)
		{
			for (j=1, sum=0; j<=i; j++)
			{
				printf("%d", j);
				j == i ? printf("=") : printf("+");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input > 0);

	puts("");

	return 0;
}
/*
양의 정수 또는 0(종료)을 입력:5
1=1
1+2=3
1+2+3=6
1+2+3+4=10
1+2+3+4+5=15
양의 정수 또는 0(종료)을 입력:9
1=1
1+2=3
1+2+3=6
1+2+3+4=10
1+2+3+4+5=15
1+2+3+4+5+6=21
1+2+3+4+5+6+7=28
1+2+3+4+5+6+7+8=36
1+2+3+4+5+6+7+8+9=45
양의 정수 또는 0(종료)을 입력:4
1=1
1+2=3
1+2+3=6
1+2+3+4=10
양의 정수 또는 0(종료)을 입력:

*/