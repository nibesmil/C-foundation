#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

	int lower_case_count = 0;
	int upper_case_count = 0;
	int digit_count = 0;
	char password[100];
	int length;

	printf("사용할 패스워드 입력 : ");

	gets_s(password, sizeof(password));

	length = strlen(password);

	if (length < 7) {

		printf("암호가 짧습니다, 다시 입력해주세요.\n");
		return -1;
	}

	for (int i = 0; i < length; i++) {
		if (islower(password[i])) ++lower_case_count;
		if (isupper(password[i])) ++upper_case_count;
		if (isdigit(password[i])) ++digit_count;
	}

	if (lower_case_count > 0 && upper_case_count > 0 && digit_count > 0)
		printf("강한 암호입니다.\n");
	else
		printf("유용한 암호가 아닙니다. 다시 입력해주세요.");
	return 0;
}
