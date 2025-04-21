#include <stdio.h>

int get_integer(void) {

	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);
	return n;
}

int is_prime(int n) {

	int i;

	for (i = 2; i < n; i++) {

		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void) {

	int n;
	n = get_integer();

	if (is_prime(n) == 1) {
		printf("입력한 %d는 소수입니다.", n);
	}
	else
		printf("입력한 %d는 소수가 아닙니다.", n);

	return 0;
}
