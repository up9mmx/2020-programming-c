//file: repetition.c
#include <stdio.h>

int main(void)
{
	//��� ������ ���ڿ��� �ܼ��� �ݺ�
	printf("C ��� ����ֳ׿�\n");
	printf("C ��� ����ֳ׿�\n");
	printf("C ��� ����ֳ׿�\n");

	int n = 11;
	//�������� 1�� ������Ű�鼭 ��� �ݺ�
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}

/*
���
C ��� ����ֳ׿�
C ��� ����ֳ׿�
C ��� ����ֳ׿�
11
12
13
14
15
*/