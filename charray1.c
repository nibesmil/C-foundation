#include <stdio.h>

int main(void) {

	int i;
	char str[4];
	
	str[0] = 'a';
	str[1] = 'c';
	str[2] = 'b';
	str[3] = '\0';

	i = 0;

	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}

	return 0;
}
