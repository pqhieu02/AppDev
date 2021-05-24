#include "score.h"

void getScore(int* scores) {
	int input = 0, i = -1;
	printf("Enter the scores. Enter -1 to end.\n");
	while (i < MAX && input != -1) {
		scanf("%d", &input);
		if (input < -1 || input > 100) {
			printf("Invalid input\n");
		}
		else {
			i++;
			scores[i] = input;
		}
	}
	printf("The scores are: \n");
	for (int i = 0; i < MAX && scores[i] != -1; i++) {
		printf("%d\n", scores[i]);
	}
}