//file: threedary.c
#include <stdio.h>

#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	// 3���� �迭 �ʱ�ȭ, ù ��° ũ��� �������� ���� �� ����
	int score[][ROWSIZE][COLSIZE] = {
		 { {95, 85},
		   {85, 83},
		   {92, 75},
		   {90, 88} },
		 { {88, 77},
		   {72, 95},
		   {88, 92},
		   {93, 83} }
	};

	for (int i = 0; i < 2; i++)
	{
		if (i == 0) printf("[���� 1]");
		else printf("[���� 2]");
		printf("%11s%7s\n", "�߰�", "�⸻");

		for (int j = 0; j < ROWSIZE; j++)
		{
			printf("%10s%2d", "�л�", j + 1);
			for (int k = 0; k < COLSIZE; k++)
				printf("%6d", score[i][j][k]);
				printf("\n");
		}
		printf("\n");
	}
	return 0;
}
/*
[���� 1]       �߰�   �⸻
	  �л� 1    95    85
	  �л� 2    85    83
	  �л� 3    92    75
	  �л� 4    90    88

[���� 2]       �߰�   �⸻
	  �л� 1    88    77
	  �л� 2    72    95
	  �л� 3    88    92
	  �л� 4    93    83
*/