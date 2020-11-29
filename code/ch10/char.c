//file: char.c
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의 
#include <stdio.h>

#include <ctype.h>1 //.문자 관련 함수는 헤더파일 ctype.h에 매크로로 정의

void print2char(char);

int main(void)
{
	char ch;

	printf("알파벳(종료x) 또는 다른 문자 입력하세요.\\n");
	do
	{
		printf("문자 입력 후 Enter: ");
		scanf("%c", &ch);
		getchar(); //enter 키 입력 받음
		if (isalpha(ch))
			print2char(ch);
		else
			printf("입력: %c\n", ch);
	} while (ch != 'x' && ch != 'X'); //입력이 x 또는 X 이면 종료

	return 0;
}

void print2char(char ch)
{
	if (isupper(ch))
		printf("입력: %c, 변환: %c\n", ch, tolower(ch));
	else
		printf("입력: %c, 변환: %c\n", ch, toupper(ch));

	return;
}
/*
알파벳(종료x) 또는 다른 문자 입력하세요.\n문자 입력 후 Enter: %
입력: %
문자 입력 후 Enter: s
입력: s, 변환: S
문자 입력 후 Enter: d
입력: d, 변환: D
문자 입력 후 Enter: F
입력: F, 변환: f
문자 입력 후 Enter: C
입력: C, 변환: c
문자 입력 후 Enter: X
입력: X, 변환: x
*/
