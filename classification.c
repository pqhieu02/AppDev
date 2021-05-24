#include "score.h"

void classification(int* marks, int* statistics) {
	printf("Statistics table: \n");
	for (int i = 0; i < MAX && marks[i] != -1; i++) {
		if (marks[i] == -1) {
			break;
		}
		statistics[marks[i]]++;
	}
	for (int i = 0; i <= 5; i++) {
		printf("%d %d\n", i, statistics[i]);
	}
}