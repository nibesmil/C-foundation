#include <stdio.h>

int main(void) {

	FILE* fp = NULL;

	fp = fopen("gimoddi.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('d', fp);

	fclose(fp);

	return 0;
}
