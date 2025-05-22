#include <stdio.h>

int main(void) {

	char name[100];
	char address[100];

	printf("이름 : ");
	gets_s(name, sizeof(name));

	printf("주소 : ");
	gets_s(address, sizeof(address));

	printf("반갑다, %s 거주 중인 %s!\n", address, name);

	return 0;
}
