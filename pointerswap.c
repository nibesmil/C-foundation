#include <stdio.h>


/* 포인터 사용해서 스왑할 때 (a, b는 스왑되지 않음)
void swap(int x, int y);

int main(void) {

	int a = 100;
	int b = 300;

	printf("a = %d, b = %d\n", a, b);

	swap(a, b);

	printf("a = %d, b = %d\n", a, b);
	return 0;

}

void swap(int x, int y) {

	int tmp;
	printf("스왑 전 : x = %d, y = %d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("스왑 후 : x = %d, y = %d\n", x, y);
}
*/

void swap(int *px, int *py);

int main(void) {

	int a = 100;
	int b = 300;

	printf("스왑 전 : a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("스왑 후 : a = %d, b = %d\n", a, b);
	return 0;

}

void swap(int* px, int* py) {

	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;

}
