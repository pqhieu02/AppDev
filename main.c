#include "score.h"

void main() {
	int scores[MAX], marks[MAX], statistics[6] = { 0 };
	getScore(scores);
	eval(scores, marks);
	classification(marks, statistics);
}