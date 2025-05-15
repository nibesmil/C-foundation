#include <stdio.h>

int main(void) {

	int i = 10;
	double d = 12.3;
	int* pi = NULL;

	double* pf = NULL;
	pi = &i;
	pf = &d;

	printf("%p, %p\n", pi, &i);
	printf("%p, %p\n", pf, &d);

	return 0;
}
