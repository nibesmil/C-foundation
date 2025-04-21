#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void) {
	int head = rand() % 2;
	return head;
}

int main(void) {

	int toss;
	int front = 0;
	int rear = 0;

	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1)
			front++;
		else
			rear++;
	}

	printf("앞면 : %d\n", front);
	printf("뒷면 : %d\n", rear);

	return 0;
}
