#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	printf("==========로 또 번 호 생 성 기==========\n");

	int i;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 6; i++) {
		printf("%d\n", rand() % 45 + 1);
	}

	return 0;
}
