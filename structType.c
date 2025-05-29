#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {

	int type;

	union {
		int stu_number; //학번
		char reg_number[15]; //주민번호
	}id;
	char name[20];
};

void printf(struct student s) {
	switch (s.type) {

	case STU_NUMBER:
		printf("학번 : %d\n이름 : %s\n", s.id.stu_number, s.name);
		break;

	case REG_NUMBER:
		printf("주민번호 : %s\n이름 : %s\n", s.id.reg_number, s.name);
		break;

	default:
		printf("타입오류");
		break;
	}
}

int main(void) {

	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20201092;
	strcpy(s1.name, "임세빈");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "010917-0000000");
	strcpy(s2.name, "임세빈");

	printf(s1);
	printf(s2);

	return 0;
}
