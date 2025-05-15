#include <stdio.h>

int main(void) {

	int i = 30000;
	int* p = NULL;

	p = &i;
	printf("p = %p\n", p); //주소값
	printf("&i = %p\n", &i); //주소값
	printf("i = %d\n", i); //원래 i값
	printf("p = %d\n", *p); //주소 안에 들어있는 정수값

	return 0;
}
