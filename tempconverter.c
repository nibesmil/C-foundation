#include <stdio.h>
#include <stdlib.h>


void printMenu() {
	printf("==================온도 변환기==================\n");
	printf("변환하고픈 온도를 선택하세요.\n'c' 섭씨 -> 화씨\n'f' 화씨 -> 섭씨\n'q' 종료\n");
}

double C2F(double c_temp) {
	
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) {

	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void) {

	char choice;
	double temp;

	while (1) {
		printMenu();
		printf("메뉴에서 선택 :");

		choice = getchar();

		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("섭씨 : ");
			scanf_s("%lf", &temp);
			printf("변환된 화씨온도 : %.2f \n\n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("화씨 : ");
			scanf_s("%lf", &temp);
			printf("변환된 섭씨온도 : %.2f \n\n", F2C(temp));
		}

		getchar();

	}

	return 0;
}
