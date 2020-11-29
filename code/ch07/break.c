//file: break.c
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input;

	while (1)
	{
		printf("정수[음수, 0(종료), 양수]를 입력후 [Enter] :");
		scanf("%d", &input);
		printf("입력한 정수 %d\n", input);
		if (input == 0)
			break;
	}
	puts("종료합니다.");

	return 0;
}

/*
정수[음수, 0(종료), 양수]를 입력후 [Enter] :32
입력한 정수 32
정수[음수, 0(종료), 양수]를 입력후 [Enter] :415
입력한 정수 415
정수[음수, 0(종료), 양수]를 입력후 [Enter] :64
입력한 정수 64
정수[음수, 0(종료), 양수]를 입력후 [Enter] :32
입력한 정수 32
정수[음수, 0(종료), 양수]를 입력후 [Enter] :154
입력한 정수 154
정수[음수, 0(종료), 양수]를 입력후 [Enter] :-12
입력한 정수 -12
정수[음수, 0(종료), 양수]를 입력후 [Enter] :0
입력한 정수 0
종료합니다.
*/