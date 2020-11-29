//file: char.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ���� 
#include <stdio.h>

#include <ctype.h>1 //.���� ���� �Լ��� ������� ctype.h�� ��ũ�η� ����

void print2char(char);

int main(void)
{
	char ch;

	printf("���ĺ�(����x) �Ǵ� �ٸ� ���� �Է��ϼ���.\\n");
	do
	{
		printf("���� �Է� �� Enter: ");
		scanf("%c", &ch);
		getchar(); //enter Ű �Է� ����
		if (isalpha(ch))
			print2char(ch);
		else
			printf("�Է�: %c\n", ch);
	} while (ch != 'x' && ch != 'X'); //�Է��� x �Ǵ� X �̸� ����

	return 0;
}

void print2char(char ch)
{
	if (isupper(ch))
		printf("�Է�: %c, ��ȯ: %c\n", ch, tolower(ch));
	else
		printf("�Է�: %c, ��ȯ: %c\n", ch, toupper(ch));

	return;
}
/*
���ĺ�(����x) �Ǵ� �ٸ� ���� �Է��ϼ���.\n���� �Է� �� Enter: %
�Է�: %
���� �Է� �� Enter: s
�Է�: s, ��ȯ: S
���� �Է� �� Enter: d
�Է�: d, ��ȯ: D
���� �Է� �� Enter: F
�Է�: F, ��ȯ: f
���� �Է� �� Enter: C
�Է�: C, ��ȯ: c
���� �Է� �� Enter: X
�Է�: X, ��ȯ: x
*/
