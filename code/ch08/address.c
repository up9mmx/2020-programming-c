//file: //address.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);
	printf("�Է°�: %d\n", input);
	printf("�ּҰ�: %u(10����), %p(16����)\n", (int) &input, &input);
	printf("�ּҰ�: %d(10����), %#x(16����)\n", (unsigned) &input, (int) &input );
	printf("�ּҰ� ũ��: %d\n", sizeof(&input));
	return 0;
}
/*
���� �Է�: 100
�Է°�: 100
�ּҰ�: 7338720(10����), 006FFAE0(16����)
�ּҰ�: 7338720(10����), 0x6ffae0(16����)
�ּҰ� ũ��: 4

*/