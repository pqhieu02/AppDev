#include "score.h"

void eval(int* scores, int* marks) {
	printf("The marks are: \n");
	for (int i = 0; i < MAX; i++) {
		if (scores[i] == -1) {
			marks[i] = -1;
			break;
		}
		marks[i] = scores[i] / 20;
	}
	for (int i = 0; i < MAX && marks[i] != -1; i++) {
		printf("%d\n", marks[i]);
	}
}