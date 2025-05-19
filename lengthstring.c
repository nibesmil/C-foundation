#include <stdio.h>

int main(void) {

	char str[50] = "임세빈그는감히전설이라고할수있다.";

	int i = 0;

	while (str[i] != 0)
		i++;

	printf("문자열 \%s\ 의 길이 : %d\n", str, i);

	return 0;
}
