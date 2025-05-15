#include <stdio.h>

int main(void) {

	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000; 
	pd = (double*)10000;
	//기본 주소값 전부 10000이라고 가정

	printf("pc = %u, pc+1 = %u, pc+2 = %u\n", pc, pc + 1, pc + 2); //char = 1byte (1씩 증가)
	printf("pi = %u, pi+1 = %u, pi+2 = %u\n", pi, pi + 1, pi + 2); //int = 4byte (4씩 증가)
	printf("pd = %u, pd+1 = %u, pd+2 = %u\n", pd, pd + 1, pd + 2); //double = 8byte (8씩 증가)



	return 0;
}
