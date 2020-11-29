//file: pointerarray.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>

#define SIZE 3

int main(void)
{
	//������ �迭 ��������
	int* pary[SIZE] = { NULL };
	int a = 10, b = 20, c = 30;

	pary[0] = &a;
	pary[1] = &b;
	pary[2] = &c;
	for (int i = 0; i < SIZE; i++)
		printf("*pary[%d] = %d\n", i, *pary[i]);

	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", pary[i]);
		printf("%d, %d, %d\n", a, b, c);
	}

	return 0;
}
/*
*pary[0] = 10
*pary[1] = 20
*pary[2] = 30
78
78, 20, 30
21
78, 21, 30
45
78, 21, 45
*/