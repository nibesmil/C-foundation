#include <stdio.h>

int main(void) {

	int x = 20;
	int y = 30;

	int* p1;
	int* p2;

	p1 = &x;
	printf("p = %p\n", p1);
	printf("p = %u\n\n", *p1);

	p2 = &y;
	printf("p = %p\n", p2);
	printf("p = %u\n\n", *p2);

	return 0;
}
