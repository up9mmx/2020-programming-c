//file: menu.c
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("\t [1] 한식\n");
		printf("\t [2] 양식\n");
		printf("\t [3] 분식\n");
		printf("\t [4] 기타\n");
		printf("메뉴 번호 선택 후[Enter] :");
		scanf("%d", &input);
		printf("선택 메뉴 %d\n", input);
		if (input <= 4 && input >= 1)
			break;
	} while (1);

	return 0;
}
/*
		 [1] 한식
		 [2] 양식
		 [3] 분식
		 [4] 기타
메뉴 번호 선택 후[Enter] :5
선택 메뉴 5
		 [1] 한식
		 [2] 양식
		 [3] 분식
		 [4] 기타
메뉴 번호 선택 후[Enter] :2
선택 메뉴 2
*/