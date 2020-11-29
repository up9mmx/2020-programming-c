//file: math.c
#include <stdio.h>

#include <math.h> //���� ���� �پ��� �Լ���� ���� �������

int main(void)
{
	printf("  i   i����  i������  ������(sqrt)\n");
	printf("----------------------------------------\n");
		for (int i = 3; i < 7; i++)
			printf("%3d %7.1f %9.1f %9.1f\n", i, pow(i, 2), pow(i, 3), sqrt(i));
	printf("\n");

	printf("exp(1.0) == %5.2f,", exp(1.0));
	printf("pow(2.72, 1.0) == %5.2f,", pow(2.72, 1.0));
	printf("sqrt(49) == %5.2f\n", sqrt(49));
	printf("abs(-10) == %3d, ", abs(-10));
	printf("ceil(7.1) == %5.2f,", ceil(7.1));
	printf("floor(6.9) == %5.2f\n", floor(6.9));

	return 0;
}
/*
  i   i����  i������  ������(sqrt)
----------------------------------------
  3     9.0      27.0       1.7
  4    16.0      64.0       2.0
  5    25.0     125.0       2.2
  6    36.0     216.0       2.4

exp(1.0) ==  2.72,pow(2.72, 1.0) ==  2.72,sqrt(49) ==  7.00
abs(-10) ==  10, ceil(7.1) ==  8.00,floor(6.9) ==  6.00
*/