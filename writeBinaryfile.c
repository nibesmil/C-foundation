#include <stdio.h>

#define SIZE 5

int main(void) {

	int buffer[SIZE] = { 10, 20, 30, 40, 50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL) {
		fprintf(stderr, "binary.bin 파일 열 수 없음.\n");
		return 1;
	}

	fwrite(buffer, sizeof(int), SIZE, fp);

	fclose(fp);

	return 0;
}
