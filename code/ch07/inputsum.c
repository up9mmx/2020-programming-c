//file: inputsum.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int i, sum, max;

	printf("1�������� ���������� ���� ���� ���� ���� �ϳ� �Է�:");
	scanf("%d", &max);

	for (i = 1, sum = 0; i <= max; i++) //++i�� ����
		sum += i; //sum = sum + i;
	printf("\nfor ������ ���� 1���� %d������ ��", max, sum);

	i = 1, sum = 0;
	while (i <= max)
	{
		sum += i; //sum = sum + i
		i++;	  // ++i�� ����
	}
	printf("while ������ ���� 1���� %d���� ��: %3d\n", max, sum);
	
	return 0;
}

/*
1�������� ���������� ���� ���� ���� ���� �ϳ� �Է�:15

for ������ ���� 1���� 15������ ��while ������ ���� 1���� 15���� ��: 120
*/