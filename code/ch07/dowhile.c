//file: dowhile.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &input);
	} while (input != 0); //while (input);
	

	puts("�����մϴ�.");

	return 0;
}
/*
���� �Ǵ� 0(����)�� �Է�: 515
���� �Ǵ� 0(����)�� �Է�: 4
���� �Ǵ� 0(����)�� �Է�: 2
���� �Ǵ� 0(����)�� �Է�: 3
���� �Ǵ� 0(����)�� �Է�: -3
���� �Ǵ� 0(����)�� �Է�: 0
�����մϴ�.
*/