//file: ptrtypecast.c
#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int *pi = &value;
	char *pc = (char *) &value;
	
	printf("변수명 저장값  주소값\n");
	printf("-----------------------------\n");
	printf(" value  %0#x  %u\n", value, pi); //정수 출력

	//문자 포인터로 문자 출력 모듈
	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d) %0#6x %2c %u\n", i, ch, ch, pc + i);
	}

	return 0;
}
/*
변수명 저장값  주소값
-----------------------------
 value  0x61626364  17825212
*(pc+0) 0x0064  d 17825212
*(pc+1) 0x0063  c 17825213
*(pc+2) 0x0062  b 17825214
*(pc+3) 0x0061  a 17825215
*/